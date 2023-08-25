#pragma once

#include "sqlite3.h"
#include "view_book.h"
#include "add_book.h"
#include "add_student.h"
#include "view_students.h"
#include "Issue_Book.h"

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{

	public:
		Dashboard(void)
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
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ booksToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewBooksToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ addNewBookToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registerNewStudentToolStripMenuItem;





	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;


	private: System::Windows::Forms::Panel^ mainpanel;

	private: System::Windows::Forms::ToolStripMenuItem^ registerNewStudentToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ issueAndReturnToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->booksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewBooksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNewBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registerNewStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registerNewStudentToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->issueAndReturnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->mainpanel = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::SkyBlue;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(36, 36);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->booksToolStripMenuItem,
					this->studentToolStripMenuItem, this->issueAndReturnToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1064, 32);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"Dashboard";
			// 
			// booksToolStripMenuItem
			// 
			this->booksToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->viewBooksToolStripMenuItem,
					this->addNewBookToolStripMenuItem
			});
			this->booksToolStripMenuItem->Name = L"booksToolStripMenuItem";
			this->booksToolStripMenuItem->Size = System::Drawing::Size(74, 28);
			this->booksToolStripMenuItem->Text = L"Books";
			// 
			// viewBooksToolStripMenuItem
			// 
			this->viewBooksToolStripMenuItem->Name = L"viewBooksToolStripMenuItem";
			this->viewBooksToolStripMenuItem->Size = System::Drawing::Size(238, 28);
			this->viewBooksToolStripMenuItem->Text = L"Books Informations";
			this->viewBooksToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::viewBooksToolStripMenuItem_Click);
			// 
			// addNewBookToolStripMenuItem
			// 
			this->addNewBookToolStripMenuItem->Name = L"addNewBookToolStripMenuItem";
			this->addNewBookToolStripMenuItem->Size = System::Drawing::Size(238, 28);
			this->addNewBookToolStripMenuItem->Text = L"Add New Book";
			this->addNewBookToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::addNewBookToolStripMenuItem_Click);
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->registerNewStudentToolStripMenuItem,
					this->registerNewStudentToolStripMenuItem1
			});
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(95, 28);
			this->studentToolStripMenuItem->Text = L"Students";
			// 
			// registerNewStudentToolStripMenuItem
			// 
			this->registerNewStudentToolStripMenuItem->Name = L"registerNewStudentToolStripMenuItem";
			this->registerNewStudentToolStripMenuItem->Size = System::Drawing::Size(262, 28);
			this->registerNewStudentToolStripMenuItem->Text = L"Student Informations";
			this->registerNewStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::registerNewStudentToolStripMenuItem_Click);
			// 
			// registerNewStudentToolStripMenuItem1
			// 
			this->registerNewStudentToolStripMenuItem1->Name = L"registerNewStudentToolStripMenuItem1";
			this->registerNewStudentToolStripMenuItem1->Size = System::Drawing::Size(262, 28);
			this->registerNewStudentToolStripMenuItem1->Text = L"Register New Student";
			this->registerNewStudentToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Dashboard::registerNewStudentToolStripMenuItem1_Click);
			// 
			// issueAndReturnToolStripMenuItem
			// 
			this->issueAndReturnToolStripMenuItem->Name = L"issueAndReturnToolStripMenuItem";
			this->issueAndReturnToolStripMenuItem->Size = System::Drawing::Size(215, 28);
			this->issueAndReturnToolStripMenuItem->Text = L"Issue And Return Book";
			this->issueAndReturnToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::issueAndReturnToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(53, 28);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::exitToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(36, 36);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// mainpanel
			// 
			this->mainpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainpanel->Location = System::Drawing::Point(0, 32);
			this->mainpanel->Name = L"mainpanel";
			this->mainpanel->Size = System::Drawing::Size(1064, 649);
			this->mainpanel->TabIndex = 1;
			// 
			// Dashboard
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1064, 681);
			this->Controls->Add(this->mainpanel);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		// Load form to mainpanel
		public: void loadform(Form^ form) {

			this->mainpanel->Controls->Clear();
			
			// Set properties for the form
			form->TopLevel = false;
			form->Dock = DockStyle::Fill;
			
			this->mainpanel->Controls->Add(form);
			form->Show();
		}

#pragma endregion

		// On form load, show view book
		private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
			view_book^ f = gcnew view_book;
			loadform(f);
		}

		private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}

		private: System::Void viewBooksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			view_book^ f = gcnew view_book;
			loadform(f);
		}

		private: System::Void addNewBookToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			add_book^ f = gcnew add_book;
			loadform(f);
		}

		// Register new student form
		private: System::Void registerNewStudentToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
			add_student^ f = gcnew add_student;
			loadform(f);
		}


		// View student form
		private: System::Void registerNewStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			view_student^ f = gcnew view_student;
			loadform(f);
		}
		
		// Issue and return book
		private: System::Void issueAndReturnToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
			// Retrive book linked list from view_book.h
			Issue_Book^ f = gcnew Issue_Book;
			loadform(f);
		}
	};
}
