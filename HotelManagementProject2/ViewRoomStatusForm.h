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
	/// Summary for ViewRoomStatusForm
	/// </summary>
	public ref class ViewRoomStatusForm : public System::Windows::Forms::Form
	{
	public:
		ViewRoomStatusForm(void)
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
		~ViewRoomStatusForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabSuite;
	protected:
	private: System::Windows::Forms::DataGridView^ dgvSuite;
	private: System::Windows::Forms::TabPage^ tabDouble;
	private: System::Windows::Forms::DataGridView^ dgvDouble;
	private: System::Windows::Forms::TabControl^ tabControlRooms;
	private: System::Windows::Forms::TabPage^ tabSingle;
	private: System::Windows::Forms::DataGridView^ dgvSingle;



































	protected:

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
			this->tabSuite = (gcnew System::Windows::Forms::TabPage());
			this->dgvSuite = (gcnew System::Windows::Forms::DataGridView());
			this->tabDouble = (gcnew System::Windows::Forms::TabPage());
			this->dgvDouble = (gcnew System::Windows::Forms::DataGridView());
			this->tabControlRooms = (gcnew System::Windows::Forms::TabControl());
			this->tabSingle = (gcnew System::Windows::Forms::TabPage());
			this->dgvSingle = (gcnew System::Windows::Forms::DataGridView());
			this->tabSuite->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSuite))->BeginInit();
			this->tabDouble->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDouble))->BeginInit();
			this->tabControlRooms->SuspendLayout();
			this->tabSingle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSingle))->BeginInit();
			this->SuspendLayout();
			// 
			// tabSuite
			// 
			this->tabSuite->Controls->Add(this->dgvSuite);
			this->tabSuite->Location = System::Drawing::Point(4, 22);
			this->tabSuite->Name = L"tabSuite";
			this->tabSuite->Size = System::Drawing::Size(691, 344);
			this->tabSuite->TabIndex = 2;
			this->tabSuite->Text = L"Suite";
			this->tabSuite->UseVisualStyleBackColor = true;
			// 
			// dgvSuite
			// 
			this->dgvSuite->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvSuite->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvSuite->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSuite->Location = System::Drawing::Point(3, 5);
			this->dgvSuite->Name = L"dgvSuite";
			this->dgvSuite->Size = System::Drawing::Size(685, 335);
			this->dgvSuite->TabIndex = 1;
			this->dgvSuite->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ViewRoomStatusForm::dgvSuite_CellContentClick);
			// 
			// tabDouble
			// 
			this->tabDouble->Controls->Add(this->dgvDouble);
			this->tabDouble->Location = System::Drawing::Point(4, 22);
			this->tabDouble->Name = L"tabDouble";
			this->tabDouble->Padding = System::Windows::Forms::Padding(3);
			this->tabDouble->Size = System::Drawing::Size(691, 344);
			this->tabDouble->TabIndex = 1;
			this->tabDouble->Text = L"Double";
			this->tabDouble->UseVisualStyleBackColor = true;
			// 
			// dgvDouble
			// 
			this->dgvDouble->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvDouble->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvDouble->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDouble->Location = System::Drawing::Point(3, 5);
			this->dgvDouble->Name = L"dgvDouble";
			this->dgvDouble->Size = System::Drawing::Size(685, 335);
			this->dgvDouble->TabIndex = 1;
			// 
			// tabControlRooms
			// 
			this->tabControlRooms->Controls->Add(this->tabSingle);
			this->tabControlRooms->Controls->Add(this->tabDouble);
			this->tabControlRooms->Controls->Add(this->tabSuite);
			this->tabControlRooms->Location = System::Drawing::Point(7, 22);
			this->tabControlRooms->Name = L"tabControlRooms";
			this->tabControlRooms->SelectedIndex = 0;
			this->tabControlRooms->Size = System::Drawing::Size(699, 370);
			this->tabControlRooms->TabIndex = 0;
			this->tabControlRooms->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewRoomStatusForm::tabControlRooms_SelectedIndexChanged);
			// 
			// tabSingle
			// 
			this->tabSingle->Controls->Add(this->dgvSingle);
			this->tabSingle->Location = System::Drawing::Point(4, 22);
			this->tabSingle->Name = L"tabSingle";
			this->tabSingle->Padding = System::Windows::Forms::Padding(3);
			this->tabSingle->Size = System::Drawing::Size(691, 344);
			this->tabSingle->TabIndex = 0;
			this->tabSingle->Text = L"Single";
			this->tabSingle->UseVisualStyleBackColor = true;
			// 
			// dgvSingle
			// 
			this->dgvSingle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvSingle->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvSingle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSingle->Location = System::Drawing::Point(1, 3);
			this->dgvSingle->Name = L"dgvSingle";
			this->dgvSingle->Size = System::Drawing::Size(685, 335);
			this->dgvSingle->TabIndex = 0;
			// 
			// ViewRoomStatusForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 452);
			this->Controls->Add(this->tabControlRooms);
			this->Name = L"ViewRoomStatusForm";
			this->Text = L"ViewRoomStatusForm";
			this->Load += gcnew System::EventHandler(this, &ViewRoomStatusForm::ViewRoomStatusForm_Load);
			this->tabSuite->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSuite))->EndInit();
			this->tabDouble->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDouble))->EndInit();
			this->tabControlRooms->ResumeLayout(false);
			this->tabSingle->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSingle))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		void LoadRoomData(String^ roomType, DataGridView^ dgv) {
			String^ connString = "Server=localhost\\SQLEXPRESS; Database=HotelManagement; Trusted_Connection=True;";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);

			try {
				sqlConn->Open();

				String^ sqlquery = "SELECT * FROM Rooms WHERE [Room  Type] = @type";
				SqlCommand^ cmd = gcnew SqlCommand(sqlquery, sqlConn);
				cmd->Parameters->AddWithValue("@type", roomType);

				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				dgv->AutoGenerateColumns = true;
				dgv->DataSource = dt;
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			finally {
				sqlConn->Close(); 
			}
		}


    private: System::Void ViewRoomStatusForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadRoomData("Single", dgvSingle);
		LoadRoomData("Double", dgvDouble);
		LoadRoomData("Suite", dgvSuite);
	}
    private: System::Void tabControlRooms_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (tabControlRooms->SelectedTab == tabSingle)
			LoadRoomData("Single", dgvSingle);
		else if (tabControlRooms->SelectedTab == tabDouble)
			LoadRoomData("Double", dgvDouble);
		else if (tabControlRooms->SelectedTab == tabSuite)
			LoadRoomData("Suite", dgvSuite);
	}
private: System::Void dgvSuite_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
