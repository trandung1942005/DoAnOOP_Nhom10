#pragma once
#include "Login.h"
#include "Add EmployeeForm.h"
#include "ChangePasswordForm.h"


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
	public:
		AdminForm(void)
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
			this->panel1->Size = System::Drawing::Size(966, 66);
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
			this->panel2->Controls->Add(this->btnSignOut);
			this->panel2->Controls->Add(this->btnChangePassword);
			this->panel2->Controls->Add(this->btnAddEmployee);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 66);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 553);
			this->panel2->TabIndex = 1;
			// 
			// btnSignOut
			// 
			this->btnSignOut->BackColor = System::Drawing::Color::Gray;
			this->btnSignOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSignOut->Location = System::Drawing::Point(40, 477);
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
			this->btnChangePassword->Location = System::Drawing::Point(12, 257);
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
			this->btnAddEmployee->Location = System::Drawing::Point(12, 206);
			this->btnAddEmployee->Name = L"btnAddEmployee";
			this->btnAddEmployee->Size = System::Drawing::Size(174, 45);
			this->btnAddEmployee->TabIndex = 2;
			this->btnAddEmployee->Text = L"Add Staff";
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
			this->panel3->Size = System::Drawing::Size(766, 553);
			this->panel3->TabIndex = 2;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(766, 553);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 619);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
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
		 ChangePasswordForm^ changeForm = gcnew ChangePasswordForm();
		 LoadFormInPanel(changeForm);
	 }
   
	 private: System::Void btnSignOut_Click(System::Object^ sender, System::EventArgs^ e);
};
}
