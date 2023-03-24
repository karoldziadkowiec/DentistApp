#include "RegisterPage.h"
#include "LoginPage.h"
#include "MainPage.h"
#include "CreateVisit.h"
#include "MyVisitsPage.h"
#include "DataPage.h"
#include "AdminMainPage.h"
#include "AdminCreateVisit.h"
#include "AdminMyVisitPage.h"
#include "AdminPatients.h"
#include "AdminStore.h"
#include "AdminStoreAdd.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	User^ user = nullptr;
	Visit^ visit = nullptr;
	bool wyjscie=false;
	while (true)
	{
		DentistApp::LoginPage loginPage;
		loginPage.ShowDialog();
		if (loginPage.goToRegisterPage)
		{
			DentistApp::RegisterPage registerPage;
			registerPage.ShowDialog();

			if (registerPage.goToLoginPage)
			{
				continue;
			}
			else
			{
				user = registerPage.user;
				break;
			}
		}
		else
		{
			user = loginPage.user;
			break;
		}
	}
	if (user != nullptr) {
		while (user->login != "admin" && wyjscie == false) //DLA PACJENTÓW
		{
			DentistApp::MainPage mainPage(user);
			Application::Run(% mainPage);
			if (mainPage.goToCreateVisit)
			{
				DentistApp::CreateVisit createVisit(user);
				createVisit.ShowDialog();
			}
			else if (mainPage.goToMyVisitsPage)
			{
				DentistApp::MyVisitsPage myVisitsPage(user);
				myVisitsPage.ShowDialog();
			}
			else if (mainPage.goToDataPage)
			{
				DentistApp::DataPage dataPage(user);
				dataPage.ShowDialog();
			}
			else if (mainPage.goToLoginPage)
			{
				DentistApp::LoginPage loginPage;
				wyjscie = true;
				loginPage.ShowDialog();
			}
			else
			{
				break;
				//MessageBox::Show("Authentication canceled", "App.cpp", MessageBoxButtons::OK);
			}
		}
		while (user->login == "admin" && wyjscie == false) //DLA ADMINA
		{
			DentistApp::AdminMainPage adminmainPage(user);
			Application::Run(% adminmainPage);
			if (adminmainPage.goToAdminCreateVisit)
			{
				DentistApp::AdminCreateVisit createVisit(user);
				createVisit.ShowDialog();
			}
			else if (adminmainPage.goToAdminMyVisitPage)
			{
				DentistApp::AdminMyVisitPage adminmyvisitspage(user);
				adminmyvisitspage.ShowDialog();
			}
			else if (adminmainPage.goToDataPage)
			{
				DentistApp::DataPage dataPage(user);
				dataPage.ShowDialog();
			}
			else if (adminmainPage.goToLoginPage)
			{
				DentistApp::LoginPage loginPage;
				wyjscie = true;
				loginPage.ShowDialog();
			}
			else if (adminmainPage.goToAdminPatients)
			{
				DentistApp::AdminPatients adminpatients;
				adminpatients.ShowDialog();
			}
			else if (adminmainPage.goToAdminStore)
			{
				DentistApp::AdminStore adminstore;
				adminstore.ShowDialog();
				if (adminstore.goToAdminStoreAdd)
				{
					DentistApp::AdminStoreAdd adminstore;
					adminstore.ShowDialog();
				}
			}
			else
			{
				break;
				//MessageBox::Show("Authentication canceled", "App.cpp", MessageBoxButtons::OK);
			}
		}
	}
	//else
	//{
	//	MessageBox::Show("Authentication canceled", "App.cpp", MessageBoxButtons::OK);
	//}
}