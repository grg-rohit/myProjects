
#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
#include "User.h"
#include "CheckOut.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		HotelManagementSystem::loginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			//show the register form
			HotelManagementSystem::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				user = registerForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr) {
		/*HotelManagementSystem::MainForm MainForm(user);
		Application::Run(% MainForm);
		if (MainForm.switchToCheckOut) {
			HotelManagementSystem::CheckOut CheckOut;
			CheckOut.ShowDialog();
		}*/

		while (true) {
			HotelManagementSystem::MainForm MainForm(user);
			Application::Run(% MainForm);
			if (MainForm.switchToCheckOut) {
				HotelManagementSystem::CheckOut CheckOut(user);
				CheckOut.ShowDialog();
				if (CheckOut.switchToMainForm) {
					continue;
				}
			}
			else {
				user = MainForm.user;
				break;
			}
		}

	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}