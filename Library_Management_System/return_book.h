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
	/// Summary for return_book
	/// </summary>
	public ref class return_book : public System::Windows::Forms::Form
	{

	// Declare variable
	private:
		Node<IssueReturn>* IssueReturnList = nullptr;
		Node<IssueReturn>* IssueReturnData = nullptr;

		Node<Book>* BookInfo = nullptr;

	public:
		return_book(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// parament constructor
		return_book(Node<IssueReturn> *issue_return_list, Node<Book> *bookinfo, String^ ID, String^ StudentName, String^ BookTitle, String^ IssueDate, String^ ReturnDate, String^ Status)
		{
			InitializeComponent();

			this->IssueReturnList = issue_return_list;
			this->BookInfo = bookinfo;

			this->ID->Text = ID;
			this->BookTitle->Text = BookTitle;
			this->StudentName->Text = StudentName;
			this->IssueDate->Text = IssueDate;
			this->ReturnDate->Text = ReturnDate;
			this->Status->Text = Status;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~return_book()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ ID;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ add;


	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ BookTitle;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ StudentName;
	private: System::Windows::Forms::TextBox^ IssueDate;
	private: System::Windows::Forms::TextBox^ Status;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ ReturnDate;


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
			this->ID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BookTitle = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StudentName = (gcnew System::Windows::Forms::TextBox());
			this->IssueDate = (gcnew System::Windows::Forms::TextBox());
			this->Status = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ReturnDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// ID
			// 
			this->ID->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID->Location = System::Drawing::Point(176, 56);
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Size = System::Drawing::Size(334, 23);
			this->ID->TabIndex = 41;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(48, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 18);
			this->label2->TabIndex = 40;
			this->label2->Text = L"ID";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::SkyBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(412, 333);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 37);
			this->button2->TabIndex = 39;
			this->button2->Text = L"Return";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &return_book::button2_Click);
			// 
			// add
			// 
			this->add->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->add->BackColor = System::Drawing::Color::SkyBlue;
			this->add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->ForeColor = System::Drawing::Color::Black;
			this->add->Location = System::Drawing::Point(176, 333);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(98, 37);
			this->add->TabIndex = 37;
			this->add->Text = L"Cancel";
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &return_book::add_Click1);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(48, 232);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 18);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Return Date";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(48, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 18);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Issue Date";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(48, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 18);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Student Name";
			// 
			// BookTitle
			// 
			this->BookTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BookTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookTitle->Location = System::Drawing::Point(176, 94);
			this->BookTitle->Name = L"BookTitle";
			this->BookTitle->ReadOnly = true;
			this->BookTitle->Size = System::Drawing::Size(334, 23);
			this->BookTitle->TabIndex = 30;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(48, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 18);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Book Title";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(188, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 20);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Borrowing and Return Detail";
			// 
			// StudentName
			// 
			this->StudentName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StudentName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentName->Location = System::Drawing::Point(176, 136);
			this->StudentName->Name = L"StudentName";
			this->StudentName->ReadOnly = true;
			this->StudentName->Size = System::Drawing::Size(334, 23);
			this->StudentName->TabIndex = 42;
			// 
			// IssueDate
			// 
			this->IssueDate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->IssueDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IssueDate->Location = System::Drawing::Point(176, 183);
			this->IssueDate->Name = L"IssueDate";
			this->IssueDate->ReadOnly = true;
			this->IssueDate->Size = System::Drawing::Size(334, 23);
			this->IssueDate->TabIndex = 43;
			// 
			// Status
			// 
			this->Status->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Status->Location = System::Drawing::Point(176, 278);
			this->Status->Name = L"Status";
			this->Status->ReadOnly = true;
			this->Status->Size = System::Drawing::Size(334, 23);
			this->Status->TabIndex = 45;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(48, 279);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 18);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Status";
			// 
			// ReturnDate
			// 
			this->ReturnDate->Location = System::Drawing::Point(176, 232);
			this->ReturnDate->Name = L"ReturnDate";
			this->ReturnDate->Size = System::Drawing::Size(334, 20);
			this->ReturnDate->TabIndex = 46;
			// 
			// return_book
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 461);
			this->Controls->Add(this->ReturnDate);
			this->Controls->Add(this->Status);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->IssueDate);
			this->Controls->Add(this->StudentName);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->add);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->BookTitle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"return_book";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"return_book";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*
		// Function to retrive issue_return pointer
		public: Node<IssueReturn>* GetIssueReturnLinkedList() {
			return this->IssueReturnList;
		}
		*/
		// Cancel
		private: System::Void add_Click1(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		// Return Book
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
			// Retrive issue data pointer from linked list by id
			int id = System::Convert::ToInt32(this->ID->Text);
			this->IssueReturnData = SearchNodeLinkedList(this->IssueReturnList, id);

			// Check if book is already return
			if (this->IssueReturnData->data.is_borrowing == 0) { // 0 for false
				MessageBox::Show("Already returned");
				return;
			}

			// Retrive the return date and assign to issue_return data
			this->IssueReturnData->data.returnDate = msclr::interop::marshal_as<std::string>(this->ReturnDate->Text);

			// Update status from borrowing to returned, and is_borrowing to false
			this->IssueReturnData->data.Status = "RETURNED";
			this->IssueReturnData->data.is_borrowing = 0;

			// Update book qty
			this->BookInfo->data.qty += 1;

			// Update issue borrowing and book in database
			UpdateIssueReturnInDB(this->IssueReturnData->data);
			UpdateBookInDB(this->BookInfo->data);

			this->Close();
		}
	};
}
