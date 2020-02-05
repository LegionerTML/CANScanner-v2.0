#pragma once
#include "structCMSG.cpp"
#include <Windows.h>
#include "specArr.h"
#include <time.h>
#include <fstream>
#include <iostream>

using namespace System;
using namespace System::Threading;

ref class readArr {
public:
	readArr(HANDLE handle, String^ name);
	~readArr();
	String^ getName();
	System::Void stopTh();
	dataArr* getAll();
	bool start();
	int getSize();
	bool reset();
	bool saveLog(bool state, System::String^ str);

private:
	Thread^ sendingTh;
	HANDLE mainhandle;
	String^ nameTh, ^save_dir;
	HMODULE hLib = LoadLibrary(L"SIECA132.DLL");
	std::ofstream *ofstr;
	CMSG* msg1;
	void readingFunc();
	bool isReading, is_reset, isLog, initlog;
	int timeoutTh, sizelist;
	String^ to_hex(long value);
	int sizeArr;
	dataArr* resize(dataArr* mass, int size);
	bool update(long l_id, unsigned char aby_data[8], int len);
	dataArr* datcom;
	//std::list <unsigned long>* lst {"18000000", "00", "1"};
	//lister *glist = new lister();
};

//конструктор
readArr::readArr(HANDLE handle, String^ name) {
	mainhandle = handle;
	nameTh = name;
	sizeArr = 0;
	datcom = new dataArr[sizeArr];
	sendingTh = gcnew Thread(gcnew ThreadStart(this, &readArr::readingFunc));
}

readArr::~readArr() {
	if (sendingTh->IsAlive) {
		sendingTh->Suspend();
	}
	sendingTh->Abort();
	delete[] datcom;
	delete[] ofstr;
	delete[] msg1;
}

//запуск потока
bool readArr::start() {
	isReading = true;
	is_reset = false;
	isLog = false;
	sendingTh->Start();
	return sendingTh->IsAlive;
}

//возврат данных с базы
dataArr* readArr::getAll() {
	//запрос в бд
	sizeArr = sizeArr;
	return datcom;
}

//возврат размера базы
int readArr::getSize() {
	return sizeArr;
}

//возврат имени потока
String^ readArr::getName() {
	return nameTh;
}

//очистка базы
bool readArr::reset() {
	is_reset = true;
	sizeArr = 0;
	return is_reset;
}

//сохранение логов
bool readArr::saveLog(bool state, System::String^ str) {
	
	save_dir = str;
	initlog = true;
	isLog = state;
	return isLog;
}

//остановка потока
System::Void readArr::stopTh() {
	isReading = false;
	sendingTh->Abort();
	//sendingTh->Suspend();
}

//функци€ перевода числа в шестнадцатеричный формат
String^ readArr::to_hex(long value) {
	//функци€ перевода числа в шестнадцатеричный формат
	int res = 0, buff = 0;
	char symbols[6] = { 'A', 'B', 'C', 'D', 'E', 'F' };
	String^ str = "";
	do {
		buff = (value % 16);
		if (buff > 9) { str = (wchar_t)symbols[buff - 10] + str; }
		else str = (char)buff + str;
		value /= 16;
	} while (value);
	return str;
}

//изменение размера базы
dataArr* readArr::resize(dataArr* mass, int size) {
	dataArr* buff;
	buff = new dataArr[size];
	if (size > sizeArr) {
		for (int i = 0; i < sizeArr; i++) {
			buff[i].l_id = mass[i].l_id;
			buff[i].len = mass[i].len;
			buff[i].count = mass[i].count;
			for (int j = 0; j < 8; j++) {
				buff[i].aby_data[j] = mass[i].aby_data[j];
			}
		}
	}
	else {
		for (int i = 0; i < size; i++) {
			buff[i].l_id = mass[i].l_id;
			buff[i].len = mass[i].len;
			buff[i].count = mass[i].count;
			for (int j = 0; j < 8; j++) {
				buff[i].aby_data[j] = mass[i].aby_data[j];
			}
		}
	}
	delete[] mass;
	return buff;
}

//функци€ обновлени€  массива
bool readArr::update(long l_id, unsigned char aby_data[8], int len) {
	bool ret = false;
	
	for (int i = 0; i < sizeArr; i++) {
		if (datcom[i].l_id == l_id) {
			datcom[i].count++;
			for (int j = 0; j < 8; j++) datcom[i].aby_data[j] = aby_data[j];
			datcom[i].len = len;
			ret = true;
			break;
		}
	}
	if (!ret) {
		datcom = resize(datcom, sizeArr + 1);
		datcom[sizeArr].l_id = l_id;
		for (int i = 0; i < 8; i++) datcom[sizeArr].aby_data[i] = aby_data[i];
		datcom[sizeArr].len = len;
		datcom[sizeArr].count = 1;
		sizeArr++;
		ret = true;
	}

	return ret;
}

//функци€ чтени€ внутри потока
void readArr::readingFunc() {
	time_t dtime;
	std::ofstream fopen;
	char buff[255] = { 0 };
	HANDLE handle = mainhandle;
	long l_retval, l_id = 0, b_len = 1;
	int len = 0;
	unsigned char aby_data[8];
	CMSG canMsg;
	
	//структура дл€ чтени€ шины
	void (*myCMSG)();
	(FARPROC&)myCMSG = GetProcAddress(hLib, "CMSG");
	typedef long (WINAPI* mycanRead)(void*, CMSG*, long*);
	mycanRead canRead1;
	(FARPROC&)canRead1 = GetProcAddress(hLib, "canRead");
	
	//закончить логи
	while (isReading) {
		if (is_reset) {
			sizeArr = 0;
			datcom = resize(datcom, 0);
			is_reset = false;
		}
		l_retval = canRead1(handle, &canMsg, &b_len);
		if (l_retval == 0) {
			l_id = canMsg.l_id;
			len = canMsg.by_len;
			if (update(l_id, canMsg.aby_data, len) == false) {
				isReading = false;
			}
			if (isLog) {
				//логи
				if (initlog) {
					if (save_dir->Length < sizeof(buff)) {
						sprintf(buff, "%s", save_dir);
					}
					std::string strr(buff);
					fopen.open(strr + "\\log.txt", std::ios_base::out | std::ios_base::trunc);
					if (fopen.is_open()) {
						initlog = false;
					}
				}
				else {
					if (fopen.is_open()) {
						dtime = time(NULL);
						fopen << asctime(localtime(&dtime)) << " " << l_id << " ";
						for (int i = 0; i < 8; i++) {
							fopen << std::hex << int(canMsg.aby_data[i]);
							fopen << " ";
						}
						fopen << std::endl;
					}
				}
			}
		}

		//odbc - oracle 
		//сохранение посылки в базу
	}
}