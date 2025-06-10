#pragma once
#include "Login.h"
#include "ViewRoomStatusForm.h"
#include "ChangePasswordStaffFormForm.h"
#include "Windows.h"

namespace HotelManagementProject2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Threading;
	



	/// <summary>
	/// Summary for StaffForm1
	/// </summary>
	public ref class StaffForm1 : public System::Windows::Forms::Form
	{
	public:
		StaffForm1(void)
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
		~StaffForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnCheckOut;

	private: System::Windows::Forms::Button^ btnCheckIn;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnViewHistory;

	private: System::Windows::Forms::Button^ btnViewRoomStatus;
	private: System::Windows::Forms::Button^ btnSignout;
	private: System::Windows::Forms::Button^ btnChangePassword;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StaffForm1::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnSignout = (gcnew System::Windows::Forms::Button());
			this->btnViewHistory = (gcnew System::Windows::Forms::Button());
			this->btnViewRoomStatus = (gcnew System::Windows::Forms::Button());
			this->btnCheckOut = (gcnew System::Windows::Forms::Button());
			this->btnCheckIn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnChangePassword = (gcnew System::Windows::Forms::Button());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Location = System::Drawing::Point(200, 66);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(766, 553);
			this->panel3->TabIndex = 5;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StaffForm1::panel3_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(766, 553);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkGray;
			this->panel2->Controls->Add(this->btnChangePassword);
			this->panel2->Controls->Add(this->btnSignout);
			this->panel2->Controls->Add(this->btnViewHistory);
			this->panel2->Controls->Add(this->btnViewRoomStatus);
			this->panel2->Controls->Add(this->btnCheckOut);
			this->panel2->Controls->Add(this->btnCheckIn);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 66);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 553);
			this->panel2->TabIndex = 4;
			// 
			// btnSignout
			// 
			this->btnSignout->BackColor = System::Drawing::Color::Gray;
			this->btnSignout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSignout->Location = System::Drawing::Point(42, 505);
			this->btnSignout->Name = L"btnSignout";
			this->btnSignout->Size = System::Drawing::Size(96, 45);
			this->btnSignout->TabIndex = 6;
			this->btnSignout->Text = L"Sign  Out";
			this->btnSignout->UseVisualStyleBackColor = false;
			this->btnSignout->Click += gcnew System::EventHandler(this, &StaffForm1::btnSignOut_Click);
			// 
			// btnViewHistory
			// 
			this->btnViewHistory->BackColor = System::Drawing::Color::Gray;
			this->btnViewHistory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewHistory->Location = System::Drawing::Point(12, 367);
			this->btnViewHistory->Name = L"btnViewHistory";
			this->btnViewHistory->Size = System::Drawing::Size(174, 45);
			this->btnViewHistory->TabIndex = 5;
			this->btnViewHistory->Text = L"View History";
			this->btnViewHistory->UseVisualStyleBackColor = false;
			this->btnViewHistory->Click += gcnew System::EventHandler(this, &StaffForm1::btnViewHistory_Click);
			// 
			// btnViewRoomStatus
			// 
			this->btnViewRoomStatus->BackColor = System::Drawing::Color::Gray;
			this->btnViewRoomStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnViewRoomStatus->Location = System::Drawing::Point(12, 210);
			this->btnViewRoomStatus->Name = L"btnViewRoomStatus";
			this->btnViewRoomStatus->Size = System::Drawing::Size(174, 49);
			this->btnViewRoomStatus->TabIndex = 4;
			this->btnViewRoomStatus->Text = L"View Room Status";
			this->btnViewRoomStatus->UseVisualStyleBackColor = false;
			this->btnViewRoomStatus->Click += gcnew System::EventHandler(this, &StaffForm1::btnViewRoomStatus_Click);
			// 
			// btnCheckOut
			// 
			this->btnCheckOut->BackColor = System::Drawing::Color::Gray;
			this->btnCheckOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCheckOut->Location = System::Drawing::Point(12, 316);
			this->btnCheckOut->Name = L"btnCheckOut";
			this->btnCheckOut->Size = System::Drawing::Size(174, 45);
			this->btnCheckOut->TabIndex = 3;
			this->btnCheckOut->Text = L"Check-Out";
			this->btnCheckOut->UseVisualStyleBackColor = false;
			this->btnCheckOut->Click += gcnew System::EventHandler(this, &StaffForm1::btnCheckOut_Click);
			// 
			// btnCheckIn
			// 
			this->btnCheckIn->BackColor = System::Drawing::Color::Gray;
			this->btnCheckIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCheckIn->Location = System::Drawing::Point(12, 265);
			this->btnCheckIn->Name = L"btnCheckIn";
			this->btnCheckIn->Size = System::Drawing::Size(174, 45);
			this->btnCheckIn->TabIndex = 2;
			this->btnCheckIn->Text = L"Check-In";
			this->btnCheckIn->UseVisualStyleBackColor = false;
			this->btnCheckIn->Click += gcnew System::EventHandler(this, &StaffForm1::btnCheckIn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Welcome Staff";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(25, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(145, 126);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(966, 66);
			this->panel1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(20, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Staff Dashboard";
			// 
			// btnChangePassword
			// 
			this->btnChangePassword->BackColor = System::Drawing::Color::Gray;
			this->btnChangePassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnChangePassword->Location = System::Drawing::Point(12, 418);
			this->btnChangePassword->Name = L"btnChangePassword";
			this->btnChangePassword->Size = System::Drawing::Size(174, 45);
			this->btnChangePassword->TabIndex = 7;
			this->btnChangePassword->Text = L"Change Password";
			this->btnChangePassword->UseVisualStyleBackColor = false;
			this->btnChangePassword->Click += gcnew System::EventHandler(this, &StaffForm1::btnChangePassword_Click);
			// 
			// StaffForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 619);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"StaffForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
    private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

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

    private: System::Void btnSignOut_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btnChangePassword_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangePasswordStaffFormForm^ changeForm = gcnew ChangePasswordStaffFormForm();
		LoadFormInPanel(changeForm);
	}
};
}
