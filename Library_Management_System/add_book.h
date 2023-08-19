#pragma once

#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "Struct.h"
#include "Linked_List.h"

// Forward Declaration
void InitializeDatabase();
void InsertBookDB(Book book);

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for add_book
	/// </summary>
	public ref class add_book : public System::Windows::Forms::Form
	{
	
	// Variable Declaration
	private:
		Node<Book> *BookList = nullptr;
		Node<Book>* current = nullptr;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;


	public:
		add_book(void)
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
		~add_book()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ BookTitle;

	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ author;


	private: System::Windows::Forms::Button^ add;






	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::NumericUpDown^ pages;
	private: System::Windows::Forms::NumericUpDown^ qty;




















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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BookTitle = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->add = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->pages = (gcnew System::Windows::Forms::NumericUpDown());
			this->qty = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pages))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qty))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(471, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add New Book";
			// 
			// BookTitle
			// 
			this->BookTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BookTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookTitle->Location = System::Drawing::Point(431, 70);
			this->BookTitle->Name = L"BookTitle";
			this->BookTitle->Size = System::Drawing::Size(334, 23);
			this->BookTitle->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(296, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Book Title";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(296, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Number of pages";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(296, 171);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 18);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Quantity";
			// 
			// author
			// 
			this->author->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->author->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->author->Location = System::Drawing::Point(431, 210);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(334, 23);
			this->author->TabIndex = 10;
			// 
			// add
			// 
			this->add->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->add->BackColor = System::Drawing::Color::SkyBlue;
			this->add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->ForeColor = System::Drawing::Color::Black;
			this->add->Location = System::Drawing::Point(431, 273);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(139, 37);
			this->add->TabIndex = 11;
			this->add->Text = L"Add to linked list";
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &add_book::add_Click_1);
			// 
			// save
			// 
			this->save->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->save->BackColor = System::Drawing::Color::SkyBlue;
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->ForeColor = System::Drawing::Color::Black;
			this->save->Location = System::Drawing::Point(626, 273);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(139, 37);
			this->save->TabIndex = 16;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &add_book::save_Click_1);
			// 
			// pages
			// 
			this->pages->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pages->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pages->Location = System::Drawing::Point(431, 122);
			this->pages->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->pages->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->pages->Name = L"pages";
			this->pages->Size = System::Drawing::Size(334, 23);
			this->pages->TabIndex = 17;
			this->pages->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// qty
			// 
			this->qty->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->qty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qty->Location = System::Drawing::Point(431, 171);
			this->qty->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->qty->Name = L"qty";
			this->qty->Size = System::Drawing::Size(334, 23);
			this->qty->TabIndex = 18;
			this->qty->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(296, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 18);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Author";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Title,
					this->dataGridViewTextBoxColumn1, this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView1->Location = System::Drawing::Point(30, 360);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1013, 255);
			this->dataGridView1->TabIndex = 19;
			// 
			// Title
			// 
			this->Title->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Title->HeaderText = L"Title";
			this->Title->Name = L"Title";
			this->Title->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Pages";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 150;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Quantity";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 150;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Author";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// add_book
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->qty);
			this->Controls->Add(this->pages);
			this->Controls->Add(this->save);
			this->Controls->Add(this->add);
			this->Controls->Add(this->author);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->BookTitle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"add_book";
			this->Text = L"add_book";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pages))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qty))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: System::Void save_Click_1(System::Object^ sender, System::EventArgs^ e) {
			// If booklist is not null
			if (this->BookList != nullptr) {
			
				// Insert booklist to database
				InsertBookLinkedListIntoDB(this->BookList);
				
				dataGridView1->Rows->Clear();
				
				// Free all node in booklist after using it
				ClearLinkedList(this->BookList);
				this->BookList = nullptr;
			}
			else {
				MessageBox::Show("Linked List is empty, Nothing to save");
				return;
			}
		}

		private: System::Void add_Click_1(System::Object^ sender, System::EventArgs^ e) {

			// Validate textbox input
			if (String::IsNullOrEmpty(this->BookTitle->Text) || String::IsNullOrEmpty(this->author->Text)) {
				MessageBox::Show("Please fill the input");
				return;
			}

			if (this->pages->Value <= 0 || this->qty->Value <= 0) {
				MessageBox::Show("Invalid pages number and quatity");
				return;
			}

			// Retrive input
			Book book;
			book.title = msclr::interop::marshal_as<std::string>(this->BookTitle->Text);
			book.pages_num = (int)(this->pages->Value);
			book.qty = (int)(this->qty->Value);
			book.author = msclr::interop::marshal_as<std::string>(this->author->Text);

			// Initalize Booklist if it null
			if (this->BookList == nullptr) {
				this->BookList = InitializeLinkedList<Book>();
			}
			
			// Add book into linked list
			this->BookList = InsertLinkedList(this->BookList, book);
			
			// Clear datagridview
			dataGridView1->Rows->Clear();

			// Display data in linked list
			TraverseLinkedList(dataGridView1, BookList, DisplayBookIntoDatagridWithoutID);

			// Clear textbox
			this->BookTitle->Text = "";
			this->pages->Value = 1;
			this->qty->Value = 1;
			this->author->Text = "";
		}
	};
}
