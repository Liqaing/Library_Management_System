#pragma once

#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "Database.h"
#include "Linked_List.h"



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
	private: System::Windows::Forms::TextBox^ pages;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ qty;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ author;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ add;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ save;










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
			this->pages = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->qty = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->add = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(426, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add new Book";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(296, 117);
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
			this->BookID->Location = System::Drawing::Point(431, 112);
			this->BookID->Name = L"BookID";
			this->BookID->Size = System::Drawing::Size(334, 23);
			this->BookID->TabIndex = 2;
			// 
			// BookTitle
			// 
			this->BookTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BookTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookTitle->Location = System::Drawing::Point(431, 164);
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
			this->label3->Location = System::Drawing::Point(296, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Book Title";
			// 
			// pages
			// 
			this->pages->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pages->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pages->Location = System::Drawing::Point(431, 215);
			this->pages->Name = L"pages";
			this->pages->Size = System::Drawing::Size(334, 23);
			this->pages->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(296, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Number of pages";
			// 
			// qty
			// 
			this->qty->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->qty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qty->Location = System::Drawing::Point(431, 260);
			this->qty->Name = L"qty";
			this->qty->Size = System::Drawing::Size(334, 23);
			this->qty->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(296, 265);
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
			this->author->Location = System::Drawing::Point(431, 304);
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
			this->label6->Location = System::Drawing::Point(296, 309);
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
			this->add->Location = System::Drawing::Point(431, 367);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(139, 37);
			this->add->TabIndex = 11;
			this->add->Text = L"Add to linked list";
			this->add->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(329, 510);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(523, 510);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(391, 510);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"label8";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(451, 510);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(589, 510);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"label11";
			// 
			// save
			// 
			this->save->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->save->BackColor = System::Drawing::Color::RoyalBlue;
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->ForeColor = System::Drawing::Color::White;
			this->save->Location = System::Drawing::Point(626, 367);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(139, 37);
			this->save->TabIndex = 16;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &add_book::save_Click_1);
			// 
			// add_book
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->save);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->add);
			this->Controls->Add(this->author);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->qty);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pages);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->BookTitle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->BookID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"add_book";
			this->Text = L"add_book";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: System::Void save_Click_1(System::Object^ sender, System::EventArgs^ e) {
			Book book;
			book.book_id = msclr::interop::marshal_as<std::string>(this->BookID->Text);
			book.title = msclr::interop::marshal_as<std::string>(this->BookTitle->Text);
			book.pages_num = System::Convert::ToInt32(this->pages->Text);
			book.qty = System::Convert::ToInt32(this->qty->Text);
			book.author = msclr::interop::marshal_as<std::string>(this->author->Text);

			Node<Book>* BookListHead = InitializeLinkedList<Book>();
			InsertLinkedList(BookListHead, book);
			
			InsertBook(BookListHead->data);
			//this->label8->Text = msclr::interop::marshal_as<System::String^>(BookListHead->data.author);
		}
};
}
