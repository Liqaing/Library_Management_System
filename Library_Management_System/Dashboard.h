#pragma once

#include "view_book.h"
#include "add_book.h"

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
	private: System::Windows::Forms::ToolStripMenuItem^ searchBookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addNewBookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteBookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registerNewStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ issueAndReturnToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ issueBookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ returnBookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historyToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addABookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addMutilpleBookToolStripMenuItem;
	private: System::Windows::Forms::Panel^ mainpanel;
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
			this->searchBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNewBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addABookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addMutilpleBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registerNewStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->issueAndReturnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->issueBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->returnBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->mainpanel = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DodgerBlue;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->booksToolStripMenuItem,
					this->studentToolStripMenuItem, this->issueAndReturnToolStripMenuItem, this->historyToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1064, 32);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"Dashboard";
			// 
			// booksToolStripMenuItem
			// 
			this->booksToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->viewBooksToolStripMenuItem,
					this->searchBookToolStripMenuItem, this->addNewBookToolStripMenuItem, this->deleteBookToolStripMenuItem
			});
			this->booksToolStripMenuItem->Name = L"booksToolStripMenuItem";
			this->booksToolStripMenuItem->Size = System::Drawing::Size(74, 28);
			this->booksToolStripMenuItem->Text = L"Books";
			// 
			// viewBooksToolStripMenuItem
			// 
			this->viewBooksToolStripMenuItem->Name = L"viewBooksToolStripMenuItem";
			this->viewBooksToolStripMenuItem->Size = System::Drawing::Size(207, 28);
			this->viewBooksToolStripMenuItem->Text = L"View Books";
			this->viewBooksToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::viewBooksToolStripMenuItem_Click);
			// 
			// searchBookToolStripMenuItem
			// 
			this->searchBookToolStripMenuItem->Name = L"searchBookToolStripMenuItem";
			this->searchBookToolStripMenuItem->Size = System::Drawing::Size(207, 28);
			this->searchBookToolStripMenuItem->Text = L"Search Book";
			// 
			// addNewBookToolStripMenuItem
			// 
			this->addNewBookToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addABookToolStripMenuItem,
					this->addMutilpleBookToolStripMenuItem
			});
			this->addNewBookToolStripMenuItem->Name = L"addNewBookToolStripMenuItem";
			this->addNewBookToolStripMenuItem->Size = System::Drawing::Size(207, 28);
			this->addNewBookToolStripMenuItem->Text = L"Add New Book";
			// 
			// addABookToolStripMenuItem
			// 
			this->addABookToolStripMenuItem->Name = L"addABookToolStripMenuItem";
			this->addABookToolStripMenuItem->Size = System::Drawing::Size(233, 28);
			this->addABookToolStripMenuItem->Text = L"Add a Book";
			this->addABookToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::addABookToolStripMenuItem_Click);
			// 
			// addMutilpleBookToolStripMenuItem
			// 
			this->addMutilpleBookToolStripMenuItem->Name = L"addMutilpleBookToolStripMenuItem";
			this->addMutilpleBookToolStripMenuItem->Size = System::Drawing::Size(233, 28);
			this->addMutilpleBookToolStripMenuItem->Text = L"Add Mutilple Book";
			// 
			// deleteBookToolStripMenuItem
			// 
			this->deleteBookToolStripMenuItem->Name = L"deleteBookToolStripMenuItem";
			this->deleteBookToolStripMenuItem->Size = System::Drawing::Size(207, 28);
			this->deleteBookToolStripMenuItem->Text = L"Delete Book";
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->registerNewStudentToolStripMenuItem,
					this->deleteStudentToolStripMenuItem
			});
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(86, 28);
			this->studentToolStripMenuItem->Text = L"Student";
			// 
			// registerNewStudentToolStripMenuItem
			// 
			this->registerNewStudentToolStripMenuItem->Name = L"registerNewStudentToolStripMenuItem";
			this->registerNewStudentToolStripMenuItem->Size = System::Drawing::Size(262, 28);
			this->registerNewStudentToolStripMenuItem->Text = L"Register New Student";
			// 
			// deleteStudentToolStripMenuItem
			// 
			this->deleteStudentToolStripMenuItem->Name = L"deleteStudentToolStripMenuItem";
			this->deleteStudentToolStripMenuItem->Size = System::Drawing::Size(262, 28);
			this->deleteStudentToolStripMenuItem->Text = L"Delete Student";
			// 
			// issueAndReturnToolStripMenuItem
			// 
			this->issueAndReturnToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->issueBookToolStripMenuItem,
					this->returnBookToolStripMenuItem
			});
			this->issueAndReturnToolStripMenuItem->Name = L"issueAndReturnToolStripMenuItem";
			this->issueAndReturnToolStripMenuItem->Size = System::Drawing::Size(164, 28);
			this->issueAndReturnToolStripMenuItem->Text = L"Issue and Return";
			// 
			// issueBookToolStripMenuItem
			// 
			this->issueBookToolStripMenuItem->Name = L"issueBookToolStripMenuItem";
			this->issueBookToolStripMenuItem->Size = System::Drawing::Size(184, 28);
			this->issueBookToolStripMenuItem->Text = L"Issue Book";
			// 
			// returnBookToolStripMenuItem
			// 
			this->returnBookToolStripMenuItem->Name = L"returnBookToolStripMenuItem";
			this->returnBookToolStripMenuItem->Size = System::Drawing::Size(184, 28);
			this->returnBookToolStripMenuItem->Text = L"Return Book";
			// 
			// historyToolStripMenuItem
			// 
			this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
			this->historyToolStripMenuItem->Size = System::Drawing::Size(79, 28);
			this->historyToolStripMenuItem->Text = L"History";
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
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	// Load form to mainpanel
	public: void loadform(Form^ form) {
		this->mainpanel->Controls->Clear();
		form->TopLevel = false;
		form->Dock = DockStyle::Fill;
		this->mainpanel->Controls->Add(form);
		form->Show();
	}

#pragma endregion
	
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void viewBooksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		view_book^ f = gcnew view_book;
		loadform(f);
	}
	private: System::Void addABookToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		add_book^ f = gcnew add_book;
		loadform(f);
	}
};
}
