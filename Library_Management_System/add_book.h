#pragma once

#include "Source.h"

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
	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::Button^ button2;








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
			this->save = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(362, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(385, 63);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add new Book";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(145, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 38);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Book ID";
			// 
			// BookID
			// 
			this->BookID->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BookID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookID->Location = System::Drawing::Point(152, 160);
			this->BookID->Name = L"BookID";
			this->BookID->Size = System::Drawing::Size(334, 41);
			this->BookID->TabIndex = 2;
			// 
			// BookTitle
			// 
			this->BookTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BookTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookTitle->Location = System::Drawing::Point(621, 160);
			this->BookTitle->Name = L"BookTitle";
			this->BookTitle->Size = System::Drawing::Size(334, 41);
			this->BookTitle->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(614, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 38);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Book Title";
			// 
			// pages
			// 
			this->pages->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pages->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pages->Location = System::Drawing::Point(152, 284);
			this->pages->Name = L"pages";
			this->pages->Size = System::Drawing::Size(334, 41);
			this->pages->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(145, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(267, 38);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Number of pages";
			// 
			// qty
			// 
			this->qty->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->qty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qty->Location = System::Drawing::Point(621, 284);
			this->qty->Name = L"qty";
			this->qty->Size = System::Drawing::Size(334, 41);
			this->qty->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(614, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 38);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Quantity";
			// 
			// author
			// 
			this->author->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->author->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->author->Location = System::Drawing::Point(152, 417);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(334, 41);
			this->author->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(145, 374);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 38);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Author";
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->save->Location = System::Drawing::Point(152, 518);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(142, 47);
			this->save->TabIndex = 11;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1044, 277);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// add_book
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->save);
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
	
	
	

};
}
