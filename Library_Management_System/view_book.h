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
		Node<Book>* current = nullptr;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pages;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ qty;
	public: System::Windows::Forms::DataGridViewTextBoxColumn^ Author;
	private: System::Windows::Forms::TextBox^ UserInput;
	private: System::Windows::Forms::Button^ SearchTitle;
	private: System::Windows::Forms::Button^ SearchAuthor;
	private: System::Windows::Forms::Button^ Refresh;
	private: System::Windows::Forms::ComboBox^ Sort;


	public:

	public:
	private:



	private: System::Windows::Forms::Label^ label2;


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
			this->SearchTitle = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SearchAuthor = (gcnew System::Windows::Forms::Button());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->Sort = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->BookID,
					this->Title, this->pages, this->qty, this->Author
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 85);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1013, 544);
			this->dataGridView1->TabIndex = 2;
			// 
			// BookID
			// 
			this->BookID->HeaderText = L"Book ID";
			this->BookID->Name = L"BookID";
			this->BookID->ReadOnly = true;
			this->BookID->Width = 194;
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
			this->pages->Width = 194;
			// 
			// qty
			// 
			this->qty->HeaderText = L"Quantity";
			this->qty->Name = L"qty";
			this->qty->ReadOnly = true;
			this->qty->Width = 194;
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
			this->label1->Location = System::Drawing::Point(481, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"All Book";
			// 
			// UserInput
			// 
			this->UserInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserInput->Location = System::Drawing::Point(81, 50);
			this->UserInput->Name = L"UserInput";
			this->UserInput->Size = System::Drawing::Size(190, 24);
			this->UserInput->TabIndex = 4;
			// 
			// SearchTitle
			// 
			this->SearchTitle->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->SearchTitle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchTitle->ForeColor = System::Drawing::Color::White;
			this->SearchTitle->Location = System::Drawing::Point(277, 50);
			this->SearchTitle->Name = L"SearchTitle";
			this->SearchTitle->Size = System::Drawing::Size(101, 24);
			this->SearchTitle->TabIndex = 5;
			this->SearchTitle->Text = L"Search Title";
			this->SearchTitle->UseVisualStyleBackColor = false;
			this->SearchTitle->Click += gcnew System::EventHandler(this, &view_book::Search_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Search";
			// 
			// SearchAuthor
			// 
			this->SearchAuthor->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->SearchAuthor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchAuthor->ForeColor = System::Drawing::Color::White;
			this->SearchAuthor->Location = System::Drawing::Point(384, 50);
			this->SearchAuthor->Name = L"SearchAuthor";
			this->SearchAuthor->Size = System::Drawing::Size(101, 25);
			this->SearchAuthor->TabIndex = 7;
			this->SearchAuthor->Text = L"Search Author";
			this->SearchAuthor->UseVisualStyleBackColor = false;
			this->SearchAuthor->Click += gcnew System::EventHandler(this, &view_book::SearchAuthor_Click);
			// 
			// Refresh
			// 
			this->Refresh->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->Refresh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Refresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Refresh->ForeColor = System::Drawing::Color::White;
			this->Refresh->Location = System::Drawing::Point(491, 50);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(101, 25);
			this->Refresh->TabIndex = 8;
			this->Refresh->Text = L"Refresh";
			this->Refresh->UseVisualStyleBackColor = false;
			this->Refresh->Click += gcnew System::EventHandler(this, &view_book::Refresh_Click);
			// 
			// Sort
			// 
			this->Sort->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Sort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Sort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sort->FormattingEnabled = true;
			this->Sort->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"By ID", L"By Title", L"By Pages", L"By Quantity",
					L"By Author"
			});
			this->Sort->Location = System::Drawing::Point(913, 50);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(121, 24);
			this->Sort->TabIndex = 9;
			this->Sort->SelectedIndexChanged += gcnew System::EventHandler(this, &view_book::Sort_SelectedIndexChanged);
			// 
			// view_book
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1064, 681);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->SearchAuthor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->SearchTitle);
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
			TraverseBookLinkedList(dataGridView1, BookList);
		}

		// Search Linked List for book title
		private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
			
			// Retrive the input
			std::string SearchData = msclr::interop::marshal_as<std::string>(UserInput->Text);
			
			// Cleare data gird view
			dataGridView1->Rows->Clear();
			
			SearchBookTitle(dataGridView1, BookList, SearchData);
		}

		// Search for authour
		private: System::Void SearchAuthor_Click(System::Object^ sender, System::EventArgs^ e) {
			// Retrive the input
			std::string SearchData = msclr::interop::marshal_as<std::string>(UserInput->Text);

			// Cleare data gird view
			dataGridView1->Rows->Clear();

			SearchBookAuthor(dataGridView1, BookList, SearchData);
		}
		
		// Display all book
		private: System::Void Refresh_Click(System::Object^ sender, System::EventArgs^ e) {
			dataGridView1->Rows->Clear();
			TraverseBookLinkedList(dataGridView1, BookList);
		}

		// Sort Linked List
		private: System::Void Sort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			// Retrive select item from combo box
			std::string selectedItem = msclr::interop::marshal_as<std::string>(Sort->SelectedItem->ToString());
			
			// Check for item to sort by
			if (selectedItem == "By ID") {
				
				// Sort
				BookList = SortBookLinkedList(BookList);
				
				// Display again
				dataGridView1->Rows->Clear();
				TraverseBookLinkedList(dataGridView1, BookList);
			}
		}
	};
}
