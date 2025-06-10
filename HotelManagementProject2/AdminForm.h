#pragma once
#include "Login.h"
#include "Add EmployeeForm.h"
#include "ChangePasswordForm.h"
#include "Windows.h"


namespace HotelManagementProject2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
    

	public ref class AdminForm : public System::Windows::Forms::Form
	{
	private: String^ currentUsername;
	public:
		AdminForm(String^ loggedInUser)
		{
			InitializeComponent();
			currentUsername = loggedInUser;
			label3->Text = "Welcome, " + currentUsername;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnAddEmployee;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnChangePassword;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnSignOut;
	private: System::Windows::Forms::Button^ btnViewRoomStatus;
	private: System::Windows::Forms::Button^ btnCheckIn;
	private: System::Windows::Forms::Button^ btnCheckOut;
	private: System::Windows::Forms::Button^ btnViewHistory;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnViewHistory = (gcnew System::Windows::Forms::Button());
			this->btnCheckOut = (gcnew System::Windows::Forms::Button());
			this->btnCheckIn = (gcnew System::Windows::Forms::Button());
			this->btnViewRoomStatus = (gcnew System::Windows::Forms::Button());
			this->btnSignOut = (gcnew System::Windows::Forms::Button());
			this->btnChangePassword = (gcnew System::Windows::Forms::Button());
			this->btnAddEmployee = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(992, 66);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(20, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Admin Dashboard";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkGray;
			this->panel2->Controls->Add(this->btnViewHistory);
			this->panel2->Controls->Add(this->btnCheckOut);
			this->panel2->Controls->Add(this->btnCheckIn);
			this->panel2->Controls->Add(this->btnViewRoomStatus);
			this->panel2->Controls->Add(this->btnSignOut);
			this->panel2->Controls->Add(this->btnChangePassword);
			this->panel2->Controls->Add(this->btnAddEmployee);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 66);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 588);
			this->panel2->TabIndex = 1;
			// 
			// btnViewHistory
			// 
			this->btnViewHistory->BackColor = System::Drawing::Color::Gray;
			this->btnViewHistory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewHistory->Location = System::Drawing::Point(12, 396);
			this->btnViewHistory->Name = L"btnViewHistory";
			this->btnViewHistory->Size = System::Drawing::Size(174, 45);
			this->btnViewHistory->TabIndex = 8;
			this->btnViewHistory->Text = L"View History";
			this->btnViewHistory->UseVisualStyleBackColor = false;
			this->btnViewHistory->Click += gcnew System::EventHandler(this, &AdminForm::btnViewHistory_Click);
			// 
			// btnCheckOut
			// 
			this->btnCheckOut->BackColor = System::Drawing::Color::Gray;
			this->btnCheckOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCheckOut->Location = System::Drawing::Point(12, 345);
			this->btnCheckOut->Name = L"btnCheckOut";
			this->btnCheckOut->Size = System::Drawing::Size(174, 45);
			this->btnCheckOut->TabIndex = 7;
			this->btnCheckOut->Text = L"Check-Out";
			this->btnCheckOut->UseVisualStyleBackColor = false;
			this->btnCheckOut->Click += gcnew System::EventHandler(this, &AdminForm::btnCheckOut_Click);
			// 
			// btnCheckIn
			// 
			this->btnCheckIn->BackColor = System::Drawing::Color::Gray;
			this->btnCheckIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCheckIn->Location = System::Drawing::Point(12, 294);
			this->btnCheckIn->Name = L"btnCheckIn";
			this->btnCheckIn->Size = System::Drawing::Size(174, 45);
			this->btnCheckIn->TabIndex = 6;
			this->btnCheckIn->Text = L"Check-In";
			this->btnCheckIn->UseVisualStyleBackColor = false;
			this->btnCheckIn->Click += gcnew System::EventHandler(this, &AdminForm::btnCheckIn_Click);
			// 
			// btnViewRoomStatus
			// 
			this->btnViewRoomStatus->BackColor = System::Drawing::Color::Gray;
			this->btnViewRoomStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnViewRoomStatus->Location = System::Drawing::Point(12, 239);
			this->btnViewRoomStatus->Name = L"btnViewRoomStatus";
			this->btnViewRoomStatus->Size = System::Drawing::Size(174, 49);
			this->btnViewRoomStatus->TabIndex = 5;
			this->btnViewRoomStatus->Text = L"View Room Status";
			this->btnViewRoomStatus->UseVisualStyleBackColor = false;
			this->btnViewRoomStatus->Click += gcnew System::EventHandler(this, &AdminForm::btnViewRoomStatus_Click);
			// 
			// btnSignOut
			// 
			this->btnSignOut->BackColor = System::Drawing::Color::Gray;
			this->btnSignOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSignOut->Location = System::Drawing::Point(44, 531);
			this->btnSignOut->Name = L"btnSignOut";
			this->btnSignOut->Size = System::Drawing::Size(101, 45);
			this->btnSignOut->TabIndex = 4;
			this->btnSignOut->Text = L"Sign Out";
			this->btnSignOut->UseVisualStyleBackColor = false;
			this->btnSignOut->Click += gcnew System::EventHandler(this, &AdminForm::btnSignOut_Click);
			// 
			// btnChangePassword
			// 
			this->btnChangePassword->BackColor = System::Drawing::Color::Gray;
			this->btnChangePassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnChangePassword->Location = System::Drawing::Point(12, 447);
			this->btnChangePassword->Name = L"btnChangePassword";
			this->btnChangePassword->Size = System::Drawing::Size(174, 45);
			this->btnChangePassword->TabIndex = 3;
			this->btnChangePassword->Text = L"Change Password";
			this->btnChangePassword->UseVisualStyleBackColor = false;
			this->btnChangePassword->Click += gcnew System::EventHandler(this, &AdminForm::btnChangePassword_Click);
			// 
			// btnAddEmployee
			// 
			this->btnAddEmployee->BackColor = System::Drawing::Color::Gray;
			this->btnAddEmployee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddEmployee->Location = System::Drawing::Point(12, 188);
			this->btnAddEmployee->Name = L"btnAddEmployee";
			this->btnAddEmployee->Size = System::Drawing::Size(174, 45);
			this->btnAddEmployee->TabIndex = 2;
			this->btnAddEmployee->Text = L"Staff";
			this->btnAddEmployee->UseVisualStyleBackColor = false;
			this->btnAddEmployee->Click += gcnew System::EventHandler(this, &AdminForm::btnAddEmployee_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Welcome  Admin";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(25, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(145, 114);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Location = System::Drawing::Point(200, 66);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(792, 588);
			this->panel3->TabIndex = 2;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(792, 588);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 654);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void LoadFormInPanel(System::Windows::Forms::Form^ formChild) {
		panel3->Controls->Clear(); 
		formChild->TopLevel = false; 
		formChild->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; 
		formChild->Dock = System::Windows::Forms::DockStyle::Fill; 
		panel3->Controls->Add(formChild); 
		formChild->Show(); 
	}

    private: System::Void btnAddEmployee_Click(System::Object^ sender, System::EventArgs^ e) {
		AddEmployeeForm^ addForm = gcnew AddEmployeeForm();
		LoadFormInPanel(addForm);
	}
   
     private: System::Void btnChangePassword_Click(System::Object^ sender, System::EventArgs^ e) {
		 ChangePasswordForm^ changeForm = gcnew ChangePasswordForm(currentUsername);
		 LoadFormInPanel(changeForm);
	 }
   
	 private: System::Void btnSignOut_Click(System::Object^ sender, System::EventArgs^ e);
     private: System::Void btnViewRoomStatus_Click(System::Object^ sender, System::EventArgs^ e) {
		 STARTUPINFO si;
		 PROCESS_INFORMATION pi;
		 ZeroMemory(&si, sizeof(si));
		 ZeroMemory(&pi, sizeof(pi));
		 si.cb = sizeof(si);


		 wchar_t command[] = L"cmd.exe /K chcp 65001 && \"C:\\Users\\win 10\\source\\repos\\HotelManagementProject2\\x64\\Debug\\goishow.exe\"";


		 BOOL result = CreateProcessW(
			 NULL,       // No module name (use command line)
			 command,    // Command line
			 NULL,       // Process handle not inheritable
			 NULL,       // Thread handle not inheritable
			 FALSE,      // Set handle inheritance to FALSE
			 CREATE_NEW_CONSOLE, // Create new console window
			 NULL,       // Use parent's environment block
			 NULL,       // Use parent's starting directory 
			 &si,        // Pointer to STARTUPINFO structure
			 &pi         // Pointer to PROCESS_INFORMATION structure
		 );

		 if (!result) {
			 MessageBox::Show("Failed to launch goishow.exe!");
			 return;
		 }


		 Sleep(1000);


		 HWND hwndCmd = FindWindowW(L"ConsoleWindowClass", NULL);

		 if (hwndCmd == NULL) {
			 MessageBox::Show("Could not find the cmd window!");
			 return;
		 }


		 SetParent(hwndCmd, (HWND)this->panel3->Handle.ToPointer());


		 MoveWindow(hwndCmd, 0, 0, this->panel3->Width, this->panel3->Height, TRUE);
	 }
    private: System::Void btnCheckIn_Click(System::Object^ sender, System::EventArgs^ e) {
		STARTUPINFO si;
		PROCESS_INFORMATION pi;
		ZeroMemory(&si, sizeof(si));
		ZeroMemory(&pi, sizeof(pi));
		si.cb = sizeof(si);


		wchar_t command[] = L"cmd.exe /K chcp 65001 && \"C:\\Users\\win 10\\source\\repos\\HotelManagementProject2\\x64\\Debug\\goicheckin.exe\"";


		BOOL result = CreateProcessW(
			NULL,       // No module name (use command line)
			command,    // Command line
			NULL,       // Process handle not inheritable
			NULL,       // Thread handle not inheritable
			FALSE,      // Set handle inheritance to FALSE
			CREATE_NEW_CONSOLE, // Create new console window
			NULL,       // Use parent's environment block
			NULL,       // Use parent's starting directory 
			&si,        // Pointer to STARTUPINFO structure
			&pi         // Pointer to PROCESS_INFORMATION structure
		);

		if (!result) {
			MessageBox::Show("Failed to launch goicheckin.exe!");
			return;
		}


		Sleep(1000);


		HWND hwndCmd = FindWindowW(L"ConsoleWindowClass", NULL);

		if (hwndCmd == NULL) {
			MessageBox::Show("Could not find the cmd window!");
			return;
		}


		SetParent(hwndCmd, (HWND)this->panel3->Handle.ToPointer());


		MoveWindow(hwndCmd, 0, 0, this->panel3->Width, this->panel3->Height, TRUE);
	}
    private: System::Void btnCheckOut_Click(System::Object^ sender, System::EventArgs^ e) {
		STARTUPINFO si;
		PROCESS_INFORMATION pi;
		ZeroMemory(&si, sizeof(si));
		ZeroMemory(&pi, sizeof(pi));
		si.cb = sizeof(si);


		wchar_t command[] = L"cmd.exe /K chcp 65001 && \"C:\\Users\\win 10\\source\\repos\\HotelManagementProject2\\x64\\Debug\\goicheckout.exe\"";


		BOOL result = CreateProcessW(
			NULL,       // No module name (use command line)
			command,    // Command line
			NULL,       // Process handle not inheritable
			NULL,       // Thread handle not inheritable
			FALSE,      // Set handle inheritance to FALSE
			CREATE_NEW_CONSOLE, // Create new console window
			NULL,       // Use parent's environment block
			NULL,       // Use parent's starting directory 
			&si,        // Pointer to STARTUPINFO structure
			&pi         // Pointer to PROCESS_INFORMATION structure
		);

		if (!result) {
			MessageBox::Show("Failed to launch goicheckout.exe!");
			return;
		}


		Sleep(1000);


		HWND hwndCmd = FindWindowW(L"ConsoleWindowClass", NULL);

		if (hwndCmd == NULL) {
			MessageBox::Show("Could not find the cmd window!");
			return;
		}


		SetParent(hwndCmd, (HWND)this->panel3->Handle.ToPointer());


		MoveWindow(hwndCmd, 0, 0, this->panel3->Width, this->panel3->Height, TRUE);
	}
    private: System::Void btnViewHistory_Click(System::Object^ sender, System::EventArgs^ e) {
		STARTUPINFO si;
		PROCESS_INFORMATION pi;
		ZeroMemory(&si, sizeof(si));
		ZeroMemory(&pi, sizeof(pi));
		si.cb = sizeof(si);


		wchar_t command[] = L"cmd.exe /K chcp 65001 && \"C:\\Users\\win 10\\source\\repos\\HotelManagementProject2\\x64\\Debug\\goiview.exe\"";


		BOOL result = CreateProcessW(
			NULL,       // No module name (use command line)
			command,    // Command line
			NULL,       // Process handle not inheritable
			NULL,       // Thread handle not inheritable
			FALSE,      // Set handle inheritance to FALSE
			CREATE_NEW_CONSOLE, // Create new console window
			NULL,       // Use parent's environment block
			NULL,       // Use parent's starting directory 
			&si,        // Pointer to STARTUPINFO structure
			&pi         // Pointer to PROCESS_INFORMATION structure
		);

		if (!result) {
			MessageBox::Show("Failed to launch goiview.exe!");
			return;
		}


		Sleep(1000);


		HWND hwndCmd = FindWindowW(L"ConsoleWindowClass", NULL);

		if (hwndCmd == NULL) {
			MessageBox::Show("Could not find the cmd window!");
			return;
		}


		SetParent(hwndCmd, (HWND)this->panel3->Handle.ToPointer());


		MoveWindow(hwndCmd, 0, 0, this->panel3->Width, this->panel3->Height, TRUE);
	}
};
}
