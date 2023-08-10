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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ BookID;
	private: System::Windows::Forms::TextBox^ BookTitle;

	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ author;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ add;






	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::NumericUpDown^ pages;
	private: System::Windows::Forms::NumericUpDown^ qty;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ ListViewBookID;
	private: System::Windows::Forms::ColumnHeader^ ListViewTitle;
	private: System::Windows::Forms::ColumnHeader^ ListViewPages;
	private: System::Windows::Forms::ColumnHeader^ ListViewQty;
	private: System::Windows::Forms::ColumnHeader^ ListViewAuthor;














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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BookID = (gcnew System::Windows::Forms::TextBox());
			this->BookTitle = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->add = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->pages = (gcnew System::Windows::Forms::NumericUpDown());
			this->qty = (gcnew System::Windows::Forms::NumericUpDown());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ListViewBookID = (gcnew System::Windows::Forms::ColumnHeader());
			this->ListViewTitle = (gcnew System::Windows::Forms::ColumnHeader());
			this->ListViewPages = (gcnew System::Windows::Forms::ColumnHeader());
			this->ListViewQty = (gcnew System::Windows::Forms::ColumnHeader());
			this->ListViewAuthor = (gcnew System::Windows::Forms::ColumnHeader());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pages))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qty))->BeginInit();
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
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(296, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Book ID";
			// 
			// BookID
			// 
			this->BookID->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BookID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookID->Location = System::Drawing::Point(431, 75);
			this->BookID->Name = L"BookID";
			this->BookID->Size = System::Drawing::Size(334, 23);
			this->BookID->TabIndex = 2;
			// 
			// BookTitle
			// 
			this->BookTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BookTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookTitle->Location = System::Drawing::Point(431, 127);
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
			this->label3->Location = System::Drawing::Point(296, 132);
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
			this->label4->Location = System::Drawing::Point(296, 179);
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
			this->label5->Location = System::Drawing::Point(296, 228);
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
			this->author->Location = System::Drawing::Point(431, 267);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(334, 23);
			this->author->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(296, 272);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 18);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Author";
			// 
			// add
			// 
			this->add->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->add->BackColor = System::Drawing::Color::RoyalBlue;
			this->add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->ForeColor = System::Drawing::Color::White;
			this->add->Location = System::Drawing::Point(431, 330);
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
			this->save->BackColor = System::Drawing::Color::RoyalBlue;
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->ForeColor = System::Drawing::Color::White;
			this->save->Location = System::Drawing::Point(626, 330);
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
			this->pages->Location = System::Drawing::Point(431, 179);
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
			this->qty->Location = System::Drawing::Point(431, 228);
			this->qty->Name = L"qty";
			this->qty->Size = System::Drawing::Size(334, 23);
			this->qty->TabIndex = 18;
			this->qty->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// listView1
			// 
			this->listView1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->ListViewBookID, this->ListViewTitle,
					this->ListViewPages, this->ListViewQty, this->ListViewAuthor
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(239, 400);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(705, 233);
			this->listView1->TabIndex = 19;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &add_book::listView1_SelectedIndexChanged);
			// 
			// ListViewBookID
			// 
			this->ListViewBookID->Text = L"Book ID";
			this->ListViewBookID->Width = 99;
			// 
			// ListViewTitle
			// 
			this->ListViewTitle->Text = L"Title";
			this->ListViewTitle->Width = 250;
			// 
			// ListViewPages
			// 
			this->ListViewPages->Text = L"Pages";
			this->ListViewPages->Width = 73;
			// 
			// ListViewQty
			// 
			this->ListViewQty->Text = L"Qty";
			this->ListViewQty->Width = 67;
			// 
			// ListViewAuthor
			// 
			this->ListViewAuthor->Text = L"Author";
			this->ListViewAuthor->Width = 212;
			// 
			// add_book
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->listView1);
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
			this->Controls->Add(this->BookID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"add_book";
			this->Text = L"add_book";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pages))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qty))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: System::Void save_Click_1(System::Object^ sender, System::EventArgs^ e) {
			if (this->BookList != nullptr) {
				InsertBookLinkedListIntoDB(this->BookList);
			}
			//this->label8->Text = msclr::interop::marshal_as<System::String^>(BookListHead->data.author);
		}

		private: System::Void add_Click_1(System::Object^ sender, System::EventArgs^ e) {

			// Validate textbox input
			if (String::IsNullOrEmpty(this->BookID->Text) || String::IsNullOrEmpty(this->BookTitle->Text) || String::IsNullOrEmpty(this->author->Text)) {
				MessageBox::Show("Please fill the input");
				return;
			}

			if (this->pages->Value <= 0 || this->qty->Value <= 0) {
				MessageBox::Show("Invalid pages number and quatity");
				return;
			}

			// Retrive input
			Book book;
			book.book_id = msclr::interop::marshal_as<std::string>(this->BookID->Text);
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
			
			// Display data in linked list
			Node<Book> *current = BookList->next;
			while (current != nullptr)
			{
				listView1->Clear();
				this->listView1->Items->Add(msclr::interop::marshal_as<System::String^>(current->data.book_id));
				this->listView1->Items->Add(msclr::interop::marshal_as<System::String^>(current->data.title));
				
				this->listView1->Items->Add(msclr::interop::marshal_as<System::String^>(current->data.author));
				current = current->next;
			}
			

			// Clear textbox
			this->BookID->Text = "";
			this->BookTitle->Text = "";
			this->pages->Value = 1;
			this->qty->Value = 1;
			this->author->Text = "";
		}
	
		private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
};
}
