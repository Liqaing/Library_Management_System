#pragma once

#include "Linked_List.h"
#include <msclr/marshal_cppstd.h>

// Forward Declaration
Node<Book> *ReadBooksDataFromDB();

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for view_book
	/// </summary>
	public ref class view_book : public System::Windows::Forms::Form
	{

	// Declare variable
	private:
		Node<Book>* BookList = nullptr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pages;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ qty;
	public: System::Windows::Forms::DataGridViewTextBoxColumn^ Author;
	private: System::Windows::Forms::TextBox^ UserInput;
	public:

	public:
	private:


	private: System::Windows::Forms::Button^ Search;












		   Node<Book>* current = nullptr;


	public:
		view_book(void)
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
		~view_book()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;








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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->BookID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pages = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qty = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Author = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->UserInput = (gcnew System::Windows::Forms::TextBox());
			this->Search = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->BookID,
					this->Title, this->pages, this->qty, this->Author
			});
			this->dataGridView1->Location = System::Drawing::Point(25, 73);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(821, 544);
			this->dataGridView1->TabIndex = 2;
			// 
			// BookID
			// 
			this->BookID->HeaderText = L"Book ID";
			this->BookID->Name = L"BookID";
			this->BookID->ReadOnly = true;
			this->BookID->Width = 105;
			// 
			// Title
			// 
			this->Title->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Title->HeaderText = L"Title";
			this->Title->Name = L"Title";
			this->Title->ReadOnly = true;
			// 
			// pages
			// 
			this->pages->HeaderText = L"Pages";
			this->pages->Name = L"pages";
			this->pages->ReadOnly = true;
			// 
			// qty
			// 
			this->qty->HeaderText = L"Quantity";
			this->qty->Name = L"qty";
			this->qty->ReadOnly = true;
			// 
			// Author
			// 
			this->Author->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Author->HeaderText = L"Author";
			this->Author->Name = L"Author";
			this->Author->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(470, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"All Book";
			// 
			// UserInput
			// 
			this->UserInput->Location = System::Drawing::Point(862, 73);
			this->UserInput->Name = L"UserInput";
			this->UserInput->Size = System::Drawing::Size(190, 20);
			this->UserInput->TabIndex = 4;
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->ForeColor = System::Drawing::Color::White;
			this->Search->Location = System::Drawing::Point(862, 109);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(89, 27);
			this->Search->TabIndex = 5;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = false;

			// 
			// view_book
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1064, 681);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->UserInput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"view_book";
			this->Text = L"view_book";
			this->Load += gcnew System::EventHandler(this, &view_book::view_book_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		// When form load
		private: System::Void view_book_Load(System::Object^ sender, System::EventArgs^ e) {
			// Read data from db into linked list
			BookList = ReadBooksDataFromDB();

			// Travese, Display data from linked list into datagridview
			current = BookList;
			while (current != nullptr) {
				// Set text for each columns in row
				dataGridView1->Rows->Add(msclr::interop::marshal_as<System::String^>(current->data.book_id), msclr::interop::marshal_as<System::String^>(current->data.title), current->data.pages_num, current->data.qty ,msclr::interop::marshal_as<System::String^>(current->data.author));
				current = current->next;
			}
		}

		// Search linked list
		/*
		private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string input = msclr::interop::marshal_as<std::string>(UserInput->Text);
			current = SearchLinkedList(BookList, input);
			while (current != nullptr) {
				// Set text for each columns in row
				dataGridView1->Rows->Add(msclr::interop::marshal_as<System::String^>(current->data.book_id), msclr::interop::marshal_as<System::String^>(current->data.title), current->data.pages_num, current->data.qty, msclr::interop::marshal_as<System::String^>(current->data.author));
				current = current->next;
			}
		}
		*/

	};
}
