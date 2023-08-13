#pragma once
#include "User.h"
namespace DentistApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o LoginPage
	/// </summary>
	public ref class LoginPage : public System::Windows::Forms::Form
	{
	public:
		LoginPage(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~LoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NapisLogo;
	private: System::Windows::Forms::Label^ NapisLogin;
	private: System::Windows::Forms::Label^ NapisHaslo;
	private: System::Windows::Forms::TextBox^ PoleHaslo;
	protected:
	protected:
	private: System::Windows::Forms::TextBox^ PoleLogin;
	private: System::Windows::Forms::Button^ PrzyciskWyjdz;
	private: System::Windows::Forms::Button^ PrzyciskZaloguj;
	private: System::Windows::Forms::LinkLabel^ PrzyciskZarejestujSie;
	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->NapisLogo = (gcnew System::Windows::Forms::Label());
			this->NapisLogin = (gcnew System::Windows::Forms::Label());
			this->NapisHaslo = (gcnew System::Windows::Forms::Label());
			this->PoleHaslo = (gcnew System::Windows::Forms::TextBox());
			this->PoleLogin = (gcnew System::Windows::Forms::TextBox());
			this->PrzyciskWyjdz = (gcnew System::Windows::Forms::Button());
			this->PrzyciskZaloguj = (gcnew System::Windows::Forms::Button());
			this->PrzyciskZarejestujSie = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// NapisLogo
			// 
			this->NapisLogo->BackColor = System::Drawing::Color::Transparent;
			this->NapisLogo->Cursor = System::Windows::Forms::Cursors::Default;
			this->NapisLogo->Font = (gcnew System::Drawing::Font(L"Vladimir Script", 45, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NapisLogo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NapisLogo->Location = System::Drawing::Point(10, 23);
			this->NapisLogo->Name = L"NapisLogo";
			this->NapisLogo->Size = System::Drawing::Size(741, 89);
			this->NapisLogo->TabIndex = 0;
			this->NapisLogo->Text = L"DentApp";
			this->NapisLogo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisLogo->Click += gcnew System::EventHandler(this, &LoginPage::logo);
			// 
			// NapisLogin
			// 
			this->NapisLogin->AutoSize = true;
			this->NapisLogin->BackColor = System::Drawing::Color::Transparent;
			this->NapisLogin->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisLogin->Location = System::Drawing::Point(103, 150);
			this->NapisLogin->Name = L"NapisLogin";
			this->NapisLogin->Size = System::Drawing::Size(126, 59);
			this->NapisLogin->TabIndex = 1;
			this->NapisLogin->Text = L"Login";
			this->NapisLogin->Click += gcnew System::EventHandler(this, &LoginPage::napis_login);
			// 
			// NapisHaslo
			// 
			this->NapisHaslo->AutoSize = true;
			this->NapisHaslo->BackColor = System::Drawing::Color::Transparent;
			this->NapisHaslo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisHaslo->Location = System::Drawing::Point(98, 234);
			this->NapisHaslo->Name = L"NapisHaslo";
			this->NapisHaslo->Size = System::Drawing::Size(131, 59);
			this->NapisHaslo->TabIndex = 2;
			this->NapisHaslo->Text = L"Has³o";
			this->NapisHaslo->Click += gcnew System::EventHandler(this, &LoginPage::napis_haslo);
			// 
			// PoleHaslo
			// 
			this->PoleHaslo->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->PoleHaslo->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleHaslo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->PoleHaslo->ForeColor = System::Drawing::SystemColors::WindowText;
			this->PoleHaslo->Location = System::Drawing::Point(235, 234);
			this->PoleHaslo->Multiline = true;
			this->PoleHaslo->Name = L"PoleHaslo";
			this->PoleHaslo->PasswordChar = '*';
			this->PoleHaslo->Size = System::Drawing::Size(450, 51);
			this->PoleHaslo->TabIndex = 4;
			this->PoleHaslo->TextChanged += gcnew System::EventHandler(this, &LoginPage::pole_haslo);
			// 
			// PoleLogin
			// 
			this->PoleLogin->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->PoleLogin->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleLogin->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->PoleLogin->Location = System::Drawing::Point(235, 150);
			this->PoleLogin->Multiline = true;
			this->PoleLogin->Name = L"PoleLogin";
			this->PoleLogin->Size = System::Drawing::Size(450, 51);
			this->PoleLogin->TabIndex = 3;
			this->PoleLogin->TextChanged += gcnew System::EventHandler(this, &LoginPage::pole_login);
			// 
			// PrzyciskWyjdz
			// 
			this->PrzyciskWyjdz->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskWyjdz->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskWyjdz->Location = System::Drawing::Point(465, 377);
			this->PrzyciskWyjdz->Name = L"PrzyciskWyjdz";
			this->PrzyciskWyjdz->Size = System::Drawing::Size(220, 51);
			this->PrzyciskWyjdz->TabIndex = 6;
			this->PrzyciskWyjdz->Text = L"WyjdŸ";
			this->PrzyciskWyjdz->UseVisualStyleBackColor = false;
			this->PrzyciskWyjdz->Click += gcnew System::EventHandler(this, &LoginPage::Wyjdz);
			// 
			// PrzyciskZaloguj
			// 
			this->PrzyciskZaloguj->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskZaloguj->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskZaloguj->Location = System::Drawing::Point(465, 307);
			this->PrzyciskZaloguj->Name = L"PrzyciskZaloguj";
			this->PrzyciskZaloguj->Size = System::Drawing::Size(220, 51);
			this->PrzyciskZaloguj->TabIndex = 5;
			this->PrzyciskZaloguj->Text = L"Zaloguj";
			this->PrzyciskZaloguj->UseVisualStyleBackColor = false;
			this->PrzyciskZaloguj->Click += gcnew System::EventHandler(this, &LoginPage::Zaloguj);
			// 
			// PrzyciskZarejestujSie
			// 
			this->PrzyciskZarejestujSie->AutoSize = true;
			this->PrzyciskZarejestujSie->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskZarejestujSie->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskZarejestujSie->LinkColor = System::Drawing::Color::Black;
			this->PrzyciskZarejestujSie->Location = System::Drawing::Point(298, 320);
			this->PrzyciskZarejestujSie->Name = L"PrzyciskZarejestujSie";
			this->PrzyciskZarejestujSie->Size = System::Drawing::Size(132, 24);
			this->PrzyciskZarejestujSie->TabIndex = 7;
			this->PrzyciskZarejestujSie->TabStop = true;
			this->PrzyciskZarejestujSie->Text = L"Zarejestruj siê";
			this->PrzyciskZarejestujSie->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginPage::ZarejestrujSie);
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(763, 449);
			this->Controls->Add(this->PrzyciskZarejestujSie);
			this->Controls->Add(this->PrzyciskZaloguj);
			this->Controls->Add(this->PrzyciskWyjdz);
			this->Controls->Add(this->PoleLogin);
			this->Controls->Add(this->PoleHaslo);
			this->Controls->Add(this->NapisHaslo);
			this->Controls->Add(this->NapisLogin);
			this->Controls->Add(this->NapisLogo);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"LoginPage";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DentApp";
			this->Load += gcnew System::EventHandler(this, &LoginPage::LoginPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:User^ user = nullptr;
	public: bool goToRegisterPage = false;

	private: System::Void Wyjdz(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void Zaloguj(System::Object^ sender, System::EventArgs^ e) {
		String^ login = this->PoleLogin->Text;
		String^ password = this->PoleHaslo->Text;
		if (login->Length == 0 || password->Length == 0)
		{
			MessageBox::Show("Puste pola logowania. Wpisz poprawne dane.", "DentApp", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
			SqlConnection sqlConnectionString(connectionString);
			sqlConnectionString.Open();

			String^ sqlQuery = "SELECT * FROM Users WHERE login=@login AND password=@password;";
			SqlCommand command(sqlQuery, % sqlConnectionString);
			command.Parameters->AddWithValue("@login", login);
			command.Parameters->AddWithValue("@password", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				user = gcnew User;
				user->Id = reader->GetInt32(0);
				user->pesel = reader->GetString(1);
				user->name = reader->GetString(2);
				user->surname = reader->GetString(3);
				user->login = reader->GetString(4);
				user->password = reader->GetString(5);
				user->phone = reader->GetString(6);
				user->address = reader->GetString(7);

				this->Close();
			}
			else
			{
				MessageBox::Show("Wpisz poprawne dane logowania.", "DentApp", MessageBoxButtons::OK);
			}
		}
		catch(Exception^ e)
		{
			MessageBox::Show("B³¹d wczytania bazy danych.", "DentApp", MessageBoxButtons::OK);
		}
	}
	private: System::Void ZarejestrujSie(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->goToRegisterPage = true;
		this->Close();
	}

	private: System::Void LoginPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void logo(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void napis_login(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void napis_haslo(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void pole_login(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void pole_haslo(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
