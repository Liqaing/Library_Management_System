#pragma once

#include "Linked_List.h"
#include <msclr/marshal_cppstd.h>

#include "Update_Delete_Book.h"

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
	private: System::Windows::Forms::Button^ Search;


	private: System::Windows::Forms::Button^ Refresh;
	private: System::Windows::Forms::ComboBox^ Sort;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ SearchType;

	private: System::Windows::Forms::Label^ label4;



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
			this->Search = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->Sort = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SearchType = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->dataGridView1->Location = System::Drawing::Point(21, 86);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1013, 468);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &view_book::dataGridView1_CellDoubleClick);
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
			this->label1->Location = System::Drawing::Point(489, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"All Book";
			// 
			// UserInput
			// 
			this->UserInput->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->UserInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserInput->Location = System::Drawing::Point(79, 50);
			this->UserInput->Name = L"UserInput";
			this->UserInput->Size = System::Drawing::Size(150, 24);
			this->UserInput->TabIndex = 4;
			// 
			// Search
			// 
			this->Search->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Search->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->Search->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->ForeColor = System::Drawing::Color::White;
			this->Search->Location = System::Drawing::Point(343, 50);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(72, 24);
			this->Search->TabIndex = 5;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Click += gcnew System::EventHandler(this, &view_book::Search_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Search";
			// 
			// Refresh
			// 
			this->Refresh->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Refresh->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->Refresh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Refresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Refresh->ForeColor = System::Drawing::Color::White;
			this->Refresh->Location = System::Drawing::Point(421, 50);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(71, 24);
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
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(871, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Sort";
			// 
			// SearchType
			// 
			this->SearchType->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->SearchType->DisplayMember = L"(none)";
			this->SearchType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SearchType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchType->FormattingEnabled = true;
			this->SearchType->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Book ID", L"Title", L"Pages", L"Quantity", L"Author" });
			this->SearchType->Location = System::Drawing::Point(256, 50);
			this->SearchType->Name = L"SearchType";
			this->SearchType->Size = System::Drawing::Size(81, 24);
			this->SearchType->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(235, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"In";
			// 
			// view_book
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->SearchType);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->label2);
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
			this->BookList = ReadBooksDataFromDB();

			// Travese, Display data from linked list into datagridview
			TraverseLinkedList(this->dataGridView1, this->BookList, DisplayBookIntoDatagridWithID);

			// Set defualt value to combobox for search to "title"
			SearchType->SelectedIndex = 1;
		}

		// Search Linked List for book title
		private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
			
			// Retrive the input
			std::string SearchData = msclr::interop::marshal_as<std::string>(UserInput->Text);
			
			// Retrive select item from combo box
			std::string SelectedItem = msclr::interop::marshal_as<std::string>(SearchType->SelectedItem->ToString());

			// Check for data type to search for
			if (SelectedItem == "Book ID") {
				
				// Cleare data gird view
				dataGridView1->Rows->Clear();

				// Search
				SearchNodeLinkedList(dataGridView1, BookList, SearchData, SearchBookID);
			}
			else if (SelectedItem == "Title") {
				dataGridView1->Rows->Clear();
				SearchNodeLinkedList(dataGridView1, BookList, SearchData, SearchBookTitle);
			}
			else if (SelectedItem == "Pages") {
				dataGridView1->Rows->Clear();
				SearchNodeLinkedList(dataGridView1, BookList, SearchData, SearchBookPages);
			}
			else if (SelectedItem == "Quantity") {
				dataGridView1->Rows->Clear();
				SearchNodeLinkedList(dataGridView1, BookList, SearchData, SearchBookQty);
			}
			else if (SelectedItem == "Author") {
				dataGridView1->Rows->Clear();
				SearchNodeLinkedList(dataGridView1, BookList, SearchData, SearchBookAuthor);
			}
			else {
				dataGridView1->Rows->Clear();
			}
		}
		
		// Refresh, display all book
		private: System::Void Refresh_Click(System::Object^ sender, System::EventArgs^ e) {
			dataGridView1->Rows->Clear();
			TraverseLinkedList(dataGridView1, BookList, DisplayBookIntoDatagridWithID);
		}

		// Sort Linked List
		private: System::Void Sort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			// Retrive select item from combo box
			std::string SelectedItem = msclr::interop::marshal_as<std::string>(Sort->SelectedItem->ToString());
			
			// Check for item to sort by
			if (SelectedItem == "By ID") {
				// Sort
				BookList = SortLinkedList(BookList, CompareBookID);
				
				// Display again
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, BookList, DisplayBookIntoDatagridWithID);
			}
			else if (SelectedItem == "By Title") {
				BookList = SortLinkedList(BookList, CompareBookTitle);
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, BookList, DisplayBookIntoDatagridWithID);
			}
			else if (SelectedItem == "By Pages") {
				BookList = SortLinkedList(BookList, CompareBookPages);
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, BookList, DisplayBookIntoDatagridWithID);
			}
			else if (SelectedItem == "By Quantity") {
				BookList = SortLinkedList(BookList, CompareBookQty);
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, BookList, DisplayBookIntoDatagridWithID);
			}
			else if (SelectedItem == "By Author") {
				BookList = SortLinkedList(BookList, CompareBookAuthor);
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, BookList, DisplayBookIntoDatagridWithID);
			}
		}
		
		// Cell click handler
		private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			
			// Check if a valid row is click (exclude header row)
			if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {

				// Retirve the selected row
				DataGridViewRow^ SelectedRow = dataGridView1->Rows[e->RowIndex];
				
				// Open edit_delete form
				Update_Delete_Book^ update_delete_form = gcnew Update_Delete_Book(
					
					// Pass pointer to book linked list
					this->BookList,
		
					// data from datagridview
					SelectedRow->Cells[0]->Value->ToString(),
					SelectedRow->Cells[1]->Value->ToString(),
					SelectedRow->Cells[2]->Value->ToString(),
					SelectedRow->Cells[3]->Value->ToString(),
					SelectedRow->Cells[4]->Value->ToString()
				);

				// Show form
				update_delete_form->ShowDialog();

				// Retrive booklist pointer back
				this->BookList = update_delete_form->GetBookLinkedList();

				// Clear data gird view
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, this->BookList, DisplayBookIntoDatagridWithID);
			}
		}
	};
}
