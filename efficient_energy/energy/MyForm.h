#pragma once
#include "crud.h"
#include "mapper.h"
#include "OOPcode.h"
namespace energy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			tabControl1->TabPages->Remove(tabpage1);
			tabControl1->TabPages->Remove(tabPage2);
			tabControl1->TabPages->Remove(Report);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Sign_in;

	protected:

	protected:

	protected:



















	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TabPage^ tabpage1;
	private: System::Windows::Forms::TabPage^ tabPage2;

















	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TextBox^ txttotal;
	private: System::Windows::Forms::TextBox^ TA;




	private: System::Windows::Forms::TextBox^ ST;




	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::TextBox^ IT;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ UC;
	private: System::Windows::Forms::TextBox^ FR;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ AC;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TV;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ button9;

private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::TabPage^ Report;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Button^ button7;













	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Sign_in = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabpage1 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->UC = (gcnew System::Windows::Forms::TextBox());
			this->FR = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AC = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TV = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txttotal = (gcnew System::Windows::Forms::TextBox());
			this->IT = (gcnew System::Windows::Forms::TextBox());
			this->TA = (gcnew System::Windows::Forms::TextBox());
			this->ST = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->Report = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->Sign_in->SuspendLayout();
			this->tabpage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->Report->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->Sign_in);
			this->tabControl1->Controls->Add(this->tabpage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->Report);
			this->tabControl1->Location = System::Drawing::Point(0, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1001, 560);
			this->tabControl1->TabIndex = 0;
			// 
			// Sign_in
			// 
			this->Sign_in->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sign_in.BackgroundImage")));
			this->Sign_in->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Sign_in->Controls->Add(this->textBox2);
			this->Sign_in->Controls->Add(this->textBox1);
			this->Sign_in->Controls->Add(this->button1);
			this->Sign_in->Controls->Add(this->button2);
			this->Sign_in->Controls->Add(this->label1);
			this->Sign_in->Location = System::Drawing::Point(4, 22);
			this->Sign_in->Name = L"Sign_in";
			this->Sign_in->Padding = System::Windows::Forms::Padding(3);
			this->Sign_in->Size = System::Drawing::Size(993, 534);
			this->Sign_in->TabIndex = 0;
			this->Sign_in->Text = L"Sign-in";
			this->Sign_in->UseVisualStyleBackColor = true;
			this->Sign_in->Click += gcnew System::EventHandler(this, &MyForm::energymeter_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(112, 341);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(217, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(113, 243);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 25);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(93, 474);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(254, 34);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(266, 418);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 34);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Sign up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(89, 425);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"don\'t have an account\?";
			// 
			// tabpage1
			// 
			this->tabpage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabpage1.BackgroundImage")));
			this->tabpage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabpage1->Controls->Add(this->button5);
			this->tabpage1->Controls->Add(this->button4);
			this->tabpage1->Controls->Add(this->label9);
			this->tabpage1->Controls->Add(this->checkBox1);
			this->tabpage1->Controls->Add(this->textBox20);
			this->tabpage1->Controls->Add(this->textBox19);
			this->tabpage1->Location = System::Drawing::Point(4, 22);
			this->tabpage1->Name = L"tabpage1";
			this->tabpage1->Padding = System::Windows::Forms::Padding(3);
			this->tabpage1->Size = System::Drawing::Size(993, 534);
			this->tabpage1->TabIndex = 1;
			this->tabpage1->Text = L"Signup";
			this->tabpage1->UseVisualStyleBackColor = true;
			this->tabpage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(191, 476);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(131, 31);
			this->button5->TabIndex = 5;
			this->button5->Text = L"back to login";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(75, 476);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(114, 31);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Sign up";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::MediumBlue;
			this->label9->Location = System::Drawing::Point(298, 434);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(170, 21);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Terms and Conditions";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(76, 433);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(232, 25);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"by clicking you agree to the";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(74, 349);
			this->textBox20->Name = L"textBox20";
			this->textBox20->PasswordChar = '*';
			this->textBox20->Size = System::Drawing::Size(219, 20);
			this->textBox20->TabIndex = 1;
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 8));
			this->textBox19->Location = System::Drawing::Point(76, 262);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(217, 25);
			this->textBox19->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->panel1);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->txttotal);
			this->tabPage2->Controls->Add(this->IT);
			this->tabPage2->Controls->Add(this->TA);
			this->tabPage2->Controls->Add(this->ST);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(993, 534);
			this->tabPage2->TabIndex = 2;
			this->tabPage2->Text = L"billchart";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label10->Location = System::Drawing::Point(556, 462);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(154, 25);
			this->label10->TabIndex = 54;
			this->label10->Text = L"A F T E R  T A X";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->UC);
			this->panel1->Controls->Add(this->FR);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->AC);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->TV);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(996, 193);
			this->panel1->TabIndex = 53;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(619, 130);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(107, 33);
			this->button9->TabIndex = 43;
			this->button9->Text = L"REPORT";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(419, 130);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(162, 33);
			this->button8->TabIndex = 41;
			this->button8->Text = L"ALERT CHECKER";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(838, 129);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(149, 33);
			this->button6->TabIndex = 39;
			this->button6->Text = L"CLOSE APP";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// UC
			// 
			this->UC->BackColor = System::Drawing::Color::DimGray;
			this->UC->ForeColor = System::Drawing::Color::White;
			this->UC->Location = System::Drawing::Point(38, 157);
			this->UC->Name = L"UC";
			this->UC->Size = System::Drawing::Size(184, 20);
			this->UC->TabIndex = 38;
			// 
			// FR
			// 
			this->FR->BackColor = System::Drawing::Color::DimGray;
			this->FR->ForeColor = System::Drawing::Color::White;
			this->FR->Location = System::Drawing::Point(766, 64);
			this->FR->Name = L"FR";
			this->FR->Size = System::Drawing::Size(183, 20);
			this->FR->TabIndex = 37;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label4->Location = System::Drawing::Point(770, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 25);
			this->label4->TabIndex = 36;
			this->label4->Text = L"No. of Fridge";
			// 
			// AC
			// 
			this->AC->BackColor = System::Drawing::Color::DimGray;
			this->AC->ForeColor = System::Drawing::Color::White;
			this->AC->Location = System::Drawing::Point(531, 64);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(183, 20);
			this->AC->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(535, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 25);
			this->label2->TabIndex = 34;
			this->label2->Text = L"No. of AC";
			// 
			// TV
			// 
			this->TV->BackColor = System::Drawing::Color::DimGray;
			this->TV->ForeColor = System::Drawing::Color::White;
			this->TV->Location = System::Drawing::Point(295, 65);
			this->TV->Name = L"TV";
			this->TV->Size = System::Drawing::Size(183, 20);
			this->TV->TabIndex = 33;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(269, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 33);
			this->button3->TabIndex = 32;
			this->button3->Text = L"SUBMIT";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label5->Location = System::Drawing::Point(299, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 25);
			this->label5->TabIndex = 31;
			this->label5->Text = L"No. of TV";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(37, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 25);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Phase Connection";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::DimGray;
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Single Phase", L"Multi Phase" });
			this->comboBox1->Location = System::Drawing::Point(38, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(185, 21);
			this->comboBox1->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(38, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(165, 25);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Units Consumed";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label8->Location = System::Drawing::Point(532, 232);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(178, 25);
			this->label8->TabIndex = 51;
			this->label8->Text = L"B E F O R E   T A X";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// txttotal
			// 
			this->txttotal->BackColor = System::Drawing::SystemColors::GrayText;
			this->txttotal->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txttotal->ForeColor = System::Drawing::Color::White;
			this->txttotal->Location = System::Drawing::Point(371, 492);
			this->txttotal->Name = L"txttotal";
			this->txttotal->ReadOnly = true;
			this->txttotal->Size = System::Drawing::Size(562, 33);
			this->txttotal->TabIndex = 49;
			this->txttotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// IT
			// 
			this->IT->BackColor = System::Drawing::SystemColors::GrayText;
			this->IT->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IT->ForeColor = System::Drawing::Color::White;
			this->IT->Location = System::Drawing::Point(370, 426);
			this->IT->Name = L"IT";
			this->IT->ReadOnly = true;
			this->IT->Size = System::Drawing::Size(563, 33);
			this->IT->TabIndex = 48;
			this->IT->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// TA
			// 
			this->TA->BackColor = System::Drawing::SystemColors::GrayText;
			this->TA->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TA->ForeColor = System::Drawing::Color::White;
			this->TA->Location = System::Drawing::Point(370, 386);
			this->TA->Name = L"TA";
			this->TA->ReadOnly = true;
			this->TA->Size = System::Drawing::Size(563, 33);
			this->TA->TabIndex = 46;
			this->TA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ST
			// 
			this->ST->BackColor = System::Drawing::SystemColors::GrayText;
			this->ST->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ST->ForeColor = System::Drawing::Color::White;
			this->ST->Location = System::Drawing::Point(372, 338);
			this->ST->Name = L"ST";
			this->ST->ReadOnly = true;
			this->ST->Size = System::Drawing::Size(561, 33);
			this->ST->TabIndex = 43;
			this->ST->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ST->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(372, 303);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(561, 33);
			this->textBox7->TabIndex = 41;
			this->textBox7->Text = L"30";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::SystemColors::GrayText;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->ForeColor = System::Drawing::Color::White;
			this->textBox18->Location = System::Drawing::Point(370, 264);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(561, 33);
			this->textBox18->TabIndex = 39;
			this->textBox18->Text = L"25.30";
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox18_TextChanged);
			// 
			// Report
			// 
			this->Report->Controls->Add(this->button7);
			this->Report->Controls->Add(this->label18);
			this->Report->Controls->Add(this->label14);
			this->Report->Controls->Add(this->textBox11);
			this->Report->Controls->Add(this->textBox10);
			this->Report->Controls->Add(this->textBox9);
			this->Report->Controls->Add(this->label17);
			this->Report->Controls->Add(this->label16);
			this->Report->Controls->Add(this->label15);
			this->Report->Controls->Add(this->label13);
			this->Report->Controls->Add(this->label12);
			this->Report->Controls->Add(this->label11);
			this->Report->Controls->Add(this->label7);
			this->Report->Controls->Add(this->textBox6);
			this->Report->Controls->Add(this->textBox5);
			this->Report->Controls->Add(this->textBox4);
			this->Report->Controls->Add(this->textBox3);
			this->Report->Location = System::Drawing::Point(4, 22);
			this->Report->Name = L"Report";
			this->Report->Padding = System::Windows::Forms::Padding(3);
			this->Report->Size = System::Drawing::Size(993, 534);
			this->Report->TabIndex = 3;
			this->Report->Text = L"Report";
			this->Report->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(304, 405);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(329, 47);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Click to Optimize your usage";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(229, 357);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(224, 25);
			this->label18->TabIndex = 17;
			this->label18->Text = L"Current units consumed";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(597, 464);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(400, 25);
			this->label14->TabIndex = 16;
			this->label14->Text = L"* Above usage is with respect to the approx.";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(497, 319);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(210, 26);
			this->textBox11->TabIndex = 15;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(496, 169);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(210, 26);
			this->textBox10->TabIndex = 14;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(496, 249);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(210, 26);
			this->textBox9->TabIndex = 13;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(229, 319);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(217, 25);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Limit usage of fridge(s)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(229, 244);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(191, 25);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Limit usage of AC(s)";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(228, 169);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(182, 25);
			this->label15->TabIndex = 9;
			this->label15->Text = L"Limit usage of tv(s)";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(228, 208);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(207, 25);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Number of AC(s) used";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(228, 280);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(233, 25);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Number of fridge(s) used";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(228, 130);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(206, 25);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Number of TV(s) used";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(605, 489);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(321, 25);
			this->label7->TabIndex = 4;
			this->label7->Text = L" units consumed by each appliance";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click_1);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(496, 357);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(210, 26);
			this->textBox6->TabIndex = 3;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(496, 281);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(210, 26);
			this->textBox5->TabIndex = 2;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(496, 213);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(210, 26);
			this->textBox4->TabIndex = 1;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(496, 131);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(210, 26);
			this->textBox3->TabIndex = 0;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 568);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->Sign_in->ResumeLayout(false);
			this->Sign_in->PerformLayout();
			this->tabpage1->ResumeLayout(false);
			this->tabpage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Report->ResumeLayout(false);
			this->Report->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ save = "E:\\efficient_energy\\EM.txt";//EnergyMeterclass
		String^ User = "E:\\efficient_energy\\f2.txt";//signup/signinn
		String^ ALERT = "E:\\efficient_energy\\AL.txt";//alertmessageclass
		String^ RPT = "E:\\efficient_energy\\RP.txt";//reportmessage

		array< EnergyMeter^>^obEM =EMmapper::Map_EnergyMeter(DatabaseOperations::read(save));
		array<AlertManager^>^obALT = ALTmapper::Map_ALTCmapper(DatabaseOperations::read(ALERT));
		array<ReportGenerator^>^ obR = Repomapper::Map_RPmapper(DatabaseOperations::read(RPT));

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void energymeter_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // sign up button code
	tabControl1->TabPages->Remove(Sign_in);
	tabControl1->TabPages->Add(tabpage1);
	tabControl1->SelectedTab = tabpage1;
	textBox19->Text = "";
	textBox20->Text = "";
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//for login only code!
		array<String^>^ arr = crud.read(User);
	if (arr->Length == 0)
	{
		MessageBox::Show("No user data found.\nPlease sign up to continue", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		tabControl1->TabPages->Remove(Sign_in);
		tabControl1->TabPages->Add(tabpage1);
		tabControl1->SelectedTab = tabpage1;
	}
	else
	{
		array<String^>^ var;
		bool loginsuccessful = false;
		for (int i = 0; i < arr->Length; i++)
		{
			var = arr[i]->Split(',');
			if (var->Length > 1 && textBox1->Text == var[0])
			{
				if (textBox2->Text == var[1])
				{
					MessageBox::Show("Login Successful", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
					loginsuccessful = true;
					tabControl1->TabPages->Remove(Sign_in);
					tabControl1->TabPages->Add(tabPage2);
					tabControl1->SelectedTab = tabPage2;
				}
			}
		}
		if (!loginsuccessful)
			MessageBox::Show("Invalid username or password", "Information", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (AC->Text == "" || FR->Text == "" || TV->Text == "" || UC->Text == "") {
		MessageBox::Show("Please enter all field!", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		try {
			const int TV_RATE = 4;
			const int AC_RATE = 10;
			const int FRIDGE_RATE = 8;
			const int UC_RATE = 45;
			const double SALES_TAX_RATE = 0.05;
			const double INCOME_TAX_RATE = 0.1;

			// Using parse to ensure correct conversion of data
			int tvCount = Int32::Parse(TV->Text);
			int acCount = Int32::Parse(AC->Text);
			int fridgeCount = Int32::Parse(FR->Text);
			int ucCount = Int32::Parse(UC->Text);

			double textBox18Value = Double::Parse(textBox18->Text);
			double textBox7Value = Double::Parse(textBox7->Text);

			// Calculate bills
			int tvbill = tvCount * TV_RATE;
			int acbill = acCount * AC_RATE;
			int fridgebill = fridgeCount * FRIDGE_RATE;
			int totalappbill = tvbill + acbill + fridgebill;

			// Calculate final bill
			double finalbill = textBox18Value + textBox7Value + (ucCount * UC_RATE) + totalappbill;

			// Calculate sales tax , using ToString("F2") to provide 2 decimal point precision
			double salestax = finalbill * SALES_TAX_RATE;
			ST->Text = "Rs. " + salestax.ToString("F2") + "/-";

			// Calculate income tax
			double incometax = finalbill * INCOME_TAX_RATE;
			IT->Text = "Rs. " + incometax.ToString("F2") + "/-";

			// Calculate total amount including taxes
			double taxableamnt = salestax + incometax + finalbill;
			TA->Text = "Rs. " + taxableamnt.ToString("F2") + "/-";
			txttotal->Text = TA->Text;
		}
		catch (FormatException^ ex) {
			MessageBox::Show("Invalid input: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->TabPages->Remove(tabpage1);
	tabControl1->TabPages->Add(Sign_in);
	tabControl1->SelectedTab = Sign_in;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations crud;
	if (textBox19->Text != "" && textBox20->Text != "" && checkBox1->Checked)
	{
	crud.insert(User, textBox19->Text + "," + textBox20->Text);
	MessageBox::Show("sign up successful!", "success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		MessageBox::Show("enter both the fields!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {




}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ arr = crud.read(ALERT);
	AlertManager A1;

	// Check if all fields are empty and show an alert if true
	if (TV->Text == "" && AC->Text == "" && FR->Text == "" && UC->Text == "") {
		MessageBox::Show("All fields are empty!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else if (TV->Text == "0" && AC->Text == "0" && FR->Text == "0" && UC->Text == "0") {
		MessageBox::Show("Please enter the field correctly!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	// If all fields are filled, set the AlertManager properties
	else{
		A1.setAC(System::Convert::ToInt16(AC->Text));
		A1.setTV(System::Convert::ToInt16(TV->Text));
		A1.setFR(System::Convert::ToInt16(FR->Text));
		A1.setUC(System::Convert::ToInt16(UC->Text));

		String^ newMessage = A1.alertmessage();
		MessageBox::Show(newMessage, "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}


private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) { //report generate code
	if (TV->Text == "" && AC->Text == "" && FR->Text == "" && UC->Text == "") {
		MessageBox::Show("Generate bill first to access the report generation functionality!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else
	{
		try {

			ReportGenerator r1;
			/*setting power lmiit limits for below appliances and pushing them into their respective functions*/
			int const tvpowerlimit = 60;
			int const acpowerlimit = 80;
			int const frpowerlimit = 120;
			r1.setTvPowerReport(tvpowerlimit * Int16::Parse(TV->Text));
			r1.setAcPowerReport(acpowerlimit * Int16::Parse(AC->Text));
			r1.setFridgePowerReport(frpowerlimit * Int16::Parse(FR->Text));
			r1.setUnitsConsumed(Convert::ToInt16(UC->Text));

			/*getting the respective values into their respective textboxes*/
			textBox10->Text = r1.getTvPowerReport();
			textBox9->Text = r1.getFridgePowerReport();
			textBox11->Text = r1.getAcPowerReport();

			textBox3->Text = TV->Text;
			textBox4->Text = AC->Text;
			textBox5->Text = FR->Text;
			textBox6->Text = UC->Text;

			crud.insert(RPT, textBox3->Text + "," +textBox4->Text + "," + textBox5->Text + "," + textBox6->Text);

			tabControl1->TabPages->Remove(tabPage2);
			tabControl1->TabPages->Add(Report);
			tabControl1->SelectedTab = Report;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
		button4->Enabled = true;
	else
		button4->Enabled = false;
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Optimizer o1;
	o1.currentUsage = 100;
	if (o1.alertmessage() == ("Your usage is satisfactory."))
	{
		o1.currentUsage = 0;
		MessageBox::Show(o1.getSuggestion(),"Information",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
	}
	else
	{
		MessageBox::Show(o1.getSuggestion(), "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
};
}

