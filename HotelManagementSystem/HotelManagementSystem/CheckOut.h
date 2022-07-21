#pragma once
#include "MainForm.h"
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
	/// Summary for CheckOut
	/// </summary>
	public ref class CheckOut : public System::Windows::Forms::Form
	{
	public:
		CheckOut(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

		CheckOut(User^ user) {
			InitializeComponent();

			lbName->Text = user->name;
			lbEmail->Text = user->email;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CheckOut()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::Label^ lbEmail;



	private: System::Windows::Forms::LinkLabel^ llMainForm;
	private: System::Windows::Forms::Button^ Confirm_btn;
	private: System::Windows::Forms::TextBox^ tbDestination;

	protected:

	protected:









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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->llMainForm = (gcnew System::Windows::Forms::LinkLabel());
			this->Confirm_btn = (gcnew System::Windows::Forms::Button());
			this->tbDestination = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(257, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(257, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(257, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Destination";
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Location = System::Drawing::Point(446, 85);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(44, 16);
			this->lbName->TabIndex = 5;
			this->lbName->Text = L"label6";
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Location = System::Drawing::Point(449, 127);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(44, 16);
			this->lbEmail->TabIndex = 6;
			this->lbEmail->Text = L"label7";
			// 
			// llMainForm
			// 
			this->llMainForm->AutoSize = true;
			this->llMainForm->Location = System::Drawing::Point(655, 384);
			this->llMainForm->Name = L"llMainForm";
			this->llMainForm->Size = System::Drawing::Size(58, 16);
			this->llMainForm->TabIndex = 10;
			this->llMainForm->TabStop = true;
			this->llMainForm->Text = L"Check In";
			this->llMainForm->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CheckOut::llMainForm_LinkClicked);
			// 
			// Confirm_btn
			// 
			this->Confirm_btn->Location = System::Drawing::Point(335, 249);
			this->Confirm_btn->Name = L"Confirm_btn";
			this->Confirm_btn->Size = System::Drawing::Size(75, 23);
			this->Confirm_btn->TabIndex = 11;
			this->Confirm_btn->Text = L"Confirm";
			this->Confirm_btn->UseVisualStyleBackColor = true;
			this->Confirm_btn->Click += gcnew System::EventHandler(this, &CheckOut::Confirm_btn_Click);
			// 
			// tbDestination
			// 
			this->tbDestination->Location = System::Drawing::Point(449, 175);
			this->tbDestination->Name = L"tbDestination";
			this->tbDestination->Size = System::Drawing::Size(146, 22);
			this->tbDestination->TabIndex = 12;
			// 
			// CheckOut
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 474);
			this->Controls->Add(this->tbDestination);
			this->Controls->Add(this->Confirm_btn);
			this->Controls->Add(this->llMainForm);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CheckOut";
			this->Text = L"CheckOut";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: bool switchToMainForm = false;
	private: System::Void llMainForm_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToMainForm = true;
		this->Close();
	}
		   public: User^ user = nullptr;
private: System::Void Confirm_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ destination = this->tbDestination->Text;

	try {
		String^ connString = "Data Source = localhost\\sqlexpress; Initial Catalog = Hotel_database; Integrated Security = True";

		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "DELETE User_Destination WHERE destination = @destination;";

		SqlCommand command(sqlQuery, % sqlConn);
		
		command.Parameters->AddWithValue("@destination", destination);
	
		SqlDataReader^ reader = command.ExecuteReader();
		/*if (reader->Read()) {
			user = gcnew User;
			user->destination = reader->GetString(2);
			this->Close();
		}
		else {
			MessageBox::Show("Email or password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
		}*/
		MessageBox::Show("Check Out Successful!");

		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to perform Check Out",
			"Database Failure", MessageBoxButtons::OK);
	}
}
//}
};
}
