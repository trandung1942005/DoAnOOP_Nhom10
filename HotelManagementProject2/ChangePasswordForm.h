#pragma once

namespace HotelManagementProject2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for ChangePasswordForm
	/// </summary>
	public ref class ChangePasswordForm : public System::Windows::Forms::Form
	{
	private: String^ currentUsername;
	public:
		ChangePasswordForm(String^ username)
		{
			InitializeComponent();
			currentUsername = username;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChangePasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtUserName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtCurrentPassword;
	private: System::Windows::Forms::TextBox^ txtNewPassword;
	private: System::Windows::Forms::TextBox^ txtConfirmNewPassword;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnCancel;



	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtCurrentPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtConfirmNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(64, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"User Name";
			this->label1->Visible = false;
			// 
			// txtUserName
			// 
			this->txtUserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUserName->Location = System::Drawing::Point(263, 65);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(290, 24);
			this->txtUserName->TabIndex = 7;
			this->txtUserName->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(64, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Current Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(64, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"New Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(64, 234);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Confirm New Password";
			this->label4->Visible = false;
			// 
			// txtCurrentPassword
			// 
			this->txtCurrentPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtCurrentPassword->Location = System::Drawing::Point(263, 119);
			this->txtCurrentPassword->Name = L"txtCurrentPassword";
			this->txtCurrentPassword->PasswordChar = '*';
			this->txtCurrentPassword->Size = System::Drawing::Size(290, 24);
			this->txtCurrentPassword->TabIndex = 11;
			// 
			// txtNewPassword
			// 
			this->txtNewPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNewPassword->Location = System::Drawing::Point(263, 171);
			this->txtNewPassword->Name = L"txtNewPassword";
			this->txtNewPassword->PasswordChar = '*';
			this->txtNewPassword->Size = System::Drawing::Size(290, 24);
			this->txtNewPassword->TabIndex = 12;
			// 
			// txtConfirmNewPassword
			// 
			this->txtConfirmNewPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtConfirmNewPassword->Location = System::Drawing::Point(263, 232);
			this->txtConfirmNewPassword->Name = L"txtConfirmNewPassword";
			this->txtConfirmNewPassword->PasswordChar = '*';
			this->txtConfirmNewPassword->Size = System::Drawing::Size(290, 24);
			this->txtConfirmNewPassword->TabIndex = 13;
			this->txtConfirmNewPassword->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(451, 201);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(102, 17);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ChangePasswordForm::checkBox1_CheckedChanged);
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(302, 307);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(100, 33);
			this->btnSave->TabIndex = 16;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &ChangePasswordForm::btnSave_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(429, 307);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(99, 33);
			this->btnCancel->TabIndex = 17;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ChangePasswordForm::btnCancel_Click);
			// 
			// ChangePasswordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 529);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->txtConfirmNewPassword);
			this->Controls->Add(this->txtNewPassword);
			this->Controls->Add(this->txtCurrentPassword);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtUserName);
			this->Controls->Add(this->label1);
			this->Name = L"ChangePasswordForm";
			this->Text = L"ChangePasswordAdminForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ currentPassword = txtCurrentPassword->Text;
		String^ newPassword = txtNewPassword->Text;


		if (currentPassword->Length == 0 || newPassword->Length == 0) {
			MessageBox::Show("Please fill in all fields.");
			return;
		}

		String^ connString = "Server = localhost\\SQLEXPRESS; Database = HotelManagement; Trusted_Connection = True; ";
		SqlConnection^ conn = gcnew SqlConnection(connString);
		try {
			conn->Open();


			String^ query = "SELECT COUNT(*) FROM users WHERE username=@username AND password=@password";
			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@username", currentUsername);
			cmd->Parameters->AddWithValue("@password", currentPassword);

			int count = (int)cmd->ExecuteScalar();
			if (count == 1) {
				String^ updateQuery = "UPDATE users SET Password=@newPassword WHERE UserName=@username";
				SqlCommand^ updateCmd = gcnew SqlCommand(updateQuery, conn);
				updateCmd->Parameters->AddWithValue("@newPassword", newPassword);
				updateCmd->Parameters->AddWithValue("@username", currentUsername);

				if (updateCmd->ExecuteNonQuery() > 0) {
					txtCurrentPassword->Text = "";
					txtNewPassword->Text = "";
					MessageBox::Show("Password updated successfully.");
					
				}
				else {
					MessageBox::Show("Failed to update password.");
				}
			}
			else {
				MessageBox::Show("Current password incorrect.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {

			conn->Close();
		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {

			txtCurrentPassword->PasswordChar = '\0';
			txtNewPassword->PasswordChar = '\0';
			txtConfirmNewPassword->PasswordChar = '\0';
		}
		else {

			txtCurrentPassword->PasswordChar = '*';
			txtNewPassword->PasswordChar = '*';
			txtConfirmNewPassword->PasswordChar = '*';
		}
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
