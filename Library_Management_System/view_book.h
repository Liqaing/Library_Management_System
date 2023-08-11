#pragma once

#include "Linked_List.h"

// Forward Declaration
Node<Book>* ReadBooksDataFromDB();

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
	private:
		Node<Book>* BookList = nullptr;

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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pages;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quatity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Author;
	private: System::Windows::Forms::Button^ button1;


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
			this->Pages = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quatity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Author = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->BookID,
					this->Title, this->Pages, this->Quatity, this->Author
			});
			this->dataGridView1->Location = System::Drawing::Point(118, 68);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(822, 544);
			this->dataGridView1->TabIndex = 2;
			// 
			// BookID
			// 
			this->BookID->HeaderText = L"Book ID";
			this->BookID->Name = L"BookID";
			this->BookID->ReadOnly = true;
			this->BookID->Visible = false;
			// 
			// Title
			// 
			this->Title->HeaderText = L"Title";
			this->Title->Name = L"Title";
			this->Title->ReadOnly = true;
			this->Title->Visible = false;
			// 
			// Pages
			// 
			this->Pages->HeaderText = L"Pages Number";
			this->Pages->Name = L"Pages";
			this->Pages->ReadOnly = true;
			this->Pages->Visible = false;
			// 
			// Quatity
			// 
			this->Quatity->HeaderText = L"Quatity";
			this->Quatity->Name = L"Quatity";
			this->Quatity->ReadOnly = true;
			this->Quatity->Visible = false;
			// 
			// Author
			// 
			this->Author->HeaderText = L"Author";
			this->Author->Name = L"Author";
			this->Author->ReadOnly = true;
			this->Author->Visible = false;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(470, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Add New Book";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(963, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 47);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &view_book::button1_Click);
			// 
			// view_book
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1064, 681);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"view_book";
			this->Text = L"view_book";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			BookList = ReadBooksDataFromDB();
		}
	};
}
