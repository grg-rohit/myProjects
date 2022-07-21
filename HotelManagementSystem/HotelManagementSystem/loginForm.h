#pragma once
#include "user.h"


namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
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
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ linkRegister;







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
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->linkRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(517, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &loginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"email";
			this->label2->Click += gcnew System::EventHandler(this, &loginForm::label2_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(188, 73);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(338, 38);
			this->tbEmail->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"password";
			this->label3->Click += gcnew System::EventHandler(this, &loginForm::label3_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(188, 133);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(338, 38);
			this->tbPassword->TabIndex = 4;
			this->tbPassword->UseSystemPasswordChar = true;
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(188, 203);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(138, 45);
			this->btnOk->TabIndex = 5;
			this->btnOk->Text = L"ok";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &loginForm::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(390, 204);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(136, 44);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &loginForm::btnCancel_Click);
			// 
			// linkRegister
			// 
			this->linkRegister->AutoSize = true;
			this->linkRegister->Location = System::Drawing::Point(394, 288);
			this->linkRegister->Name = L"linkRegister";
			this->linkRegister->Size = System::Drawing::Size(120, 32);
			this->linkRegister->TabIndex = 7;
			this->linkRegister->TabStop = true;
			this->linkRegister->Text = L"Register";
			this->linkRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &loginForm::linkRegister_LinkClicked);
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(584, 344);
			this->Controls->Add(this->linkRegister);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"loginForm";
			this->Text = L"loginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
public: User^ user = nullptr;
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->tbEmail->Text;
	String^ password = this->tbPassword->Text;

	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter email and password", "Email or Password Empty", MessageBoxButtons::OK);
		return;
	}
	try {

		

		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Hotel_database;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM Users WHERE email=@email AND password=@pwd;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@pwd", password);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->name = reader->GetString(1);
			user->email = reader->GetString(2);
			user->phone = reader->GetString(3);
			user->address = reader->GetString(4);
			user->password = reader->GetString(5);
			this->Close();
		}
		else {
			MessageBox::Show("Email or password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
		}
	}
	catch(Exception^ e){
		MessageBox::Show("Failed to connect to database", "Database connection error", MessageBoxButtons::OK);
		
	}
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   public: bool switchToRegister = false;
private: System::Void linkRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
};
}
