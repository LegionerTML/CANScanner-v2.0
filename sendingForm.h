#pragma once
#include <iostream>
#include <sstream>

namespace CANScannerv20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для sendingForm
	/// </summary>
	public ref class sendingForm : public System::Windows::Forms::Form
	{
	public:
		sendingForm(void)
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
		~sendingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox10;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonSend;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSend = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(146, 97);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(28, 20);
			this->textBox10->TabIndex = 168;
			this->textBox10->Text = L"100";
			this->textBox10->Leave += gcnew System::EventHandler(this, &sendingForm::textBox10_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 13);
			this->label3->TabIndex = 167;
			this->label3->Text = L"Период отправки (мс):";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(306, 47);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(28, 20);
			this->textBox9->TabIndex = 166;
			this->textBox9->Text = L"00";
			this->textBox9->Leave += gcnew System::EventHandler(this, &sendingForm::textBox9_Leave);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(272, 47);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(28, 20);
			this->textBox8->TabIndex = 165;
			this->textBox8->Text = L"00";
			this->textBox8->Leave += gcnew System::EventHandler(this, &sendingForm::textBox8_Leave);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(238, 47);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(28, 20);
			this->textBox7->TabIndex = 164;
			this->textBox7->Text = L"00";
			this->textBox7->Leave += gcnew System::EventHandler(this, &sendingForm::textBox7_Leave);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(204, 47);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(28, 20);
			this->textBox6->TabIndex = 163;
			this->textBox6->Text = L"00";
			this->textBox6->Leave += gcnew System::EventHandler(this, &sendingForm::textBox6_Leave);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(169, 47);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(28, 20);
			this->textBox5->TabIndex = 162;
			this->textBox5->Text = L"00";
			this->textBox5->Leave += gcnew System::EventHandler(this, &sendingForm::textBox5_Leave);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(135, 47);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(28, 20);
			this->textBox4->TabIndex = 161;
			this->textBox4->Text = L"00";
			this->textBox4->Leave += gcnew System::EventHandler(this, &sendingForm::textBox4_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(101, 47);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(28, 20);
			this->textBox3->TabIndex = 160;
			this->textBox3->Text = L"00";
			this->textBox3->Leave += gcnew System::EventHandler(this, &sendingForm::textBox3_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(68, 47);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(28, 20);
			this->textBox2->TabIndex = 159;
			this->textBox2->Text = L"00";
			this->textBox2->Leave += gcnew System::EventHandler(this, &sendingForm::focusdata_Leave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 158;
			this->label2->Text = L"Данные:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(84, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 20);
			this->textBox1->TabIndex = 157;
			this->textBox1->Text = L"18000000";
			this->textBox1->Leave += gcnew System::EventHandler(this, &sendingForm::textBox1_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 156;
			this->label1->Text = L"ID посылки:";
			// 
			// buttonSend
			// 
			this->buttonSend->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonSend->Location = System::Drawing::Point(12, 125);
			this->buttonSend->Name = L"buttonSend";
			this->buttonSend->Size = System::Drawing::Size(75, 23);
			this->buttonSend->TabIndex = 169;
			this->buttonSend->Text = L"Добавить";
			this->buttonSend->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Location = System::Drawing::Point(259, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 170;
			this->button1->Text = L"Отмена";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(22, 75);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(160, 17);
			this->checkBox1->TabIndex = 171;
			this->checkBox1->Text = L"Отправлять периодически";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &sendingForm::checkBox1_CheckedChanged);
			// 
			// sendingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(348, 161);
			this->ControlBox = false;
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonSend);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"sendingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Добавление посылки";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: bool freg = false;
	public: System::String^ getid() {
		String^ ret = textBox1->Text;
		return ret;
	}
	public: System::String^ getdata() {
		//извлечение данных
		System::String^ ret;
		if (textBox2->Text->Length < 2) {
			ret += "0";
			ret += textBox2->Text;
		}
		else ret += textBox2->Text;
		if (textBox3->Text->Length < 2) {
			ret += "0";
			ret += textBox3->Text;
		}
		else ret += textBox3->Text;
		if (textBox4->Text->Length < 2) {
			ret += "0";
			ret += textBox4->Text;
		}
		else ret += textBox4->Text;
		if (textBox5->Text->Length < 2) {
			ret += "0";
			ret += textBox5->Text;
		}
		else ret += textBox5->Text;
		if (textBox6->Text->Length < 2) {
			ret += "0";
			ret += textBox6->Text;
		}
		else ret += textBox6->Text;
		if (textBox7->Text->Length < 2) {
			ret += "0";
			ret += textBox7->Text;
		}
		else ret += textBox7->Text;
		if (textBox8->Text->Length < 2) {
			ret += "0";
			ret += textBox8->Text;
		}
		else ret += textBox8->Text;
		if (textBox9->Text->Length < 2) {
			ret += "0";
			ret += textBox9->Text;
		}
		else ret += textBox9->Text;
		return ret;
	}
	public: System::Int32 gettimeout() {
		System::Int32 ret = 0;
		if (checkBox1->Checked) {
			Int32 ret = Convert::ToInt32(textBox10->Text);
		}
		return ret;
	}
	
	public: bool getState() {
		return checkBox1->Checked;
	}

	public: System::Void set(System::String^ ID, bool state, System::String^ Time) {
		textBox1->Text = ID;
		textBox10->Text = Time;
		if (checkBox1->Checked != state) {
			checkBox1->Checked = !state;
		}
		if (!checkBox1->Checked) textBox10->Text = "100";
	}

	public: System::Void setData(System::String^ d1, System::String^ d2, System::String^ d3, System::String^ d4, System::String^ d5, System::String^ d6, System::String^ d7, System::String^ d8) {
		textBox2->Text = d1;
		textBox3->Text = d2;
		textBox4->Text = d3;
		textBox5->Text = d4;
		textBox6->Text = d5;
		textBox7->Text = d6;
		textBox8->Text = d7;
		textBox9->Text = d8;
	}

private: System::Void focusdata_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "") {
		textBox2->Text = "00";
	}
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		textBox1->Text = "18000000";
	}
}
private: System::Void textBox10_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text == "") {
		textBox10->Text = "0";
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "") {
		textBox3->Text = "00";
	}
}
private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text == "") {
		textBox4->Text = "00";
	}
}
private: System::Void textBox5_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text == "") {
		textBox5->Text = "00";
	}
}
private: System::Void textBox6_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6->Text == "") {
		textBox6->Text = "00";
	}
}
private: System::Void textBox7_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7->Text == "") {
		textBox7->Text = "00";
	}
}
private: System::Void textBox8_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8->Text == "") {
		textBox8->Text = "00";
	}
}
private: System::Void textBox9_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9->Text == "") {
		textBox9->Text = "00";
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		label3->Enabled = true;
		textBox10->Enabled = true;
		//if (freg) textBox10->Text = "100";
	}
	else {
		label3->Enabled = false;
		textBox10->Enabled = false;
	}
}
};
}
