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
	/// Summary for AddEmployeeForm
	/// </summary>
	public ref class AddEmployeeForm : public System::Windows::Forms::Form
	{
	public:
		AddEmployeeForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->btnDelete->Click += gcnew System::EventHandler(this, &AddEmployeeForm::btnDelete_Click);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddEmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtUserName;

	private: System::Windows::Forms::ComboBox^ cmbGender;






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtPassword;







	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::ComboBox^ cmbRole;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::DataGridView^ dataGridView2;





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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->cmbRole = (gcnew System::Windows::Forms::ComboBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbGender = (gcnew System::Windows::Forms::ComboBox());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Controls->Add(this->dataGridView2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(718, 191);
			this->panel1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->BackgroundColor = System::Drawing::Color::Teal;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::Color::DarkGray;
			this->dataGridView2->Location = System::Drawing::Point(21, 32);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(685, 148);
			this->dataGridView2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->Controls->Add(this->btnCancel);
			this->panel2->Controls->Add(this->cmbRole);
			this->panel2->Controls->Add(this->btnDelete);
			this->panel2->Controls->Add(this->btnAdd);
			this->panel2->Controls->Add(this->txtPassword);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->cmbGender);
			this->panel2->Controls->Add(this->txtUserName);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(0, 186);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(718, 266);
			this->panel2->TabIndex = 1;
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(459, 216);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(99, 38);
			this->btnCancel->TabIndex = 21;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddEmployeeForm::btnCancel_Click);
			// 
			// cmbRole
			// 
			this->cmbRole->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cmbRole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbRole->FormattingEnabled = true;
			this->cmbRole->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Admin", L"Staff", L"Others" });
			this->cmbRole->Location = System::Drawing::Point(555, 97);
			this->cmbRole->Name = L"cmbRole";
			this->cmbRole->Size = System::Drawing::Size(140, 28);
			this->cmbRole->TabIndex = 20;
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(325, 216);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(99, 38);
			this->btnDelete->TabIndex = 19;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &AddEmployeeForm::btnDelete_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(190, 216);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(99, 38);
			this->btnAdd->TabIndex = 17;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddEmployeeForm::btnAdd_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(156, 95);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(228, 26);
			this->txtPassword->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(25, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 24);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Password";
			// 
			// cmbGender
			// 
			this->cmbGender->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cmbGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbGender->FormattingEnabled = true;
			this->cmbGender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Others" });
			this->cmbGender->Location = System::Drawing::Point(555, 44);
			this->cmbGender->Name = L"cmbGender";
			this->cmbGender->Size = System::Drawing::Size(140, 28);
			this->cmbGender->TabIndex = 11;
			// 
			// txtUserName
			// 
			this->txtUserName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->txtUserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUserName->Location = System::Drawing::Point(156, 46);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(228, 26);
			this->txtUserName->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(465, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 24);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Gender";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(480, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Role";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"User Name";
			// 
			// AddEmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 452);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"AddEmployeeForm";
			this->Text = L"AddEmployeeForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		SqlConnection^ sqlConn;
		String^ connString = "Server = localhost\\SQLEXPRESS; Database = HotelManagement; Trusted_Connection = True; ";

		void LoadEmployeeData() {
			try {
				sqlConn = gcnew SqlConnection(connString);
				sqlConn->Open();

				String^ query = "SELECT * FROM users";
				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, sqlConn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				dataGridView2->DataSource = dt;

				sqlConn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading data: " + ex->Message);
			}
		}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	   String^ connString = "Server = localhost\\SQLEXPRESS; Database = HotelManagement; Trusted_Connection = True; ";
	   SqlConnection^ conn = gcnew SqlConnection(connString);

	   try {
		   conn->Open();
		   String^ query = "INSERT INTO Users (Username, Password, Gender, Role) VALUES (@Username, @Password, @Gender, @Role)";
		   SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		   cmd->Parameters->AddWithValue("@Username", txtUserName->Text);
		   cmd->Parameters->AddWithValue("@Password", txtPassword->Text);
		   cmd->Parameters->AddWithValue("@Gender", cmbGender->Text);
		   cmd->Parameters->AddWithValue("@Role", cmbRole->Text);
		   cmd->ExecuteNonQuery();
		   txtUserName->Text = "";
		   txtPassword->Text = "";
		   cmbGender->SelectedIndex = -1;  
		   cmbRole->SelectedIndex = -1;
		   MessageBox::Show("Employee added successfully.");
	   }
	   catch (Exception^ ex) {
		   MessageBox::Show("Error: " + ex->Message);
	   }
	   finally {
		   conn->Close();
	   }
   }

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Server = localhost\\SQLEXPRESS; Database = HotelManagement; Trusted_Connection = True;";
		SqlConnection^ conn = gcnew SqlConnection(connString);

		try {
			conn->Open();
			String^ query = "DELETE FROM Users WHERE Username = @Username";
			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@Username", txtUserName->Text);

			int rowsAffected = cmd->ExecuteNonQuery();
			if (rowsAffected > 0) {
				
				txtUserName->Text = "";
				txtPassword->Text = "";
				cmbGender->SelectedIndex = -1;
				cmbRole->SelectedIndex = -1;
				txtUserName->Focus();

				MessageBox::Show("Employee deleted successfully.");
			}
			else {
				MessageBox::Show("Employee not found.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}
    private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
