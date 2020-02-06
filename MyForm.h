#pragma once
#include "PassForm.h"
#include "SpecElem.h"
#include <fstream>
#include <Windows.h>
#include <time.h>
#include "structCMSG.cpp"
#include <thread>
#include <iostream>
#include <sstream>
#include <ctime>
#include "sendingForm.h"
#include "threadsArr.h"
#include "readArr.h"

namespace CANScannerv20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading::Tasks;
	using namespace System::Threading;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ connectionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ connectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ disconnectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ actionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveLogToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ resetToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ enterPasswordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ reading;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ sending;

private: System::Windows::Forms::Button^ buttonSend;





private: System::Windows::Forms::ListBox^ listBox2;








private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button1;

private: System::Windows::Forms::DataGridView^ dataGridView2;



	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Count;













	private: System::Windows::Forms::DataGridViewButtonColumn^ buttons;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data27;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ data28;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTime;




































	private: System::ComponentModel::IContainer^ components;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->connectionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->connectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->disconnectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveLogToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enterPasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->reading = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Count = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sending = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->buttons = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonSend = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->reading->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->sending->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Window;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->connectionToolStripMenuItem,
					this->actionToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(839, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->TabStop = true;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// connectionToolStripMenuItem
			// 
			this->connectionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->connectToolStripMenuItem,
					this->disconnectToolStripMenuItem
			});
			this->connectionToolStripMenuItem->Name = L"connectionToolStripMenuItem";
			this->connectionToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->connectionToolStripMenuItem->Text = L"Соединение";
			this->connectionToolStripMenuItem->ToolTipText = L"Подключение к устройству";
			// 
			// connectToolStripMenuItem
			// 
			this->connectToolStripMenuItem->Name = L"connectToolStripMenuItem";
			this->connectToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->connectToolStripMenuItem->Text = L"Подключить";
			this->connectToolStripMenuItem->ToolTipText = L"Подключиться к устройству";
			this->connectToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::connectToolStripMenuItem_Click);
			// 
			// disconnectToolStripMenuItem
			// 
			this->disconnectToolStripMenuItem->Enabled = false;
			this->disconnectToolStripMenuItem->Name = L"disconnectToolStripMenuItem";
			this->disconnectToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->disconnectToolStripMenuItem->Text = L"Отключить";
			this->disconnectToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::disconnectToolStripMenuItem_Click);
			// 
			// actionToolStripMenuItem
			// 
			this->actionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->readToolStripMenuItem,
					this->saveLogToolStripMenuItem, this->resetToolStripMenuItem, this->enterPasswordToolStripMenuItem
			});
			this->actionToolStripMenuItem->Name = L"actionToolStripMenuItem";
			this->actionToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->actionToolStripMenuItem->Text = L"Действия";
			// 
			// readToolStripMenuItem
			// 
			this->readToolStripMenuItem->Enabled = false;
			this->readToolStripMenuItem->Name = L"readToolStripMenuItem";
			this->readToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->readToolStripMenuItem->Text = L"Чтение CAN";
			this->readToolStripMenuItem->ToolTipText = L"Прием посылок с CAN-шины";
			this->readToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem_Click);
			// 
			// saveLogToolStripMenuItem
			// 
			this->saveLogToolStripMenuItem->Enabled = false;
			this->saveLogToolStripMenuItem->Name = L"saveLogToolStripMenuItem";
			this->saveLogToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->saveLogToolStripMenuItem->Text = L"Сохранить логи";
			this->saveLogToolStripMenuItem->ToolTipText = L"Сохранение принятых посылок в log.txt";
			this->saveLogToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveLogToolStripMenuItem_Click);
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->Enabled = false;
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			this->resetToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->resetToolStripMenuItem->Text = L"Сброс";
			this->resetToolStripMenuItem->ToolTipText = L"Обновить таблицу чтения CAN-шины";
			this->resetToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::resetToolStripMenuItem_Click);
			// 
			// enterPasswordToolStripMenuItem
			// 
			this->enterPasswordToolStripMenuItem->Name = L"enterPasswordToolStripMenuItem";
			this->enterPasswordToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->enterPasswordToolStripMenuItem->Text = L"Ввести пароль";
			this->enterPasswordToolStripMenuItem->ToolTipText = L"Доступ к специальным возможностям";
			this->enterPasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::enterPasswordToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(26, 20);
			this->aboutToolStripMenuItem->Text = L"\?";
			this->aboutToolStripMenuItem->ToolTipText = L"Описание";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->reading);
			this->tabControl1->Controls->Add(this->sending);
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl1->ItemSize = System::Drawing::Size(100, 18);
			this->tabControl1->Location = System::Drawing::Point(0, 27);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(839, 490);
			this->tabControl1->TabIndex = 1;
			// 
			// reading
			// 
			this->reading->BackColor = System::Drawing::Color::White;
			this->reading->Controls->Add(this->dataGridView1);
			this->reading->Location = System::Drawing::Point(4, 22);
			this->reading->Name = L"reading";
			this->reading->Padding = System::Windows::Forms::Padding(3);
			this->reading->Size = System::Drawing::Size(831, 464);
			this->reading->TabIndex = 0;
			this->reading->Text = L"Чтение";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->ID, this->data1,
					this->data2, this->data3, this->data4, this->data5, this->data6, this->data7, this->data8, this->Count
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(831, 464);
			this->dataGridView1->TabIndex = 2;
			// 
			// ID
			// 
			this->ID->FillWeight = 71.06599F;
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 80;
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data1
			// 
			this->data1->HeaderText = L"Байт 1";
			this->data1->MinimumWidth = 50;
			this->data1->Name = L"data1";
			this->data1->ReadOnly = true;
			this->data1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data2
			// 
			this->data2->HeaderText = L"Байт 2";
			this->data2->MinimumWidth = 50;
			this->data2->Name = L"data2";
			this->data2->ReadOnly = true;
			this->data2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data3
			// 
			this->data3->HeaderText = L"Байт 3";
			this->data3->MinimumWidth = 50;
			this->data3->Name = L"data3";
			this->data3->ReadOnly = true;
			this->data3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data4
			// 
			this->data4->HeaderText = L"Байт 4";
			this->data4->MinimumWidth = 50;
			this->data4->Name = L"data4";
			this->data4->ReadOnly = true;
			this->data4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data5
			// 
			this->data5->HeaderText = L"Байт 5";
			this->data5->MinimumWidth = 50;
			this->data5->Name = L"data5";
			this->data5->ReadOnly = true;
			this->data5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data6
			// 
			this->data6->HeaderText = L"Байт 6";
			this->data6->MinimumWidth = 50;
			this->data6->Name = L"data6";
			this->data6->ReadOnly = true;
			this->data6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data7
			// 
			this->data7->HeaderText = L"Байт 7";
			this->data7->MinimumWidth = 50;
			this->data7->Name = L"data7";
			this->data7->ReadOnly = true;
			this->data7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data8
			// 
			this->data8->HeaderText = L"Байт 8";
			this->data8->MinimumWidth = 50;
			this->data8->Name = L"data8";
			this->data8->ReadOnly = true;
			this->data8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// Count
			// 
			this->Count->FillWeight = 64.36745F;
			this->Count->HeaderText = L"Количество";
			this->Count->MinimumWidth = 100;
			this->Count->Name = L"Count";
			this->Count->ReadOnly = true;
			this->Count->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// sending
			// 
			this->sending->BackColor = System::Drawing::Color::White;
			this->sending->Controls->Add(this->dataGridView2);
			this->sending->Controls->Add(this->button3);
			this->sending->Controls->Add(this->button2);
			this->sending->Controls->Add(this->button1);
			this->sending->Controls->Add(this->buttonSend);
			this->sending->Enabled = false;
			this->sending->Location = System::Drawing::Point(4, 22);
			this->sending->Name = L"sending";
			this->sending->Padding = System::Windows::Forms::Padding(3);
			this->sending->Size = System::Drawing::Size(831, 464);
			this->sending->TabIndex = 1;
			this->sending->Text = L"Отправка";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->buttons,
					this->colId, this->data21, this->data22, this->data23, this->data24, this->data25, this->data26, this->data27, this->data28,
					this->colTime
			});
			this->dataGridView2->Location = System::Drawing::Point(0, 36);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(831, 428);
			this->dataGridView2->TabIndex = 3;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellClick);
			// 
			// buttons
			// 
			this->buttons->FillWeight = 50;
			this->buttons->HeaderText = L"";
			this->buttons->Name = L"buttons";
			this->buttons->ReadOnly = true;
			// 
			// colId
			// 
			this->colId->FillWeight = 80;
			this->colId->HeaderText = L"ID";
			this->colId->MinimumWidth = 15;
			this->colId->Name = L"colId";
			this->colId->ReadOnly = true;
			this->colId->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data21
			// 
			this->data21->FillWeight = 60;
			this->data21->HeaderText = L"Байт 1";
			this->data21->MinimumWidth = 30;
			this->data21->Name = L"data21";
			this->data21->ReadOnly = true;
			this->data21->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data22
			// 
			this->data22->FillWeight = 60;
			this->data22->HeaderText = L"Байт 2";
			this->data22->MinimumWidth = 30;
			this->data22->Name = L"data22";
			this->data22->ReadOnly = true;
			this->data22->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data23
			// 
			this->data23->FillWeight = 60;
			this->data23->HeaderText = L"Байт 3";
			this->data23->MinimumWidth = 30;
			this->data23->Name = L"data23";
			this->data23->ReadOnly = true;
			this->data23->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data24
			// 
			this->data24->FillWeight = 60;
			this->data24->HeaderText = L"Байт 4";
			this->data24->MinimumWidth = 30;
			this->data24->Name = L"data24";
			this->data24->ReadOnly = true;
			this->data24->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data25
			// 
			this->data25->FillWeight = 60;
			this->data25->HeaderText = L"Байт 5";
			this->data25->MinimumWidth = 30;
			this->data25->Name = L"data25";
			this->data25->ReadOnly = true;
			this->data25->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data26
			// 
			this->data26->FillWeight = 60;
			this->data26->HeaderText = L"Байт 6";
			this->data26->MinimumWidth = 30;
			this->data26->Name = L"data26";
			this->data26->ReadOnly = true;
			this->data26->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data27
			// 
			this->data27->FillWeight = 60;
			this->data27->HeaderText = L"Байт 7";
			this->data27->MinimumWidth = 30;
			this->data27->Name = L"data27";
			this->data27->ReadOnly = true;
			this->data27->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// data28
			// 
			this->data28->FillWeight = 60;
			this->data28->HeaderText = L"Байт 8";
			this->data28->MinimumWidth = 30;
			this->data28->Name = L"data28";
			this->data28->ReadOnly = true;
			this->data28->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// colTime
			// 
			this->colTime->FillWeight = 50;
			this->colTime->HeaderText = L"Период";
			this->colTime->MinimumWidth = 30;
			this->colTime->Name = L"colTime";
			this->colTime->ReadOnly = true;
			this->colTime->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(712, 7);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Удалить все";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(478, 7);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(595, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Редактировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::edit_Click);
			// 
			// buttonSend
			// 
			this->buttonSend->Location = System::Drawing::Point(6, 7);
			this->buttonSend->MinimumSize = System::Drawing::Size(75, 20);
			this->buttonSend->Name = L"buttonSend";
			this->buttonSend->Size = System::Drawing::Size(111, 23);
			this->buttonSend->TabIndex = 2;
			this->buttonSend->Text = L"Добавить";
			this->buttonSend->UseVisualStyleBackColor = true;
			this->buttonSend->Click += gcnew System::EventHandler(this, &MyForm::buttonSendClick);
			// 
			// listBox2
			// 
			this->listBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(4, 519);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(831, 43);
			this->listBox2->TabIndex = 1;
			this->listBox2->TabStop = false;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(839, 569);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(800, 460);
			this->Name = L"MyForm";
			this->Text = L"CANScanner";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->reading->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->sending->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: PassForm^ PF = gcnew PassForm();
	private: SpecElem^ DF = gcnew SpecElem();
	private: sendingForm^ SF = gcnew sendingForm();
	
	
	//временный поток
	private: readArr^ readThread;
	//
	//реформировать массив для отправки в однонаправленный список
	//в идеале подключить бд для взаимодействия и выгрузки
	//добавить алгоритмы сортировки таблицы по различным столбцам
	//
	//private: cli::array<pingOfSend>^ testThread = new cli::array<pingOfSend>(20);
	//
	//private: pingOfSend ^testThread;
	private: cli::array<int>^ sendingFlags = gcnew cli::array<int>(20);
	private: bool isPassTrue = false, isConnect = false, isReading = false;
	private: int iii = 0, nowMesgS = 0, countOfSThreads = 0, back = 0, ff = 0;
	protected: HANDLE mainhandle;
	//HANDLE handle;
	HMODULE hLib = LoadLibrary(L"SIECA132.DLL");
	Generic::List<pingOfSend^>^ lister = gcnew Generic::List<pingOfSend^>();
	
//////
//////функции работы со списком
//////
////добавление потока в конец списка
//
//поиск потока в списке
private: int findThread(String^ name) {
	for (int i = 0; i < lister->Count; i++) {
		if (lister[i]->getName() == name) {
			return i;
		}
	}
	return -1;
}
//
////изменение параметров потока в списке
//private: struct pingOfSend* editThread(String^ name, CMSG* canMsg, int timeout) {
//	pingOfSend* temp = testThread, * lst = findThread(name);
//	while (temp->ptr != lst) {
//		temp = temp->ptr;
//	}
//	temp->edit(canMsg, timeout);
//
//	return temp;
//}

//////
//////
//////

//////
//////функции перевода типов
//////
private: String^ to_hex(long value) {
	//функция перевода числа в шестнадцатеричный формат
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

private: System::Int64 Str_to_int(String^ str) {
	//десятичный в шестнадцатеричный
	System::Int64 ret = 0;
	int buf;
	char chstr;
	for (int i = 0; i < 8; i++) {
		chstr = Convert::ToChar(str[i]);
		if (chstr == 'A') {	buf = 10; }
		else if (chstr == 'B') { buf = 11; }
		else if (chstr == 'C') { buf = 12; }
		else if (chstr == 'D') { buf = 13; }
		else if (chstr == 'E') { buf = 14; }
		else if (chstr == 'F') { buf = 15; }
		else buf = Convert::ToInt32(chstr) - 48;
		ret += std::pow(16,(7-i)) * buf;
	}
	return ret; 
}

//шестнадцатеричный в десятичный
private: System::Int64 to_dec(String^ str) {
	System::Int64 ret = 0;
	int buf = 0;
	char chstr;
	for (int i = 0; i < str->Length; i++) {
		chstr = Convert::ToChar(str[i]);
		if (chstr == 'A') { buf = 10; }
		else if (chstr == 'B') { buf = 11; }
		else if (chstr == 'C') { buf = 12; }
		else if (chstr == 'D') { buf = 13; }
		else if (chstr == 'E') { buf = 14; }
		else if (chstr == 'F') { buf = 15; }
		else buf = Convert::ToInt32(chstr) - 48;
		ret += std::pow(16, (str->Length - 1 - i)) * buf;
	}
	return ret;
}

private: System::Int64 hex_data(char s1, char s2) {
	System::Int64 ret = 0;
	int buf;

	if (s1 == 'A') { buf = 10; }
	else if (s1 == 'B') { buf = 11; }
	else if (s1 == 'C') { buf = 12; }
	else if (s1 == 'D') { buf = 13; }
	else if (s1 == 'E') { buf = 14; }
	else if (s1 == 'F') { buf = 15; }
	else buf = Convert::ToInt32(s1) - 48;
	ret += 16 * buf;

	if (s2 == 'A') { buf = 10; }
	else if (s2 == 'B') { buf = 11; }
	else if (s2 == 'C') { buf = 12; }
	else if (s2 == 'D') { buf = 13; }
	else if (s2 == 'E') { buf = 14; }
	else if (s2 == 'F') { buf = 15; }
	else buf = Convert::ToInt32(s2) - 48;
	ret += buf;

	return ret;
}
//////
//////
//////

private: System::Void buttonSendClick(System::Object^ sender, System::EventArgs^ e) {
	//Кнопка отправки
	if (isConnect == true) {
		if (nowMesgS < 20) {
			SF->ShowDialog();
			if (SF->DialogResult == System::Windows::Forms::DialogResult::OK) {
				String^ sdata = SF->getdata();
				pingOfSend^ buffThread;
				int emptycounter = 0;
				unsigned char data[8];
				for (int i = 0; i < 8; i++) {
					data[i] = hex_data(sdata[2 * i], sdata[2 * i + 1]);
				}
				HANDLE handle = mainhandle;
				long l_retval, b_len = 1;
				int timeout = 0;
				CMSG canMsg[1];
				bool stateS = SF->getState();
				unsigned char bytearray[8];
				//структура для чтения шины
				void (*myCMSG)();
				(FARPROC&)myCMSG = GetProcAddress(hLib, "CMSG");
				typedef long (WINAPI* mycanSend)(void*, CMSG*, long*);
				mycanSend canSend1;
				(FARPROC&)canSend1 = GetProcAddress(hLib, "canSend");

				canMsg[0].l_id = Str_to_int(SF->getid());
				canMsg[0].by_len = 8;
				for (int i = 0; i < 8; i++) {
					bytearray[i] = data[i];
				}
				for (int i = 0; i < 8; i++) {
					canMsg[0].aby_data[i] = bytearray[i];
				}
				canMsg[0].by_msg_lost = 0;
				canMsg[0].by_extended = 1;
				canMsg[0].by_remote = 0;
				for (int i = 0; i < dataGridView2->Rows->Count; i++) {
					if (dataGridView2->Rows[i]->Cells[1]->Value->ToString() == SF->getid()) {
						//edit
						break;
					}
				}

				if (!stateS) {	//отправка одного сообщения
					dataGridView2->Rows->Add("Send", to_hex(canMsg[0].l_id), to_hex(canMsg[0].aby_data[0]), to_hex(canMsg[0].aby_data[1]), to_hex(canMsg[0].aby_data[2]), to_hex(canMsg[0].aby_data[3]), to_hex(canMsg[0].aby_data[4]), to_hex(canMsg[0].aby_data[5]), to_hex(canMsg[0].aby_data[6]), to_hex(canMsg[0].aby_data[7]), "-");
					for (int i = 0; i <= nowMesgS; i++) {
						emptycounter = i;
						if (sendingFlags[i] == 0) break;
					}
					soloSend(emptycounter);
					sendingFlags[emptycounter] = 2;
					nowMesgS++;
				}
				else {	//непрерывная отправка
					timeout = SF->gettimeout();
					dataGridView2->Rows->Add("Pause", to_hex(canMsg[0].l_id), to_hex(canMsg[0].aby_data[0]), to_hex(canMsg[0].aby_data[1]), to_hex(canMsg[0].aby_data[2]), to_hex(canMsg[0].aby_data[3]), to_hex(canMsg[0].aby_data[4]), to_hex(canMsg[0].aby_data[5]), to_hex(canMsg[0].aby_data[6]), to_hex(canMsg[0].aby_data[7]), timeout);
					
					for (int i = 0; i <= nowMesgS; i++) {
						emptycounter = i;
						if (sendingFlags[i] == 0) break;
					}
					
					//список вместо массива 
					//
					pingOfSend^ temp = gcnew pingOfSend(handle, SF->getid(), canMsg, timeout);
					lister->Add(temp);
					//
					//buffThread = new pingOfSend(handle, SF->getid(), canMsg, timeout);
					//addThread(handle, SF->getid(), canMsg, timeout);
					if (true) {
						sendingFlags[emptycounter] = 1;
						countOfSThreads++;
						listBox2->Items->Add("Началась отправка посылки ID:" + to_hex(canMsg[0].l_id));
						listBox2->TopIndex = listBox2->Items->Count - 1;
						nowMesgS++;
					}
					else {
						listBox2->Items->Add("Упс... Что-то пошло не так.");
						listBox2->TopIndex = listBox2->Items->Count - 1;
					}
				}
			}
		}
		else {
			listBox2->Items->Add("Уже отправляется максимальное количество посылок (20).");
			listBox2->TopIndex = listBox2->Items->Count - 1;
		}
	}
	else {
		listBox2->Items->Add("Перед отправкой посылки необходимо подключиться к устройству CANfox");
		listBox2->TopIndex = listBox2->Items->Count - 1;
	}
}


private: System::Void connectToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Кнопка соединения
	//HINSTANCE hModule = NULL;
	long l_netnumber = 105, l_txtimeout = -1, l_rxtimeout = -1;
	const char* c_canAppName = "canAppName";
	const char* c_ReceiverEventName = "RE1";
	const char* c_ErrorEventName = "EE1";
	long l_retval;
	long l_baud = 0x00000003;

	HANDLE htEventR;
	HANDLE htEventE;

	htEventR = CreateEvent(NULL, TRUE, FALSE, L"R2");
	htEventE = CreateEvent(NULL, TRUE, FALSE, L"E2");
	HANDLE handle;
	hLib = LoadLibrary(L"SIECA132.DLL");
	void (*myT_FILTER_MODE)();
	(FARPROC&)myT_FILTER_MODE = GetProcAddress(hLib, "T_FILTER_MODE");
	//long (*mycanOpen)(long, long, long, long, long, const char*, const char*, const char*, void**);
	typedef long (WINAPI* mycanOpen)(long, long, long, long, long, const char*, const char*, const char*, void**);
	mycanOpen canOpen1;
	typedef long (WINAPI* mycanSetBaudrate)(void*, long);
	mycanSetBaudrate canSetBaudrate1;
	typedef long (WINAPI* mycanBlinkLED)(void*, unsigned long, unsigned long, unsigned long);
	mycanBlinkLED canBlinkLED1;
	typedef long (WINAPI* mycanIsNetOwner1)(void*);
	mycanIsNetOwner1 canIsNetOwner1;
	typedef long (WINAPI* mySetFilterMode)(void*, int);
	mySetFilterMode canSetFilterMode1;

	//typedef long (WINAPI* mycanSetFilterMode1)(void*, T_FILTER_MODE);
	//mycanSetFilterMode1 canSetFilterMode1;
	
	(FARPROC &)canOpen1 = GetProcAddress(hLib, "canOpen");
	(FARPROC &)canSetBaudrate1 = GetProcAddress(hLib, "canSetBaudrate");
	(FARPROC &)canBlinkLED1 = GetProcAddress(hLib, "canBlinkLED");
	(FARPROC &)canIsNetOwner1 = GetProcAddress(hLib, "canIsNetOwner");
	(FARPROC &)canSetFilterMode1 = GetProcAddress(hLib, "canSetFilterMode");

	l_retval = canOpen1(l_netnumber, 0, 0, l_txtimeout, l_rxtimeout, "canAppName", "RE1", "EE1", &handle);
	if (l_retval == 0) {
		// error
		l_retval = canSetBaudrate1(handle, l_baud);
		if (l_retval == 0) {
			l_retval = canBlinkLED1(handle, 0, 0b111, 0b101);
			if (l_retval == 0) {
				l_retval = canIsNetOwner1(handle);
				if (l_retval == 0) {
					l_retval = canSetFilterMode1(handle, (int) 4);
					if (l_retval == 0) {
						mainhandle = handle;
						disconnectToolStripMenuItem->Enabled = true;
						connectToolStripMenuItem->Enabled = false;
						readToolStripMenuItem->Enabled = true;
						resetToolStripMenuItem->Enabled = true;
						saveLogToolStripMenuItem->Enabled = true;
						isConnect = true;
						//time_t timeConnect = time(nullptr);
						for (int i = 0; i < 20; i++) sendingFlags[0] = 0;
						listBox2->Items->Add("Соединение с устройством установлено.");
						listBox2->TopIndex = listBox2->Items->Count - 1;
					}
				}
			}
		}
	}
	if (isConnect == false) {
		listBox2->Items->Add("Соединение с устройством не установлено.");
		listBox2->TopIndex = listBox2->Items->Count - 1;
	}
}

private: System::Void disconnectToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Кнопка разрыва соединения
	HANDLE handle = mainhandle;
	long l_retval;
	typedef long (WINAPI* mycanClose)(void*);
	mycanClose canClose1;
	(FARPROC&)canClose1 = GetProcAddress(hLib, "canClose");
	for (int i = 0; i < lister->Count; i++) {
		lister[i]->stopTh();
	}
	lister->Clear();
	if (nowMesgS > 0 && countOfSThreads > 0) {
		for (int i = 0; i <= nowMesgS; i++) {
			/*if (sendingFlags[i] == 1) {
				if (dataGridView2->Rows[i]->Cells[0]->Value->ToString() == "Resume") testThread->resume();
				testThread->stopTh();
			}*/
			sendingFlags[i] = 0;
		}
	}
	dataGridView2->Rows->Clear();
	nowMesgS = 0;
	l_retval = canClose1(handle);
	if (l_retval == 0) {
		listBox2->Items->Add("Соединение с устройством разорвано.");
		listBox2->TopIndex = listBox2->Items->Count - 1;
		disconnectToolStripMenuItem->Enabled = false;
		connectToolStripMenuItem->Enabled = true;
		readToolStripMenuItem->Enabled = false;
		resetToolStripMenuItem->Enabled = false;
		saveLogToolStripMenuItem->Enabled = false;
		isConnect = false;
	}
}
		
private: System::Void readToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	HANDLE handle = mainhandle;
	//Кнопка начала чтения
	if (isConnect == true) {
		if (isReading == false) {
			
			readThread = gcnew readArr(handle, "Read thread");
			readThread->start();

			//добавить многопоточность для чтения
			isReading = true;
			//std::thread thr(testFunc);
			//thr.join();
			ReadingFunc(100);
			//readWorker->RunWorkerAsync();
		}
		else {

		}
	}
	else {
		listBox2->Items->Add("Перед началом просмотра шины необходимо подключиться к CANfox");
		listBox2->TopIndex = listBox2->Items->Count - 1;
	}
}

private: void ReadingFunc(int timeout) {
	//Функция чтения
	int ic = 0;
	String^ l_idl;
	
	while (isReading && isConnect) {
		ic++;
		if (ic > timeout) {
			dataArr* data;
			int size = 0;
			size = readThread->getSize();
			data = readThread->getAll();

			for (int i = 0; i < size; i++) {
				if (i < back) {
					//данные
					if (i < size) {
						dataGridView1->Rows[i]->Cells[0]->Value = to_hex(data[i].l_id);
						for (int j = 1; j < 9; j++) {
							dataGridView1->Rows[i]->Cells[j]->Value = to_hex(data[i].aby_data[j - 1]);
						}
						dataGridView1->Rows[i]->Cells[9]->Value = data[i].count;
					}
				}
				else {
					//l_idl = to_hex(data[i].l_id);
					
					//данные
					dataGridView1->Rows->Add(to_hex(data[i].l_id), to_hex(data[i].aby_data[0]), to_hex(data[i].aby_data[1]), to_hex(data[i].aby_data[2]), to_hex(data[i].aby_data[3]), to_hex(data[i].aby_data[4]), to_hex(data[i].aby_data[5]), to_hex(data[i].aby_data[6]), to_hex(data[i].aby_data[7]), data[i].count);
				}
			}
			back = size;
			
		}
		Application::DoEvents();
	}
	readThread->stopTh();
	isReading = false;
}


//перенос сохранения в базу данных
private: System::Void saveLogToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Кнопка включения записи логов
	//получение пути для сохранения
	if (isConnect == true && isReading == true) {
		String^ testpath;
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			testpath = folderBrowserDialog1->SelectedPath;
			readThread->saveLog(true, testpath);
			listBox2->Items->Add("Включена запись логов по адресу: " + testpath + "\\log.txt");
			listBox2->TopIndex = listBox2->Items->Count - 1;
		}
	}
}

//
private: System::Void resetToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Кнопка сброса буффера
	if (isConnect == true && isReading == true) {
		back = 0;
		dataGridView1->Rows->Clear();
		readThread->reset();
	}
}

private: System::Void enterPasswordToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Кнопка ввода пароля
	PF->ShowDialog();
	if (PF->DialogResult == System::Windows::Forms::DialogResult::OK && PF->ask == 1) {
		readToolStripMenuItem->Enabled = true;
		//tabControl1->
		sending->Enabled= true;
		if (!tabControl1->TabPages->Contains(sending)) {
			tabControl1->TabPages->Add(sending);
		}
	}
}

private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Кнопка о программе
	DF->ShowDialog();
}

//функция перерисовки таблицы для отображения табуляции
//private: System::Void dataGridView1_CellPainting(System::Object^ sender, System::Windows::Forms::DataGridViewCellPaintingEventArgs^ e) {
//	e->Paint(e->CellBounds, DataGridViewPaintParts::All & ~DataGridViewPaintParts::ContentForeground);
//	if (e->Value != nullptr) {
//		e->Graphics->DrawString(e->Value->ToString(), e->CellStyle->Font, gcnew SolidBrush(e->CellStyle->ForeColor), e->CellBounds.X+3, e->CellBounds.Y+3);
//	}
//	e->Handled = true;
//}


//////
//////функция изменения посылки
//////
private: System::Void editor(int idx, bool stateSt1, String^ id, String^ sdata, int timeout) {
	int index;
	unsigned char data[8], bytearray[8];
	HANDLE handle = mainhandle;
	CMSG canMsg[1];
	long l_retval, b_len = 1;

	if (dataGridView2->Rows[idx]->Cells[0]->Value != "Send")// остановка отправки изменяемой посылки
	{
		index = findThread(dataGridView2->Rows[idx]->Cells[1]->Value->ToString());
		lister[index]->stopTh();
		lister->RemoveAt(index);
	}

	for (int i = 0; i < 8; i++) { //обработка данных посылки
		data[i] = hex_data(sdata[2 * i], sdata[2 * i + 1]);
	}

	//сбор посылки
	canMsg[0].l_id = Str_to_int(SF->getid());
	canMsg[0].by_len = 8;
	for (int i = 0; i < 8; i++) {
		bytearray[i] = data[i];
	}
	for (int i = 0; i < 8; i++) {
		canMsg[0].aby_data[i] = bytearray[i];
	}
	canMsg[0].by_extended = 1;
	canMsg[0].by_remote = 0;


	//непрерывная отправка
	if (stateSt1) {
		pingOfSend^ temp = gcnew pingOfSend(handle, to_hex(canMsg[0].l_id), canMsg, timeout);
		temp->start();
		if (temp->is_alive()) {
			lister->Add(temp);
			dataGridView2->Rows[idx]->Cells[0]->Value = "Pause";
			dataGridView2->Rows[idx]->Cells[1]->Value = to_hex(canMsg[0].l_id);
			for (int i = 0; i < 8; i++) {
				dataGridView2->Rows[idx]->Cells[i + 2]->Value = to_hex(canMsg[0].aby_data[i]);
			}
			dataGridView2->Rows[idx]->Cells[10]->Value = timeout;
			listBox2->Items->Add("Посылка ID:" + to_hex(canMsg[0].l_id) + " изменена");
			listBox2->TopIndex = listBox2->Items->Count - 1;
		}
		else {
			listBox2->Items->Add("Упс... Что-то пошло не так.");
			listBox2->TopIndex = listBox2->Items->Count - 1;
		}
	}
	else { //единичная посылка
		dataGridView2->Rows[idx]->Cells[0]->Value = "Send";
		dataGridView2->Rows[idx]->Cells[1]->Value = to_hex(canMsg[0].l_id);
		for (int i = 0; i < 8; i++) {
			dataGridView2->Rows[idx]->Cells[i + 2]->Value = to_hex(canMsg[0].aby_data[i]);
		}
		dataGridView2->Rows[idx]->Cells[10]->Value = "-";
		listBox2->Items->Add("Посылка ID:" + to_hex(canMsg[0].l_id) + " изменена");
		listBox2->TopIndex = listBox2->Items->Count - 1;
		soloSend(idx);
	}

}

private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e) {
	//редактирование посылки
	if (dataGridView2->Rows->Count != 0) {
		int i12 = dataGridView2->CurrentRow->Index, reservedIndex = 0;
		bool stateSt = true;
		if (dataGridView2->Rows[i12]->Cells[0]->Value != "Send") stateSt = false;
		SF->set(Convert::ToString(dataGridView2->Rows[i12]->Cells[1]->Value), stateSt, Convert::ToString(dataGridView2->Rows[i12]->Cells[10]->Value));
		SF->setData(dataGridView2->Rows[i12]->Cells[2]->Value->ToString(), dataGridView2->Rows[i12]->Cells[3]->Value->ToString(), dataGridView2->Rows[i12]->Cells[4]->Value->ToString(), dataGridView2->Rows[i12]->Cells[5]->Value->ToString(), dataGridView2->Rows[i12]->Cells[6]->Value->ToString(), dataGridView2->Rows[i12]->Cells[7]->Value->ToString(), dataGridView2->Rows[i12]->Cells[8]->Value->ToString(), dataGridView2->Rows[i12]->Cells[9]->Value->ToString());
		SF->ShowDialog();
		if (SF->DialogResult == System::Windows::Forms::DialogResult::OK) {
			editor(i12, SF->getState(), SF->getid(), SF->getdata(), SF->gettimeout());
		}
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//остановка отправки всех посылок и очистка панели
	if (dataGridView2->Rows->Count > 0) {
		for (int i = 0; i < lister->Count; i++) {
			lister[i]->stopTh();
		}
		lister->Clear();
		dataGridView2->Rows->Clear();
		nowMesgS = 0;
		listBox2->Items->Add("Все посылки остановлены.");
		listBox2->TopIndex = listBox2->Items->Count - 1;
	}
	else {
		listBox2->Items->Add("Посылок нет.");
		listBox2->TopIndex = listBox2->Items->Count - 1;
	}
	//
}

//пока заблокирована
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//остановка отправки выбранной посылки и удаление ее из панели
	if (dataGridView2->Rows->Count > 0) {
		int i = dataGridView2->CurrentRow->Index, k = countOfSThreads - 1, index = findThread(dataGridView2->Rows[i]->Cells[1]->Value->ToString()); //перебор потоков
		lister[index]->stopTh();
		lister->RemoveAt(index);

		nowMesgS--;
		dataGridView2->Rows->RemoveAt(i);
		listBox2->Items->Add("Выбранная посылка удалена");
		listBox2->TopIndex = listBox2->Items->Count - 1;
	}
	else {
		listBox2->Items->Add("Посылок нет.");
		listBox2->TopIndex = listBox2->Items->Count - 1;
	}
}

private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//закрытие лишних потоков
	if (isConnect) {
		isReading = false;
		disconnectToolStripMenuItem->PerformClick();
	}
}

private: void soloSend(int index) {
	HANDLE handle = mainhandle;
	long l_retval, b_len = 1;
	CMSG canMsg[1];
	unsigned char bytearray[8];

	typedef long (WINAPI* mycanSend)(void*, CMSG*, long*);
	mycanSend canSend1;
	(FARPROC&)canSend1 = GetProcAddress(hLib, "canSend");

	canMsg[0].l_id = Str_to_int(dataGridView2->Rows[index]->Cells[1]->Value->ToString());
	canMsg[0].by_len = 8;
	for (int i = 0; i < 8; i++) {
		bytearray[i] = to_dec(dataGridView2->Rows[index]->Cells[i+2]->Value->ToString());
	}
	for (int i = 0; i < 8; i++) {
		canMsg[0].aby_data[i] = bytearray[i];
	}
	canMsg[0].by_extended = 1;
	canMsg[0].by_remote = 0;

	l_retval = canSend1(handle, &canMsg[0], &b_len);
	if (l_retval == 0) {
		listBox2->Items->Add("Отправлена посылка с ID:" + canMsg[0].l_id);
		listBox2->TopIndex = listBox2->Items->Count - 1;
	}
}

private: System::Void dataGridView2_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex < 0 || e->ColumnIndex != dataGridView2->Columns[0]->Index) return;

	if (dataGridView2->Rows[e->RowIndex]->Cells[0]->Value == "Pause") {
		lister[findThread(dataGridView2->Rows[e->RowIndex]->Cells[1]->Value->ToString())]->pause();
		//lister->Find(gcnew Predicate<pingOfSend^>());
		//for (int i = 0; i < countOfSThreads; i++) {
			//if (sendingFlags[i] == 1) {
				/*if (dataGridView2->Rows[e->RowIndex]->Cells[1]->Value->ToString() == testThread[e->RowIndex]->getName()) {
					testThread[e->RowIndex]->pause();
				}*/
			//}
		//}
		dataGridView2->Rows[e->RowIndex]->Cells[0]->Value = "Resume";
	}
	else {
		if (dataGridView2->Rows[e->RowIndex]->Cells[0]->Value == "Resume") {
			lister[findThread(dataGridView2->Rows[e->RowIndex]->Cells[1]->Value->ToString())]->resume();
			//for (int i = 0; i <= countOfSThreads; i++) {
				//if (sendingFlags[i] == 1) {
					/*if (dataGridView2->Rows[e->RowIndex]->Cells[1]->Value->ToString() == testThread[e->RowIndex]->getName()) {
						testThread[e->RowIndex]->resume();
					}*/
				//}
			//}
			dataGridView2->Rows[e->RowIndex]->Cells[0]->Value = "Pause";
		}
		else {
			soloSend(e->RowIndex);
		}
	}

}
};
}
