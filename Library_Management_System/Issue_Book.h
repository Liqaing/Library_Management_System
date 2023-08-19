#pragma once

#include "Linked_List.h"
#include <msclr/marshal_cppstd.h>

#include "return_book.h";

// Forward declaration
Node<Student>* ReadStudentsDataFromDB();
Node<Book>* ReadBooksDataFromDB();

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Issue_Return_Book
	/// </summary>
	public ref class Issue_Book : public System::Windows::Forms::Form
	{

	// Declare variable
	private:
		Node<Book>* BookList = nullptr;
		Node<Student>* StudentList = nullptr;

		Node<Student>* StudentInfo = nullptr;
		Node<Book>* BookInfo = nullptr;

		Node<IssueReturn>* IssueReturnList = nullptr;

	private: System::Windows::Forms::ComboBox^ BookTitle;
	private: System::Windows::Forms::NumericUpDown^ BookID;
	private: System::Windows::Forms::DateTimePicker^ Issuedate;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Status;











	private: System::Windows::Forms::NumericUpDown^ StudentID;

	public:
		Issue_Book(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Issue_Book()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ StudentName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Department;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Telephone;

	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ SearchType;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ Sort;
	private: System::Windows::Forms::Button^ Refresh;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::TextBox^ UserInput;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ Author;
	private: System::Windows::Forms::TextBox^ Quantity;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ Filter;

	private: System::Windows::Forms::Label^ label13;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->StudentName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Department = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Telephone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SearchType = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Sort = (gcnew System::Windows::Forms::ComboBox());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->UserInput = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Author = (gcnew System::Windows::Forms::TextBox());
			this->Quantity = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Filter = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->StudentID = (gcnew System::Windows::Forms::NumericUpDown());
			this->BookTitle = (gcnew System::Windows::Forms::ComboBox());
			this->BookID = (gcnew System::Windows::Forms::NumericUpDown());
			this->Issuedate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BookID))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID, this->Name,
					this->Title, this->IDate, this->RDate, this->Status
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 237);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1011, 377);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Issue_Book::dataGridView1_CellDoubleClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// Name
			// 
			this->Name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Name->HeaderText = L"Student Name";
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			// 
			// Title
			// 
			this->Title->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Title->HeaderText = L"Title";
			this->Title->Name = L"Title";
			this->Title->ReadOnly = true;
			// 
			// IDate
			// 
			this->IDate->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->IDate->HeaderText = L"Issue Date";
			this->IDate->Name = L"IDate";
			this->IDate->ReadOnly = true;
			// 
			// RDate
			// 
			this->RDate->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->RDate->HeaderText = L"Return Date";
			this->RDate->Name = L"RDate";
			this->RDate->ReadOnly = true;
			// 
			// Status
			// 
			this->Status->HeaderText = L"Status";
			this->Status->Name = L"Status";
			this->Status->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(498, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Issue Book";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Student ID";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SkyBlue;
			this->panel1->ForeColor = System::Drawing::Color::Transparent;
			this->panel1->Location = System::Drawing::Point(196, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(5, 147);
			this->panel1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(118, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 22);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Get";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Issue_Book::button1_Click);
			// 
			// StudentName
			// 
			this->StudentName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentName->Location = System::Drawing::Point(257, 61);
			this->StudentName->Name = L"StudentName";
			this->StudentName->ReadOnly = true;
			this->StudentName->Size = System::Drawing::Size(125, 22);
			this->StudentName->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(254, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 18);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Student Name";
			// 
			// Department
			// 
			this->Department->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Department->Location = System::Drawing::Point(416, 61);
			this->Department->Name = L"Department";
			this->Department->ReadOnly = true;
			this->Department->Size = System::Drawing::Size(148, 22);
			this->Department->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(413, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Department";
			// 
			// Telephone
			// 
			this->Telephone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Telephone->Location = System::Drawing::Point(597, 61);
			this->Telephone->Name = L"Telephone";
			this->Telephone->ReadOnly = true;
			this->Telephone->Size = System::Drawing::Size(144, 22);
			this->Telephone->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(594, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Telephone";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(254, 109);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 18);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Book Title";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SkyBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(772, 129);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 24);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Issue Book";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Issue_Book::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SkyBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(118, 132);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 22);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Get";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Issue_Book::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 111);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 18);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Book ID";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SkyBlue;
			this->panel2->ForeColor = System::Drawing::Color::Transparent;
			this->panel2->Location = System::Drawing::Point(23, 183);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1011, 5);
			this->panel2->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(222, 207);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 18);
			this->label8->TabIndex = 30;
			this->label8->Text = L"In";
			// 
			// SearchType
			// 
			this->SearchType->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->SearchType->DisplayMember = L"(none)";
			this->SearchType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SearchType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchType->FormattingEnabled = true;
			this->SearchType->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"By ID", L"By Student Name", L"By Title", L"By Issue Date",
					L"By Return Date", L"By Status"
			});
			this->SearchType->Location = System::Drawing::Point(242, 205);
			this->SearchType->Name = L"SearchType";
			this->SearchType->Size = System::Drawing::Size(116, 24);
			this->SearchType->TabIndex = 29;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(871, 211);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 18);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Sort";
			// 
			// Sort
			// 
			this->Sort->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Sort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Sort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sort->FormattingEnabled = true;
			this->Sort->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"By ID", L"By Student Name", L"By Title", L"By Issue Date",
					L"By Return Date", L"By Status"
			});
			this->Sort->Location = System::Drawing::Point(913, 207);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(121, 24);
			this->Sort->TabIndex = 27;
			this->Sort->SelectedIndexChanged += gcnew System::EventHandler(this, &Issue_Book::Sort_SelectedIndexChanged);
			// 
			// Refresh
			// 
			this->Refresh->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Refresh->BackColor = System::Drawing::Color::SkyBlue;
			this->Refresh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Refresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Refresh->ForeColor = System::Drawing::Color::Black;
			this->Refresh->Location = System::Drawing::Point(442, 206);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(71, 24);
			this->Refresh->TabIndex = 26;
			this->Refresh->Text = L"Refresh";
			this->Refresh->UseVisualStyleBackColor = false;
			this->Refresh->Click += gcnew System::EventHandler(this, &Issue_Book::Refresh_Click);
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(18, 206);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 18);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Search";
			// 
			// Search
			// 
			this->Search->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Search->BackColor = System::Drawing::Color::SkyBlue;
			this->Search->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->ForeColor = System::Drawing::Color::Black;
			this->Search->Location = System::Drawing::Point(364, 206);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(72, 24);
			this->Search->TabIndex = 24;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Click += gcnew System::EventHandler(this, &Issue_Book::Search_Click);
			// 
			// UserInput
			// 
			this->UserInput->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->UserInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserInput->Location = System::Drawing::Point(79, 205);
			this->UserInput->Name = L"UserInput";
			this->UserInput->Size = System::Drawing::Size(137, 24);
			this->UserInput->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(413, 109);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 18);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Author";
			// 
			// Author
			// 
			this->Author->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Author->Location = System::Drawing::Point(416, 131);
			this->Author->Name = L"Author";
			this->Author->ReadOnly = true;
			this->Author->Size = System::Drawing::Size(148, 22);
			this->Author->TabIndex = 34;
			// 
			// Quantity
			// 
			this->Quantity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quantity->Location = System::Drawing::Point(597, 130);
			this->Quantity->Name = L"Quantity";
			this->Quantity->ReadOnly = true;
			this->Quantity->Size = System::Drawing::Size(148, 22);
			this->Quantity->TabIndex = 36;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(594, 109);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 18);
			this->label12->TabIndex = 35;
			this->label12->Text = L"Quantity";
			// 
			// Filter
			// 
			this->Filter->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Filter->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Filter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Filter->FormattingEnabled = true;
			this->Filter->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Borrowing", L"Returned" });
			this->Filter->Location = System::Drawing::Point(733, 207);
			this->Filter->Name = L"Filter";
			this->Filter->Size = System::Drawing::Size(121, 24);
			this->Filter->TabIndex = 37;
			this->Filter->SelectedIndexChanged += gcnew System::EventHandler(this, &Issue_Book::comboBox2_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(687, 211);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 18);
			this->label13->TabIndex = 38;
			this->label13->Text = L"Filter";
			// 
			// StudentID
			// 
			this->StudentID->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StudentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentID->Location = System::Drawing::Point(21, 61);
			this->StudentID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->StudentID->Name = L"StudentID";
			this->StudentID->Size = System::Drawing::Size(91, 23);
			this->StudentID->TabIndex = 39;
			// 
			// BookTitle
			// 
			this->BookTitle->Enabled = false;
			this->BookTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookTitle->FormattingEnabled = true;
			this->BookTitle->Location = System::Drawing::Point(257, 130);
			this->BookTitle->Name = L"BookTitle";
			this->BookTitle->Size = System::Drawing::Size(125, 24);
			this->BookTitle->TabIndex = 12;
			// 
			// BookID
			// 
			this->BookID->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BookID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookID->Location = System::Drawing::Point(23, 132);
			this->BookID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->BookID->Name = L"BookID";
			this->BookID->Size = System::Drawing::Size(91, 23);
			this->BookID->TabIndex = 40;
			// 
			// Issuedate
			// 
			this->Issuedate->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Issuedate->Location = System::Drawing::Point(772, 63);
			this->Issuedate->Name = L"Issuedate";
			this->Issuedate->Size = System::Drawing::Size(200, 20);
			this->Issuedate->TabIndex = 41;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(769, 40);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 18);
			this->label14->TabIndex = 42;
			this->label14->Text = L"Issue Date";
			// 
			// Issue_Book
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1064, 681);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Issuedate);
			this->Controls->Add(this->BookID);
			this->Controls->Add(this->StudentID);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->Filter);
			this->Controls->Add(this->Quantity);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->Author);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->SearchType);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->UserInput);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->BookTitle);
			this->Controls->Add(this->Telephone);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Department);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->StudentName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Text = L"Issue_Return_Book";
			this->Load += gcnew System::EventHandler(this, &Issue_Book::Issue_Return_Book_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BookID))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		// When form load
		private: System::Void Issue_Return_Book_Load(System::Object^ sender, System::EventArgs^ e) {
			
			// Read data from database into linked list
			this->BookList = ReadBooksDataFromDB();
			this->StudentList = ReadStudentsDataFromDB();
			this->IssueReturnList = ReadIssueReturnDataFromDB();

			// Display Issue Return Data
			TraverseLinkedList(dataGridView1, this->IssueReturnList, DisplayIssueReturnIntoDatagrid);

		}

		// Get student info by id
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			
			// Validate student id input
			if (this->StudentID->Value <= 0) {
				MessageBox::Show("Invalid Student ID");
				return;
			}

			// Retrive student id
			int InputStudentID = (int) (this->StudentID->Value);

			// Retrive student information by id
			this->StudentInfo = SearchNodeLinkedList(this->StudentList, InputStudentID);
			
			// if not found
			if (this->StudentInfo == nullptr) {
				MessageBox::Show(String::Format("There is no student with ID of {0}", InputStudentID));
				return;
			}

			// Display student info to text box
			this->StudentName->Text = msclr::interop::marshal_as<System::String^>(this->StudentInfo->data.name);
			this->Department->Text = msclr::interop::marshal_as<System::String^>(this->StudentInfo->data.department);
			this->Telephone->Text = msclr::interop::marshal_as<System::String^>(this->StudentInfo->data.telephone);

		}
	
		// Get Book info by id
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			
			// Validate Book id input
			if (this->BookID->Value <= 0) {
				MessageBox::Show("Invalid BookID ID");
				return;
			}

			// Retrive student id
			int InputBookID = (int)(this->BookID->Value);

			// Retrive student information by id
			this->BookInfo = SearchNodeLinkedList(this->BookList, InputBookID);

			// if not found
			if (this->BookInfo == nullptr) {
				MessageBox::Show(String::Format("There is no Book with ID of {0}", InputBookID));
				return;
			}
		
			// Display Book info to text box
			this->BookTitle->Text = msclr::interop::marshal_as<System::String^>(this->BookInfo->data.title);
			this->Author->Text = msclr::interop::marshal_as<System::String^>(this->BookInfo->data.author);
			this->Quantity->Text = this->BookInfo->data.qty.ToString();
		}
	
		// Issue book to student
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
			// Check if student and book are filled
			if (this->BookInfo == nullptr || this->StudentInfo == nullptr) {
				MessageBox::Show("There is no Book or Student to issue");
				return;
			}

			// Validate Book qty
			if (this->BookInfo->data.qty == 0) {
				MessageBox::Show("There is no Book left to issue");
				return;
			}

			// Retrive book and student info and store it in issue book
			IssueReturn issue_book;
			issue_book.bookid = this->BookInfo->data.id;
			issue_book.studentid = this->StudentInfo->data.id;
			issue_book.issueDate = msclr::interop::marshal_as<std::string>(this->Issuedate->Text);
			issue_book.returnDate = "";
			issue_book.Status = "BORROWING";
			issue_book.is_borrowing = 1; // 1, True to indicate that the student is still borrowing the book

			// Cleare all textbox
			this->StudentID->Value = 0;
			this->BookID->Value = 0;
			this->StudentName->Text = "";
			this->Department->Text = "";
			this->Telephone->Text = "";
			this->BookTitle->Text = "";
			this->Author->Text = "";
			this->Quantity->Text = "";

			// Update book qty -1 in linked list and database
			this->BookInfo->data.qty -= 1;
			UpdateBookInDB(this->BookInfo->data);

			// Insert issue_book into database
			InsertIssueDB(issue_book);
		
			/*
			this->IssueReturnList = ReadIssueReturnDataFromDB();
			
			// Display Issue Return Data
			this->dataGridView1->Rows->Clear();
			TraverseLinkedList(dataGridView1, this->IssueReturnList, DisplayIssueReturnIntoDatagrid);
			*/
		}

		// Refresh
		private: System::Void Refresh_Click(System::Object^ sender, System::EventArgs^ e) {
			
			this->dataGridView1->Rows->Clear();
		
			// Read data from database
			this->IssueReturnList = ReadIssueReturnDataFromDB();

			TraverseLinkedList(dataGridView1, this->IssueReturnList, DisplayIssueReturnIntoDatagrid);
		}
	
		// Open return book form
		private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			
			// Check if a valid row is click (exclude header row)
			if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {

				// Retirve the selected row
				DataGridViewRow^ SelectedRow = dataGridView1->Rows[e->RowIndex];

				// Open edit_delete form
				return_book^ return_form = gcnew return_book(

					// Pass pointer to book linked list
					this->IssueReturnList,

					// data from datagridview
					SelectedRow->Cells[0]->Value->ToString(),
					SelectedRow->Cells[1]->Value->ToString(),
					SelectedRow->Cells[2]->Value->ToString(),
					SelectedRow->Cells[3]->Value->ToString(),
					SelectedRow->Cells[4]->Value->ToString(),
					SelectedRow->Cells[5]->Value->ToString()
				);

				// Show form
				return_form->ShowDialog();

				// Retrive booklist pointer back
				//this->BookList = update_delete_form->GetBookLinkedList();

				// Clear data gird view
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, this->IssueReturnList, DisplayIssueReturnIntoDatagrid);
			}
		}

		// Sort
		private: System::Void Sort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			
			// Retrive select item from combo box
			std::string SelectedItem = msclr::interop::marshal_as<std::string>(Sort->SelectedItem->ToString());

			// Check for item to sort by
			if (SelectedItem == "By ID") {
				// Sort
				this->IssueReturnList = SortLinkedList(this->IssueReturnList, CompareIRID);

				// Display again
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, this->IssueReturnList, DisplayIssueReturnIntoDatagrid);
			}
			else if (SelectedItem == "By Student Name") {
				// Sort
				this->IssueReturnList = SortLinkedList(this->IssueReturnList, CompareIRStudentName);

				// Display again
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, this->IssueReturnList, DisplayIssueReturnIntoDatagrid);
			}
			else if (SelectedItem == "By Title") {
				// Sort
				this->IssueReturnList = SortLinkedList(this->IssueReturnList, CompareIRTitle);

				// Display again
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, this->IssueReturnList, DisplayIssueReturnIntoDatagrid);
			}
			else if (SelectedItem == "By Issue Date") {
				// Sort
				this->IssueReturnList = SortLinkedList(this->IssueReturnList, CompareIRIssueDate);

				// Display again
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, this->IssueReturnList, DisplayIssueReturnIntoDatagrid);
			}
			else if (SelectedItem == "By Return Date") {
				// Sort
				this->IssueReturnList = SortLinkedList(this->IssueReturnList, CompareIRReturnDate);

				// Display again
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, this->IssueReturnList, DisplayIssueReturnIntoDatagrid);
			}
			else if (SelectedItem == "By Status") {
				// Sort
				this->IssueReturnList = SortLinkedList(this->IssueReturnList, CompareIRStatus);

				// Display again
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, this->IssueReturnList, DisplayIssueReturnIntoDatagrid);
			}
		}

		// Search
		private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
		
			// Retrive the input
			std::string SearchData = msclr::interop::marshal_as<std::string>(UserInput->Text);

			// Retrive select item from combo box
			std::string SelectedItem = msclr::interop::marshal_as<std::string>(SearchType->SelectedItem->ToString());

			if (SelectedItem == "By ID") {
				
				// Clear data gird view
				dataGridView1->Rows->Clear();

				// Search
				SearchNodeLinkedList(dataGridView1, this->IssueReturnList, SearchData, SearchIRID);
			}
			else if (SelectedItem == "By Student Name") {

				// Clear data gird view
				dataGridView1->Rows->Clear();

				// Search
				SearchNodeLinkedList(dataGridView1, this->IssueReturnList, SearchData, SearchIRStudentName);
			}
			else if (SelectedItem == "By Title") {

				// Clear data gird view
				dataGridView1->Rows->Clear();

				// Search
				SearchNodeLinkedList(dataGridView1, this->IssueReturnList, SearchData, SearchIRTitle);
			}
			else if (SelectedItem == "By Issue Date") {

				// Clear data gird view
				dataGridView1->Rows->Clear();

				// Search
				SearchNodeLinkedList(dataGridView1, this->IssueReturnList, SearchData, SearchIRIssueDate);
			}
			else if (SelectedItem == "By Return Date") {

				// Clear data gird view
				dataGridView1->Rows->Clear();

				// Search
				SearchNodeLinkedList(dataGridView1, this->IssueReturnList, SearchData, SearchIRReturnDate);
			}
			else if (SelectedItem == "By Status") {

				// Clear data gird view
				dataGridView1->Rows->Clear();

				// Search
				SearchNodeLinkedList(dataGridView1, this->IssueReturnList, SearchData, SearchIRStatus);
			}
		}

		// Filter table to borrowing, returned 
		private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			
			// Retrive select item from combo box
			std::string SelectedItem = msclr::interop::marshal_as<std::string>(Filter->SelectedItem->ToString());
		
			if (SelectedItem == "Borrowing") {
				dataGridView1->Rows->Clear();
				// 1 for borrowing book
				FilterIR(dataGridView1, this->IssueReturnList, 1);
			}
			else if (SelectedItem == "Returned") {
				dataGridView1->Rows->Clear();
				// 0 for returned book
				FilterIR(dataGridView1, this->IssueReturnList, 0);
			}
		}
	};
}
