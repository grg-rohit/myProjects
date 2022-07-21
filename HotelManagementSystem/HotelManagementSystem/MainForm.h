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
	using namespace System::IO;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{


	public:
		//UserEmail to store email from login form
		String^ UserEmail;




























	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbName;








	public:

		   String^ UserName;
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbName->Text = "Name: " + user->name;
			label2->Text ="Email: " + user->email;
			UserEmail = user->email;
			UserName = user->name;
		}

		



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Panel^ Menu;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ CheckIn_btn;









	private: System::Windows::Forms::DateTimePicker^ tbDOR;




	private: System::Windows::Forms::Button^ exit_btn;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ tbDestination;
	private: System::Windows::Forms::TextBox^ textBox4;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ NoRooms;
	private: System::Windows::Forms::LinkLabel^ llCheckOut;









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
			this->Menu = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->llCheckOut = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->CheckIn_btn = (gcnew System::Windows::Forms::Button());
			this->tbDOR = (gcnew System::Windows::Forms::DateTimePicker());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tbDestination = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->NoRooms = (gcnew System::Windows::Forms::TextBox());
			this->Menu->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(237, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(738, 56);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hotel de Cinnamon";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->Menu->Controls->Add(this->label2);
			this->Menu->Controls->Add(this->llCheckOut);
			this->Menu->Controls->Add(this->panel1);
			this->Menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->Menu->Location = System::Drawing::Point(0, 0);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(220, 510);
			this->Menu->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// llCheckOut
			// 
			this->llCheckOut->AutoSize = true;
			this->llCheckOut->LinkColor = System::Drawing::Color::White;
			this->llCheckOut->Location = System::Drawing::Point(54, 471);
			this->llCheckOut->Name = L"llCheckOut";
			this->llCheckOut->Size = System::Drawing::Size(68, 16);
			this->llCheckOut->TabIndex = 1;
			this->llCheckOut->TabStop = true;
			this->llCheckOut->Text = L"Check Out";
			this->llCheckOut->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llCheckOut_LinkClicked);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->panel1->Controls->Add(this->lbName);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(220, 100);
			this->panel1->TabIndex = 0;
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Location = System::Drawing::Point(3, 63);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(44, 16);
			this->lbName->TabIndex = 3;
			this->lbName->Text = L"label1";
			// 
			// CheckIn_btn
			// 
			this->CheckIn_btn->Location = System::Drawing::Point(444, 290);
			this->CheckIn_btn->Name = L"CheckIn_btn";
			this->CheckIn_btn->Size = System::Drawing::Size(100, 23);
			this->CheckIn_btn->TabIndex = 1;
			this->CheckIn_btn->Text = L"Check In";
			this->CheckIn_btn->UseVisualStyleBackColor = true;
			this->CheckIn_btn->Click += gcnew System::EventHandler(this, &MainForm::CheckIn_btn_btn_Click);
			// 
			// tbDOR
			// 
			this->tbDOR->CustomFormat = L"mm-dd-yyyy";
			this->tbDOR->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->tbDOR->Location = System::Drawing::Point(560, 90);
			this->tbDOR->Name = L"tbDOR";
			this->tbDOR->Size = System::Drawing::Size(200, 22);
			this->tbDOR->TabIndex = 5;
			// 
			// exit_btn
			// 
			this->exit_btn->Location = System::Drawing::Point(596, 290);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(75, 23);
			this->exit_btn->TabIndex = 6;
			this->exit_btn->Text = L"Exit";
			this->exit_btn->UseVisualStyleBackColor = true;
			this->exit_btn->Click += gcnew System::EventHandler(this, &MainForm::exit_btn_Click);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(409, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 15);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Selet Date";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbDestination
			// 
			this->tbDestination->Location = System::Drawing::Point(560, 135);
			this->tbDestination->Name = L"tbDestination";
			this->tbDestination->Size = System::Drawing::Size(200, 22);
			this->tbDestination->TabIndex = 8;
			this->tbDestination->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(409, 142);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(125, 15);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"Enter Destination";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(409, 189);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(125, 15);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"Enter No. of Rooms";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// NoRooms
			// 
			this->NoRooms->Location = System::Drawing::Point(560, 182);
			this->NoRooms->Name = L"NoRooms";
			this->NoRooms->Size = System::Drawing::Size(200, 22);
			this->NoRooms->TabIndex = 12;
			this->NoRooms->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1072, 510);
			this->Controls->Add(this->NoRooms);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->tbDestination);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->exit_btn);
			this->Controls->Add(this->CheckIn_btn);
			this->Controls->Add(this->tbDOR);
			this->Controls->Add(this->Menu);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Menu->ResumeLayout(false);
			this->Menu->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   int payment=0;

	public: User^ user = nullptr;
		  
	private: System::Void CheckIn_btn_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int roomPrice = 200;
		String^ destination = tbDestination->Text;
		int rooms = int::Parse(NoRooms->Text);

		try {
			String^ connString = "Data Source = localhost\\sqlexpress; Initial Catalog = Hotel_database; Integrated Security = True";

			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO User_Destination" +
				"(name, destination, email, rooms, DOR, payment) VALUES " +
				"(@name, @destination, @email, @rooms, @DOR, @payment);";
			payment = roomPrice * rooms;
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", UserName);
			command.Parameters->AddWithValue("@destination", destination);
			command.Parameters->AddWithValue("@email", UserEmail);
			command.Parameters->AddWithValue("@rooms", rooms);
			command.Parameters->AddWithValue("@DOR", tbDOR->Value);
			command.Parameters->AddWithValue("@payment", payment);
			

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = UserName;
			user->destination = destination;
			user->rooms = rooms;
			MessageBox::Show("Reservation Successful!");
			//this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register Destination",
				"Register Failure", MessageBoxButtons::OK);
		}
	}
	public: bool switchToCheckOut = false;

	private: System::Void llCheckOut_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToCheckOut = true;
		this->Close();
	}

};
}
