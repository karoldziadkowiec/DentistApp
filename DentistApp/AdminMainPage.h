#pragma once
#include "User.h"
namespace DentistApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MainPage
	/// </summary>
	public ref class AdminMainPage : public System::Windows::Forms::Form
	{
	public:
		AdminMainPage(User^ user)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

			NapisPowitanie->Text = "Witaj " + user->name + " !";

		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~AdminMainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ TloNiebieski;
	protected:

	private: System::Windows::Forms::Button^ PrzyciskMojProfil;
	private: System::Windows::Forms::Button^ PrzyciskWizyty;
	private: System::Windows::Forms::Button^ PrzyciskUsunWizyte;
	private: System::Windows::Forms::Panel^ TloGranatowy;




	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ NapisStronaGlowna;
	private: System::Windows::Forms::Label^ Logoo;


	private: System::Windows::Forms::Label^ NapisPowitanie;
	private: System::Windows::Forms::Panel^ TloBialy;


	private: System::Windows::Forms::Button^ PrzyciskWyloguj;

	private: System::Windows::Forms::Label^ NapisEmail;

	private: System::Windows::Forms::Label^ NapisLogo;
	private: System::Windows::Forms::Label^ NapisGodzinyOtwarcia;
	private: System::Windows::Forms::Label^ NapisNumerTelefonu;



	private: System::Windows::Forms::Label^ NapisMiejsce;
	private: System::Windows::Forms::Button^ PrzyciskMagazyn;
	private: System::Windows::Forms::Button^ PrzyciskPacjenci;






	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TloNiebieski = (gcnew System::Windows::Forms::Panel());
			this->PrzyciskMagazyn = (gcnew System::Windows::Forms::Button());
			this->PrzyciskPacjenci = (gcnew System::Windows::Forms::Button());
			this->PrzyciskWyloguj = (gcnew System::Windows::Forms::Button());
			this->PrzyciskMojProfil = (gcnew System::Windows::Forms::Button());
			this->PrzyciskWizyty = (gcnew System::Windows::Forms::Button());
			this->PrzyciskUsunWizyte = (gcnew System::Windows::Forms::Button());
			this->TloGranatowy = (gcnew System::Windows::Forms::Panel());
			this->Logoo = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->NapisStronaGlowna = (gcnew System::Windows::Forms::Label());
			this->NapisPowitanie = (gcnew System::Windows::Forms::Label());
			this->TloBialy = (gcnew System::Windows::Forms::Panel());
			this->NapisMiejsce = (gcnew System::Windows::Forms::Label());
			this->NapisGodzinyOtwarcia = (gcnew System::Windows::Forms::Label());
			this->NapisNumerTelefonu = (gcnew System::Windows::Forms::Label());
			this->NapisLogo = (gcnew System::Windows::Forms::Label());
			this->NapisEmail = (gcnew System::Windows::Forms::Label());
			this->TloNiebieski->SuspendLayout();
			this->TloGranatowy->SuspendLayout();
			this->panel3->SuspendLayout();
			this->TloBialy->SuspendLayout();
			this->SuspendLayout();
			// 
			// TloNiebieski
			// 
			this->TloNiebieski->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->TloNiebieski->Controls->Add(this->PrzyciskMagazyn);
			this->TloNiebieski->Controls->Add(this->PrzyciskPacjenci);
			this->TloNiebieski->Controls->Add(this->PrzyciskWyloguj);
			this->TloNiebieski->Controls->Add(this->PrzyciskMojProfil);
			this->TloNiebieski->Controls->Add(this->PrzyciskWizyty);
			this->TloNiebieski->Controls->Add(this->PrzyciskUsunWizyte);
			this->TloNiebieski->Controls->Add(this->TloGranatowy);
			this->TloNiebieski->Dock = System::Windows::Forms::DockStyle::Left;
			this->TloNiebieski->Location = System::Drawing::Point(0, 0);
			this->TloNiebieski->Name = L"TloNiebieski";
			this->TloNiebieski->Size = System::Drawing::Size(160, 454);
			this->TloNiebieski->TabIndex = 0;
			this->TloNiebieski->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminMainPage::Tlo_niebieski);
			// 
			// PrzyciskMagazyn
			// 
			this->PrzyciskMagazyn->Dock = System::Windows::Forms::DockStyle::Top;
			this->PrzyciskMagazyn->FlatAppearance->BorderSize = 0;
			this->PrzyciskMagazyn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PrzyciskMagazyn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskMagazyn->ForeColor = System::Drawing::Color::White;
			this->PrzyciskMagazyn->Location = System::Drawing::Point(0, 223);
			this->PrzyciskMagazyn->Name = L"PrzyciskMagazyn";
			this->PrzyciskMagazyn->Size = System::Drawing::Size(160, 50);
			this->PrzyciskMagazyn->TabIndex = 5;
			this->PrzyciskMagazyn->Text = L"Magazyn";
			this->PrzyciskMagazyn->UseVisualStyleBackColor = true;
			this->PrzyciskMagazyn->Click += gcnew System::EventHandler(this, &AdminMainPage::Magazyn);
			// 
			// PrzyciskPacjenci
			// 
			this->PrzyciskPacjenci->Dock = System::Windows::Forms::DockStyle::Top;
			this->PrzyciskPacjenci->FlatAppearance->BorderSize = 0;
			this->PrzyciskPacjenci->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PrzyciskPacjenci->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskPacjenci->ForeColor = System::Drawing::Color::White;
			this->PrzyciskPacjenci->Location = System::Drawing::Point(0, 173);
			this->PrzyciskPacjenci->Name = L"PrzyciskPacjenci";
			this->PrzyciskPacjenci->Size = System::Drawing::Size(160, 50);
			this->PrzyciskPacjenci->TabIndex = 4;
			this->PrzyciskPacjenci->Text = L"Pacjenci";
			this->PrzyciskPacjenci->UseVisualStyleBackColor = true;
			this->PrzyciskPacjenci->Click += gcnew System::EventHandler(this, &AdminMainPage::Pacjenci);
			// 
			// PrzyciskWyloguj
			// 
			this->PrzyciskWyloguj->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PrzyciskWyloguj->FlatAppearance->BorderSize = 0;
			this->PrzyciskWyloguj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PrzyciskWyloguj->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskWyloguj->ForeColor = System::Drawing::Color::White;
			this->PrzyciskWyloguj->Location = System::Drawing::Point(0, 404);
			this->PrzyciskWyloguj->Name = L"PrzyciskWyloguj";
			this->PrzyciskWyloguj->Size = System::Drawing::Size(160, 50);
			this->PrzyciskWyloguj->TabIndex = 7;
			this->PrzyciskWyloguj->Text = L"Wyloguj";
			this->PrzyciskWyloguj->UseVisualStyleBackColor = true;
			this->PrzyciskWyloguj->Click += gcnew System::EventHandler(this, &AdminMainPage::Wyloguj);
			// 
			// PrzyciskMojProfil
			// 
			this->PrzyciskMojProfil->FlatAppearance->BorderSize = 0;
			this->PrzyciskMojProfil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PrzyciskMojProfil->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskMojProfil->ForeColor = System::Drawing::Color::White;
			this->PrzyciskMojProfil->Location = System::Drawing::Point(0, 272);
			this->PrzyciskMojProfil->Name = L"PrzyciskMojProfil";
			this->PrzyciskMojProfil->Size = System::Drawing::Size(160, 50);
			this->PrzyciskMojProfil->TabIndex = 6;
			this->PrzyciskMojProfil->Text = L"Mój profil";
			this->PrzyciskMojProfil->UseVisualStyleBackColor = true;
			this->PrzyciskMojProfil->Click += gcnew System::EventHandler(this, &AdminMainPage::MojProfil);
			// 
			// PrzyciskWizyty
			// 
			this->PrzyciskWizyty->Dock = System::Windows::Forms::DockStyle::Top;
			this->PrzyciskWizyty->FlatAppearance->BorderSize = 0;
			this->PrzyciskWizyty->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PrzyciskWizyty->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskWizyty->ForeColor = System::Drawing::Color::White;
			this->PrzyciskWizyty->Location = System::Drawing::Point(0, 123);
			this->PrzyciskWizyty->Name = L"PrzyciskWizyty";
			this->PrzyciskWizyty->Size = System::Drawing::Size(160, 50);
			this->PrzyciskWizyty->TabIndex = 3;
			this->PrzyciskWizyty->Text = L"Wizyty";
			this->PrzyciskWizyty->UseVisualStyleBackColor = true;
			this->PrzyciskWizyty->Click += gcnew System::EventHandler(this, &AdminMainPage::Wizyty);
			// 
			// PrzyciskUsunWizyte
			// 
			this->PrzyciskUsunWizyte->Dock = System::Windows::Forms::DockStyle::Top;
			this->PrzyciskUsunWizyte->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->PrzyciskUsunWizyte->FlatAppearance->BorderSize = 0;
			this->PrzyciskUsunWizyte->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PrzyciskUsunWizyte->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskUsunWizyte->ForeColor = System::Drawing::Color::White;
			this->PrzyciskUsunWizyte->Location = System::Drawing::Point(0, 73);
			this->PrzyciskUsunWizyte->Name = L"PrzyciskUsunWizyte";
			this->PrzyciskUsunWizyte->Size = System::Drawing::Size(160, 50);
			this->PrzyciskUsunWizyte->TabIndex = 1;
			this->PrzyciskUsunWizyte->Text = L"Umów wizytê";
			this->PrzyciskUsunWizyte->UseVisualStyleBackColor = true;
			this->PrzyciskUsunWizyte->Click += gcnew System::EventHandler(this, &AdminMainPage::UmowWizyte);
			// 
			// TloGranatowy
			// 
			this->TloGranatowy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->TloGranatowy->Controls->Add(this->Logoo);
			this->TloGranatowy->Dock = System::Windows::Forms::DockStyle::Top;
			this->TloGranatowy->Location = System::Drawing::Point(0, 0);
			this->TloGranatowy->Name = L"TloGranatowy";
			this->TloGranatowy->Size = System::Drawing::Size(160, 73);
			this->TloGranatowy->TabIndex = 1;
			this->TloGranatowy->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminMainPage::Tlo_granatowy);
			// 
			// Logoo
			// 
			this->Logoo->AutoSize = true;
			this->Logoo->Font = (gcnew System::Drawing::Font(L"Vladimir Script", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Logoo->ForeColor = System::Drawing::Color::White;
			this->Logoo->Location = System::Drawing::Point(24, 20);
			this->Logoo->Name = L"Logoo";
			this->Logoo->Size = System::Drawing::Size(114, 36);
			this->Logoo->TabIndex = 0;
			this->Logoo->Text = L"DentApp";
			this->Logoo->Click += gcnew System::EventHandler(this, &AdminMainPage::Logo);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MediumVioletRed;
			this->panel3->Controls->Add(this->NapisStronaGlowna);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(605, 73);
			this->panel3->TabIndex = 1;
			// 
			// NapisStronaGlowna
			// 
			this->NapisStronaGlowna->Dock = System::Windows::Forms::DockStyle::Top;
			this->NapisStronaGlowna->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisStronaGlowna->ForeColor = System::Drawing::Color::White;
			this->NapisStronaGlowna->Location = System::Drawing::Point(0, 0);
			this->NapisStronaGlowna->Name = L"NapisStronaGlowna";
			this->NapisStronaGlowna->Size = System::Drawing::Size(605, 70);
			this->NapisStronaGlowna->TabIndex = 0;
			this->NapisStronaGlowna->Text = L"Strona G³ówna";
			this->NapisStronaGlowna->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisStronaGlowna->Click += gcnew System::EventHandler(this, &AdminMainPage::napis_strona_glowna);
			// 
			// NapisPowitanie
			// 
			this->NapisPowitanie->BackColor = System::Drawing::Color::Transparent;
			this->NapisPowitanie->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisPowitanie->ForeColor = System::Drawing::Color::DeepPink;
			this->NapisPowitanie->Location = System::Drawing::Point(0, 95);
			this->NapisPowitanie->Name = L"NapisPowitanie";
			this->NapisPowitanie->Size = System::Drawing::Size(605, 97);
			this->NapisPowitanie->TabIndex = 2;
			this->NapisPowitanie->Text = L"label3";
			this->NapisPowitanie->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisPowitanie->Click += gcnew System::EventHandler(this, &AdminMainPage::napis_powitanie);
			// 
			// TloBialy
			// 
			this->TloBialy->BackColor = System::Drawing::Color::Azure;
			this->TloBialy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TloBialy->Controls->Add(this->NapisMiejsce);
			this->TloBialy->Controls->Add(this->NapisGodzinyOtwarcia);
			this->TloBialy->Controls->Add(this->NapisNumerTelefonu);
			this->TloBialy->Controls->Add(this->NapisLogo);
			this->TloBialy->Controls->Add(this->NapisEmail);
			this->TloBialy->Controls->Add(this->NapisPowitanie);
			this->TloBialy->Controls->Add(this->panel3);
			this->TloBialy->Dock = System::Windows::Forms::DockStyle::Left;
			this->TloBialy->Location = System::Drawing::Point(160, 0);
			this->TloBialy->Name = L"TloBialy";
			this->TloBialy->Size = System::Drawing::Size(608, 454);
			this->TloBialy->TabIndex = 1;
			this->TloBialy->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminMainPage::Tlo_bialy);
			// 
			// NapisMiejsce
			// 
			this->NapisMiejsce->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisMiejsce->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->NapisMiejsce->Location = System::Drawing::Point(0, 272);
			this->NapisMiejsce->Name = L"NapisMiejsce";
			this->NapisMiejsce->Size = System::Drawing::Size(605, 23);
			this->NapisMiejsce->TabIndex = 7;
			this->NapisMiejsce->Text = L"Kraków, ul. D³uga 2115";
			this->NapisMiejsce->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisMiejsce->Click += gcnew System::EventHandler(this, &AdminMainPage::napis_miejsce);
			// 
			// NapisGodzinyOtwarcia
			// 
			this->NapisGodzinyOtwarcia->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisGodzinyOtwarcia->Location = System::Drawing::Point(-4, 309);
			this->NapisGodzinyOtwarcia->Name = L"NapisGodzinyOtwarcia";
			this->NapisGodzinyOtwarcia->Size = System::Drawing::Size(605, 23);
			this->NapisGodzinyOtwarcia->TabIndex = 6;
			this->NapisGodzinyOtwarcia->Text = L"pon-pt: 8.00-16.00 | sob: zamkniête";
			this->NapisGodzinyOtwarcia->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisGodzinyOtwarcia->Click += gcnew System::EventHandler(this, &AdminMainPage::napis_godziny_otwarcia);
			// 
			// NapisNumerTelefonu
			// 
			this->NapisNumerTelefonu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisNumerTelefonu->Location = System::Drawing::Point(0, 378);
			this->NapisNumerTelefonu->Name = L"NapisNumerTelefonu";
			this->NapisNumerTelefonu->Size = System::Drawing::Size(605, 23);
			this->NapisNumerTelefonu->TabIndex = 5;
			this->NapisNumerTelefonu->Text = L"12 345 67 89";
			this->NapisNumerTelefonu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisNumerTelefonu->Click += gcnew System::EventHandler(this, &AdminMainPage::napis_numer_telefonu);
			// 
			// NapisLogo
			// 
			this->NapisLogo->BackColor = System::Drawing::Color::Transparent;
			this->NapisLogo->Cursor = System::Windows::Forms::Cursors::Default;
			this->NapisLogo->Font = (gcnew System::Drawing::Font(L"Vladimir Script", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NapisLogo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NapisLogo->Location = System::Drawing::Point(0, 183);
			this->NapisLogo->Name = L"NapisLogo";
			this->NapisLogo->Size = System::Drawing::Size(605, 89);
			this->NapisLogo->TabIndex = 4;
			this->NapisLogo->Text = L"DentApp";
			this->NapisLogo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisLogo->Click += gcnew System::EventHandler(this, &AdminMainPage::napis_logo);
			// 
			// NapisEmail
			// 
			this->NapisEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisEmail->Location = System::Drawing::Point(0, 344);
			this->NapisEmail->Name = L"NapisEmail";
			this->NapisEmail->Size = System::Drawing::Size(605, 21);
			this->NapisEmail->TabIndex = 3;
			this->NapisEmail->Text = L"kontakt@dentapp.com";
			this->NapisEmail->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->NapisEmail->Click += gcnew System::EventHandler(this, &AdminMainPage::napis_email);
			// 
			// AdminMainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(765, 454);
			this->Controls->Add(this->TloBialy);
			this->Controls->Add(this->TloNiebieski);
			this->MaximizeBox = false;
			this->Name = L"AdminMainPage";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DentApp";
			this->Load += gcnew System::EventHandler(this, &AdminMainPage::AdminMainPage_Load);
			this->TloNiebieski->ResumeLayout(false);
			this->TloGranatowy->ResumeLayout(false);
			this->TloGranatowy->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->TloBialy->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool goToLoginPage = false;
	public: bool goToAdminCreateVisit = false;
	public: bool goToDataPage = false;
	public: bool goToAdminMyVisitPage = false;
	public: bool goToAdminPatients = false;
	public: bool goToAdminStore = false;
		  public: bool goToAdminPatientInfo = false;
	private: System::Void UmowWizyte(System::Object^ sender, System::EventArgs^ e) {
		goToAdminCreateVisit = true;
		this->Close();
	}
	private: System::Void Wizyty(System::Object^ sender, System::EventArgs^ e) {
		goToAdminMyVisitPage = true;
		this->Close();
	}
	public: bool goToAdminMainPage = false;
	private: System::Void MojProfil(System::Object^ sender, System::EventArgs^ e) {
		goToDataPage = true;
		this->Close();
	}

	private: System::Void Logo(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AdminMainPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Wyloguj(System::Object^ sender, System::EventArgs^ e) {
		goToLoginPage = true;
		this->Close();
	}
	private: System::Void napis_powitanie(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_email(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_logo(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_godziny_otwarcia(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Pacjenci(System::Object^ sender, System::EventArgs^ e) {
		goToAdminPatients = true;
		this->Close();
	}
	private: System::Void Magazyn(System::Object^ sender, System::EventArgs^ e) {
	goToAdminStore = true;
	this->Close();
	}
	private: System::Void Tlo_bialy(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Tlo_granatowy(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Tlo_niebieski(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void napis_miejsce(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_numer_telefonu(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_strona_glowna(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
