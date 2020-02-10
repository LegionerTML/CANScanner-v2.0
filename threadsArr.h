#pragma once
#include "structCMSG.cpp"
#include <Windows.h>
#include <thread>

using namespace System;
using namespace System::Threading;

ref class pingOfSend {
public:
	pingOfSend(HANDLE handle, String^ name, CMSG* msg);
	pingOfSend(HANDLE handle, String^ name, CMSG* msg, int timeout);
	~pingOfSend();
	String^ getName();
	void resume();
	void pause();
	void stopTh();
	bool is_alive();
	bool edit(CMSG* msg, int timeout);
	bool start();
	//struct pingOfSend* ptr;

private:
	Thread^ sendingTh;
	HANDLE mainhandle;
	String^ nameTh;
	HMODULE hLib = LoadLibrary(L"SIECA132.DLL");
	CMSG* msg1;
	void sendingFunc();
	bool isSending;
	int timeoutTh;
};

pingOfSend::pingOfSend(HANDLE handle, String^ name, CMSG* msg) {
	mainhandle = handle;
	nameTh = name;
	timeoutTh = 100;
	msg1 = msg;
	//��������� ������
	sendingTh = gcnew Thread(gcnew ThreadStart(this, &pingOfSend::sendingFunc));

}
void test(int n) {

}
pingOfSend::pingOfSend(HANDLE handle, String^ name, CMSG* msg, int timeout) {
	mainhandle = handle;
	msg1 = msg;
	nameTh = name;
	timeoutTh = timeout;
	isSending = true;
	sendingTh = gcnew Thread(gcnew ThreadStart(this, &pingOfSend::sendingFunc));
	//sendingTh->Start();
	//sendingTh = new std::thread(&sendingFunc); 
}

pingOfSend::~pingOfSend() {
	isSending = false;
	sendingTh->Abort();
	delete[] msg1;
}

bool pingOfSend::start() {
	bool ret = false;
	if (!sendingTh->IsAlive)	sendingTh->Start();
	if (sendingTh->IsAlive) {
		ret = true;
	}
	return ret;
}



bool pingOfSend::is_alive() {
	bool ret = true;
	return ret;
}

bool pingOfSend::edit(CMSG* msg, int timeout) {
	isSending = false;
	////sendingTh->join();
	delete sendingTh;
	msg1 = msg;
	timeoutTh = timeout;
	isSending = true;
	//sendingTh = new std::thread(&pingOfSend::sendingFunc);
	return false;
}

void pingOfSend::resume() {
	if (sendingTh->ThreadState == System::Threading::ThreadState::Suspended) sendingTh->Resume();
}

void pingOfSend::pause() {
	if (sendingTh->ThreadState == System::Threading::ThreadState::WaitSleepJoin) sendingTh->Suspend();
}

void pingOfSend::stopTh() {
	if (sendingTh->ThreadState == System::Threading::ThreadState::Suspended) sendingTh->Resume();
	sendingTh->Abort();
}

String^ pingOfSend::getName() {
	return nameTh;
}

void pingOfSend::sendingFunc() {
	int l_retval;
	long b_len = 1;
	CMSG canMsg = msg1[0];
	int timeout = timeoutTh;
	HANDLE handle = mainhandle;
	typedef long (WINAPI* mycanSend)(void*, CMSG*, long*);
	mycanSend canSend1;
	(FARPROC&)canSend1 = GetProcAddress(hLib, "canSend");

	while (isSending) {
		l_retval = canSend1(handle, &canMsg, &b_len);
		if (!l_retval) {
			System::Threading::Thread::Sleep(timeout);
		}
		else {
			//isSending = false;
		}
	}
}