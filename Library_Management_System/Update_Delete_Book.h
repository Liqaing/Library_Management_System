#pragma once

#include "Struct.h"
#include "Linked_List.h"

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Edit_Delete_Book
	/// </summary>
	public ref class Update_Delete_Book : public System::Windows::Forms::Form
	{

	// Declare variable
	private:
		Node<Book>* BookList = nullptr;

	public:

		Update_Delete_Book(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		// Constructor to receive data from other form
		Update_Delete_Book(Node<Book>* booklist, String^ book_id, String^ title, String^ pages, String^ qty, String^ author)
		{	
			InitializeComponent();

			// Get pointer to book linked list
			this->BookList = booklist;
			
			this->BookID->Text = book_id;
			this->BookTitle->Text = title;
			this->pages->Text = pages;
			this->qty->Text = qty;
			this->author->Text = author;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Update_Delete_Book()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ BookTitle;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ pages;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ qty;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ author;
	private: System::Windows::Forms::Button^ add;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ BookID;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BookTitle = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pages = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->qty = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->add = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BookID = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pages))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qty))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(250, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Book Detail";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(54, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Book Title";
			// 
			// BookTitle
			// 
			this->BookTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BookTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookTitle->Location = System::Drawing::Point(182, 94);
			this->BookTitle->Name = L"BookTitle";
			this->BookTitle->Size = System::Drawing::Size(334, 23);
			this->BookTitle->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(54, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Number of pages";
			// 
			// pages
			// 
			this->pages->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pages->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pages->Location = System::Drawing::Point(182, 136);
			this->pages->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->pages->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->pages->Name = L"pages";
			this->pages->Size = System::Drawing::Size(334, 23);
			this->pages->TabIndex = 18;
			this->pages->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(54, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 18);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Quantity";
			// 
			// qty
			// 
			this->qty->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->qty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qty->Location = System::Drawing::Point(182, 184);
			this->qty->Name = L"qty";
			this->qty->Size = System::Drawing::Size(334, 23);
			this->qty->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(54, 232);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 18);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Author";
			// 
			// author
			// 
			this->author->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->author->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->author->Location = System::Drawing::Point(182, 227);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(334, 23);
			this->author->TabIndex = 22;
			// 
			// add
			// 
			this->add->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->add->BackColor = System::Drawing::Color::RoyalBlue;
			this->add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->ForeColor = System::Drawing::Color::White;
			this->add->Location = System::Drawing::Point(182, 289);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(98, 37);
			this->add->TabIndex = 23;
			this->add->Text = L"Cancel";
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &Update_Delete_Book::add_Click1);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(300, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 37);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Update_Delete_Book::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::RoyalBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(418, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 37);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Update_Delete_Book::button2_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(54, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 18);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Book ID";
			// 
			// BookID
			// 
			this->BookID->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BookID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookID->Location = System::Drawing::Point(182, 56);
			this->BookID->Name = L"BookID";
			this->BookID->ReadOnly = true;
			this->BookID->Size = System::Drawing::Size(334, 23);
			this->BookID->TabIndex = 27;
			// 
			// Update_Delete_Book
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 461);
			this->Controls->Add(this->BookID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->add);
			this->Controls->Add(this->author);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->qty);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pages);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->BookTitle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"Update_Delete_Book";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Edit_Delete_Book";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pages))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qty))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Function to retrive booklist pointer
		public: Node<Book>* GetBookLinkedList() {
			return BookList;
		}

		// Close form
		private: System::Void add_Click1(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		// Delete Node
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
			// Delete node form Book linked list
			int id = System::Convert::ToInt32(this->BookID->Text); // use system convert not (int) becuase it is from text box not number box
			this->BookList = DeleteNodeFromLinkedList(BookList, id);
			
			// Delete data from data base
			DeleteBookFromDB(id);

			this->Close();
		}

		// Update
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			
			// Retrive input
			Book book;
			book.id = System::Convert::ToInt32(BookID->Text);
			book.title = msclr::interop::marshal_as<std::string>(this->BookTitle->Text);
			book.pages_num = (int)(this->pages->Value);
			book.qty = (int)(this->qty->Value);
			book.author = msclr::interop::marshal_as<std::string>(this->author->Text);

			// Update data in linked list;
			this->BookList = UpdateLinkedList(this->BookList, book);
			
			// Update data in DB
			UpdateBookInDB(book);

			this->Close();
		}
	};
}
