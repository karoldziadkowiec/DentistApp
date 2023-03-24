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
	/// Podsumowanie informacji o DataPage
	/// </summary>
	public ref class DataPage : public System::Windows::Forms::Form
	{
	public:
		DataPage(User^ user)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

			PoleImie->Text = user->name;
			PoleNazwisko->Text =user->surname;
			NapisTwojPesel->Text =user->pesel;
			NapisTwojLogin->Text =user->login;
			PoleHaslo->Text = user->password;
			PoleNumerTelefonu->Text = user->phone;
			PoleAdres->Text = user->address;
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~DataPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ NapisMojProfil;
	private: System::Windows::Forms::Label^ NapisImie;
	private: System::Windows::Forms::Label^ NapisNazwisko;
	private: System::Windows::Forms::Label^ NapisTwojPesel;
	private: System::Windows::Forms::Label^ NapisTwojLogin;
	protected:





	private: System::Windows::Forms::Label^ NapisNumerTelefonu;
	private: System::Windows::Forms::Label^ NapisAdres;
	private: System::Windows::Forms::Button^ PrzyciskPowrot;
	private: System::Windows::Forms::TextBox^ PoleImie;
	private: System::Windows::Forms::TextBox^ PoleNazwisko;
	private: System::Windows::Forms::TextBox^ PoleNumerTelefonu;
	private: System::Windows::Forms::TextBox^ PoleAdres;









	private: System::Windows::Forms::Button^ PrzyciskZapisz;

	private: System::Windows::Forms::Label^ NapisPesel;
	private: System::Windows::Forms::Label^ NapisLogin;
	private: System::Windows::Forms::TextBox^ PoleHaslo;




	private: System::Windows::Forms::Label^ NapisHaslo;


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
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->NapisMojProfil = (gcnew System::Windows::Forms::Label());
			this->NapisImie = (gcnew System::Windows::Forms::Label());
			this->NapisNazwisko = (gcnew System::Windows::Forms::Label());
			this->NapisTwojPesel = (gcnew System::Windows::Forms::Label());
			this->NapisTwojLogin = (gcnew System::Windows::Forms::Label());
			this->NapisNumerTelefonu = (gcnew System::Windows::Forms::Label());
			this->NapisAdres = (gcnew System::Windows::Forms::Label());
			this->PrzyciskPowrot = (gcnew System::Windows::Forms::Button());
			this->PoleImie = (gcnew System::Windows::Forms::TextBox());
			this->PoleNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->PoleNumerTelefonu = (gcnew System::Windows::Forms::TextBox());
			this->PoleAdres = (gcnew System::Windows::Forms::TextBox());
			this->PrzyciskZapisz = (gcnew System::Windows::Forms::Button());
			this->NapisPesel = (gcnew System::Windows::Forms::Label());
			this->NapisLogin = (gcnew System::Windows::Forms::Label());
			this->PoleHaslo = (gcnew System::Windows::Forms::TextBox());
			this->NapisHaslo = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MediumVioletRed;
			this->panel3->Controls->Add(this->NapisMojProfil);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(608, 73);
			this->panel3->TabIndex = 4;
			// 
			// NapisMojProfil
			// 
			this->NapisMojProfil->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisMojProfil->ForeColor = System::Drawing::Color::White;
			this->NapisMojProfil->Location = System::Drawing::Point(0, 0);
			this->NapisMojProfil->Name = L"NapisMojProfil";
			this->NapisMojProfil->Size = System::Drawing::Size(608, 73);
			this->NapisMojProfil->TabIndex = 0;
			this->NapisMojProfil->Text = L"Mój profil";
			this->NapisMojProfil->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisMojProfil->Click += gcnew System::EventHandler(this, &DataPage::napis_moj_profil);
			// 
			// NapisImie
			// 
			this->NapisImie->AutoSize = true;
			this->NapisImie->BackColor = System::Drawing::Color::Transparent;
			this->NapisImie->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisImie->Location = System::Drawing::Point(120, 110);
			this->NapisImie->Name = L"NapisImie";
			this->NapisImie->Size = System::Drawing::Size(76, 34);
			this->NapisImie->TabIndex = 18;
			this->NapisImie->Text = L"Imiê:";
			this->NapisImie->Click += gcnew System::EventHandler(this, &DataPage::napis_imie);
			// 
			// NapisNazwisko
			// 
			this->NapisNazwisko->AutoSize = true;
			this->NapisNazwisko->BackColor = System::Drawing::Color::Transparent;
			this->NapisNazwisko->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisNazwisko->Location = System::Drawing::Point(74, 159);
			this->NapisNazwisko->Name = L"NapisNazwisko";
			this->NapisNazwisko->Size = System::Drawing::Size(132, 34);
			this->NapisNazwisko->TabIndex = 19;
			this->NapisNazwisko->Text = L"Nazwisko:";
			this->NapisNazwisko->Click += gcnew System::EventHandler(this, &DataPage::napis_nazwisko);
			// 
			// NapisTwojPesel
			// 
			this->NapisTwojPesel->AutoSize = true;
			this->NapisTwojPesel->BackColor = System::Drawing::Color::Transparent;
			this->NapisTwojPesel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisTwojPesel->Location = System::Drawing::Point(213, 210);
			this->NapisTwojPesel->Name = L"NapisTwojPesel";
			this->NapisTwojPesel->Size = System::Drawing::Size(86, 34);
			this->NapisTwojPesel->TabIndex = 27;
			this->NapisTwojPesel->Text = L"label5";
			this->NapisTwojPesel->Click += gcnew System::EventHandler(this, &DataPage::napis_twoj_pesel);
			// 
			// NapisTwojLogin
			// 
			this->NapisTwojLogin->AutoSize = true;
			this->NapisTwojLogin->BackColor = System::Drawing::Color::Transparent;
			this->NapisTwojLogin->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisTwojLogin->Location = System::Drawing::Point(212, 253);
			this->NapisTwojLogin->Name = L"NapisTwojLogin";
			this->NapisTwojLogin->Size = System::Drawing::Size(86, 34);
			this->NapisTwojLogin->TabIndex = 28;
			this->NapisTwojLogin->Text = L"label2";
			this->NapisTwojLogin->Click += gcnew System::EventHandler(this, &DataPage::napis_twoj_login);
			// 
			// NapisNumerTelefonu
			// 
			this->NapisNumerTelefonu->AutoSize = true;
			this->NapisNumerTelefonu->BackColor = System::Drawing::Color::Transparent;
			this->NapisNumerTelefonu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisNumerTelefonu->Location = System::Drawing::Point(1, 346);
			this->NapisNumerTelefonu->Name = L"NapisNumerTelefonu";
			this->NapisNumerTelefonu->Size = System::Drawing::Size(206, 34);
			this->NapisNumerTelefonu->TabIndex = 22;
			this->NapisNumerTelefonu->Text = L"Numer telefonu:";
			this->NapisNumerTelefonu->Click += gcnew System::EventHandler(this, &DataPage::napis_numer_telefonu);
			// 
			// NapisAdres
			// 
			this->NapisAdres->AutoSize = true;
			this->NapisAdres->BackColor = System::Drawing::Color::Transparent;
			this->NapisAdres->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisAdres->Location = System::Drawing::Point(113, 393);
			this->NapisAdres->Name = L"NapisAdres";
			this->NapisAdres->Size = System::Drawing::Size(93, 34);
			this->NapisAdres->TabIndex = 23;
			this->NapisAdres->Text = L"Adres:";
			this->NapisAdres->Click += gcnew System::EventHandler(this, &DataPage::napis_adres);
			// 
			// PrzyciskPowrot
			// 
			this->PrzyciskPowrot->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskPowrot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskPowrot->Location = System::Drawing::Point(379, 507);
			this->PrzyciskPowrot->Name = L"PrzyciskPowrot";
			this->PrzyciskPowrot->Size = System::Drawing::Size(188, 55);
			this->PrzyciskPowrot->TabIndex = 33;
			this->PrzyciskPowrot->Text = L"Powrót";
			this->PrzyciskPowrot->UseVisualStyleBackColor = false;
			this->PrzyciskPowrot->Click += gcnew System::EventHandler(this, &DataPage::Powrot);
			// 
			// PoleImie
			// 
			this->PoleImie->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleImie->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PoleImie->Location = System::Drawing::Point(212, 105);
			this->PoleImie->Multiline = true;
			this->PoleImie->Name = L"PoleImie";
			this->PoleImie->Size = System::Drawing::Size(355, 39);
			this->PoleImie->TabIndex = 25;
			this->PoleImie->TextChanged += gcnew System::EventHandler(this, &DataPage::pole_imie);
			// 
			// PoleNazwisko
			// 
			this->PoleNazwisko->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleNazwisko->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PoleNazwisko->Location = System::Drawing::Point(212, 159);
			this->PoleNazwisko->Multiline = true;
			this->PoleNazwisko->Name = L"PoleNazwisko";
			this->PoleNazwisko->Size = System::Drawing::Size(355, 39);
			this->PoleNazwisko->TabIndex = 26;
			this->PoleNazwisko->TextChanged += gcnew System::EventHandler(this, &DataPage::pole_nazwisko);
			// 
			// PoleNumerTelefonu
			// 
			this->PoleNumerTelefonu->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleNumerTelefonu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PoleNumerTelefonu->Location = System::Drawing::Point(212, 341);
			this->PoleNumerTelefonu->MaxLength = 9;
			this->PoleNumerTelefonu->Multiline = true;
			this->PoleNumerTelefonu->Name = L"PoleNumerTelefonu";
			this->PoleNumerTelefonu->Size = System::Drawing::Size(355, 39);
			this->PoleNumerTelefonu->TabIndex = 30;
			this->PoleNumerTelefonu->TextChanged += gcnew System::EventHandler(this, &DataPage::pole_numer_telefonu);
			// 
			// PoleAdres
			// 
			this->PoleAdres->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleAdres->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PoleAdres->Location = System::Drawing::Point(212, 388);
			this->PoleAdres->Multiline = true;
			this->PoleAdres->Name = L"PoleAdres";
			this->PoleAdres->Size = System::Drawing::Size(355, 39);
			this->PoleAdres->TabIndex = 31;
			this->PoleAdres->TextChanged += gcnew System::EventHandler(this, &DataPage::pole_adres);
			// 
			// PrzyciskZapisz
			// 
			this->PrzyciskZapisz->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskZapisz->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskZapisz->Location = System::Drawing::Point(379, 443);
			this->PrzyciskZapisz->Name = L"PrzyciskZapisz";
			this->PrzyciskZapisz->Size = System::Drawing::Size(188, 55);
			this->PrzyciskZapisz->TabIndex = 32;
			this->PrzyciskZapisz->Text = L"Zapisz";
			this->PrzyciskZapisz->UseVisualStyleBackColor = false;
			this->PrzyciskZapisz->Click += gcnew System::EventHandler(this, &DataPage::Zapisz);
			// 
			// NapisPesel
			// 
			this->NapisPesel->AutoSize = true;
			this->NapisPesel->BackColor = System::Drawing::Color::Transparent;
			this->NapisPesel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisPesel->Location = System::Drawing::Point(109, 210);
			this->NapisPesel->Name = L"NapisPesel";
			this->NapisPesel->Size = System::Drawing::Size(98, 34);
			this->NapisPesel->TabIndex = 33;
			this->NapisPesel->Text = L"PESEL:";
			this->NapisPesel->Click += gcnew System::EventHandler(this, &DataPage::napis_pesel);
			// 
			// NapisLogin
			// 
			this->NapisLogin->BackColor = System::Drawing::Color::Transparent;
			this->NapisLogin->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisLogin->Location = System::Drawing::Point(120, 253);
			this->NapisLogin->Name = L"NapisLogin";
			this->NapisLogin->Size = System::Drawing::Size(86, 42);
			this->NapisLogin->TabIndex = 34;
			this->NapisLogin->Text = L"Login:";
			this->NapisLogin->Click += gcnew System::EventHandler(this, &DataPage::napis_login);
			// 
			// PoleHaslo
			// 
			this->PoleHaslo->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleHaslo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PoleHaslo->Location = System::Drawing::Point(212, 296);
			this->PoleHaslo->MaxLength = 15;
			this->PoleHaslo->Multiline = true;
			this->PoleHaslo->Name = L"PoleHaslo";
			this->PoleHaslo->PasswordChar = '*';
			this->PoleHaslo->Size = System::Drawing::Size(355, 39);
			this->PoleHaslo->TabIndex = 29;
			this->PoleHaslo->TextChanged += gcnew System::EventHandler(this, &DataPage::pole_haslo);
			// 
			// NapisHaslo
			// 
			this->NapisHaslo->BackColor = System::Drawing::Color::Transparent;
			this->NapisHaslo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisHaslo->Location = System::Drawing::Point(120, 296);
			this->NapisHaslo->Name = L"NapisHaslo";
			this->NapisHaslo->Size = System::Drawing::Size(86, 42);
			this->NapisHaslo->TabIndex = 36;
			this->NapisHaslo->Text = L"Has³o:";
			this->NapisHaslo->Click += gcnew System::EventHandler(this, &DataPage::napis_haslo);
			// 
			// DataPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 574);
			this->Controls->Add(this->NapisHaslo);
			this->Controls->Add(this->PoleHaslo);
			this->Controls->Add(this->NapisLogin);
			this->Controls->Add(this->NapisPesel);
			this->Controls->Add(this->PrzyciskZapisz);
			this->Controls->Add(this->PoleAdres);
			this->Controls->Add(this->PoleNumerTelefonu);
			this->Controls->Add(this->PoleNazwisko);
			this->Controls->Add(this->PoleImie);
			this->Controls->Add(this->PrzyciskPowrot);
			this->Controls->Add(this->NapisAdres);
			this->Controls->Add(this->NapisNumerTelefonu);
			this->Controls->Add(this->NapisTwojLogin);
			this->Controls->Add(this->NapisTwojPesel);
			this->Controls->Add(this->NapisNazwisko);
			this->Controls->Add(this->NapisImie);
			this->Controls->Add(this->panel3);
			this->MaximizeBox = false;
			this->Name = L"DataPage";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DentApp";
			this->Load += gcnew System::EventHandler(this, &DataPage::DataPage_Load);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:User^ user = nullptr;
	private: System::Void DataPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Powrot(System::Object^ sender, System::EventArgs^ e) {
	this->goToMainPage = true;
	this->Close();
	}
	   public: bool goToMainPage = false;
	private: System::Void Zapisz(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->PoleImie->Text;
	String^ surname = this->PoleNazwisko->Text;
	String^ password = this->PoleHaslo->Text;
	String^ phone = this->PoleNumerTelefonu->Text;
	String^ address = this->PoleAdres->Text;
	String^ pesel = this->NapisTwojPesel->Text;

	if (name->Length == 0 || surname->Length == 0 || phone->Length == 0 || address->Length == 0)
	{
		MessageBox::Show("Puste pola logowania. Wpisz poprawne dane.", "DentApp", MessageBoxButtons::OK);
		return;
	}
	if ((password->Length < 5 && password->Length != 0) || (password->Length > 15 && password->Length != 0))
	{
		MessageBox::Show("Has³o musi zawieraæ od 5 do 15 znaków.", "DentApp", MessageBoxButtons::OK);
		return;
	}
	if (phone->Length != 9 && pesel->Length != 0)
	{
		MessageBox::Show("Numer telefonu musi zawieraæ 9 znaków.", "DentApp", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
		SqlConnection sqlConnectionString(connectionString);
		sqlConnectionString.Open();

		String^ sqlQuery = "UPDATE Users " +
			"SET name=@name, surname=@surname, password=@password, phone=@phone, address=@address " +
			"WHERE pesel=@pesel";
		//String^ sqlQuery = "SELECT * FROM Users WHERE name=@name AND surname=@surname AND phone=@phone AND address=@address;";
		SqlCommand command(sqlQuery, % sqlConnectionString);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@surname", surname);
		command.Parameters->AddWithValue("@password", password);
		command.Parameters->AddWithValue("@phone", phone);
		command.Parameters->AddWithValue("@address", address);
		command.Parameters->AddWithValue("@pesel", pesel);
		command.ExecuteNonQuery();

		this->PoleImie->Text = name;
		this->PoleNazwisko->Text = surname;
		this->PoleHaslo->Text = password;
		this->PoleNumerTelefonu->Text = phone;
		this->PoleAdres->Text = address;

		this->goToMainPage = true;
		MessageBox::Show("Pomyœlnie edytowano dane konta.", "DentApp", MessageBoxButtons::OK);
		this->Close();
		//
	}
	catch (Exception^ e)
	{
		MessageBox::Show("B³¹d edycji konta. Wpisz poprawne dane.", "DentApp", MessageBoxButtons::OK);

	}
	}
	private: System::Void napis_moj_profil(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_imie(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_nazwisko(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_pesel(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_login(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_haslo(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_numer_telefonu(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_adres(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_imie(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_nazwisko(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_twoj_pesel(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_twoj_login(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_haslo(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_numer_telefonu(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_adres(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
