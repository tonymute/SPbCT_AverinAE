#include <iostream>
#include <ctime>
#include <string>
#include <random>
#include <fstream>
#include <algorithm>
#include <windows.h>
#include <msclr\marshal_cppstd.h>
#include <stdio.h>
#include "Replace.h"

HANDLE Ride, write;
string str0;
string str[10];

DWORD WINAPI Thed1proc(LPVOID) {

	int Index;
	string s1;

	for (Index = 0; Index < 10; Index++) {
		s1 = Index + 38;
		str[Index] = replace_all(str[Index], to_string(Index), s1);
	}
	WriteFile(write, str, 100, NULL, NULL);
	return 0;
}

namespace FormUP {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label5;
	private: System::ComponentModel::IContainer^ components;


	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightCyan;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(-3, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(256, 474);
			this->panel1->TabIndex = 0;
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(20, 375);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(198, 44);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Закрыть программу";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(20, 277);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(198, 77);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Сохранить результат в \r\nфайл формата csv\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(20, 208);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(198, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Замена символов";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(20, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 45);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Разбить на строки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Добро пожаловать,\r\n";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сгенерировать файл\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Info;
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(243, -9);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(975, 552);
			this->panel2->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(21, 83);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(902, 312);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(17, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(17, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(397, 44);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Автор программы: Аверин Антон Эдуардович\r\nгруппа 502";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightCyan;
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(-3, 472);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1230, 63);
			this->panel3->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1031, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 22);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Время:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1031, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Дата:";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1215, 537);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1237, 593);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
		time_t seconds = time(NULL);
		tm* ti = localtime(&seconds);
		label4->Text = "Дата: " +  ti->tm_mday + "." + (ti->tm_mon + 1) + "." +(ti->tm_year + 1900);
		label5->Text = "Время: " + ti->tm_hour + ":" + ti->tm_min + ":" + ti->tm_sec;
		ifstream in("login.txt");
		string login;
		getline(in, login);
		label1->Text += marshal_as<String^>(login);
		in.close();
		remove("login.txt");

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(time(0));
		int A[100];
		ofstream F1("input.txt");
		for (int i = 0; i < 100; i++) {
			A[i] = rand() % 10;
			F1 << A[i];
			label2->Text += A[i].ToString();
		}
		F1.close();
		button1->Enabled = false;
		button2->Enabled = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Visible = true;
		dataGridView1->RowCount = 10;
		dataGridView1->ColumnCount = 10;
		ifstream F1("input.txt");
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				char ch;
				F1.get(ch);
				str[i] += ch;
				dataGridView1->Rows[i]->Cells[j]->Value = ((wchar_t)ch).ToString();
			}
		}
		button2->Enabled = false;
		button3->Enabled = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		CreatePipe(&Ride, &write, NULL, 100);
		CreateThread(NULL, 0, Thed1proc, NULL, 0, NULL);
		ReadFile(Ride, str, 100, NULL, NULL);
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				dataGridView1->Rows[i]->Cells[j]->Value = ((wchar_t)str[i].at(j)).ToString();
			}
		}
		button3->Enabled = false;
		button4->Enabled = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		ofstream F2("output.csv");
		for (int i = 0; i < 10; i++) {
			char* cstr = new char[str[i].length() + 1];
			strcpy(cstr, str[i].c_str());
			for (int j = 0; j < 10; j++) {
				F2 << cstr[j];
				if (j != 9) F2 << ";";
				else F2 << "\n";
			}
			delete[] cstr;
		}
		button4->Enabled = false;
		button5->Enabled = true;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Stop();
		this->Close();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		time_t seconds = time(NULL);
		tm* ti = localtime(&seconds);
		label5->Text = "Время: " + ti->tm_hour + ":" + ti->tm_min + ":" + ti->tm_sec;
	}
};
}
