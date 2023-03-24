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
	/// Podsumowanie informacji o RegisterPage
	/// </summary>
	public ref class RegisterPage : public System::Windows::Forms::Form
	{
	public:
		RegisterPage(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

			this->CenterToScreen();

		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~RegisterPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ PoleNazwisko;
	protected:


	private: System::Windows::Forms::TextBox^ PoleImie;
	private: System::Windows::Forms::TextBox^ PolePesel;
	private: System::Windows::Forms::TextBox^ PoleLogin;
	private: System::Windows::Forms::TextBox^ PoleHaslo;
	private: System::Windows::Forms::TextBox^ PolePotwierdzHaslo;
	private: System::Windows::Forms::TextBox^ PoleNumerTelefonu;






	private: System::Windows::Forms::Label^ NapisLogin;
	private: System::Windows::Forms::Label^ NapisHaslo;
	private: System::Windows::Forms::Label^ NapisPotwierdzHaslo;



	private: System::Windows::Forms::Label^ NapisPesel;

	private: System::Windows::Forms::Label^ NapisImie;
	private: System::Windows::Forms::Label^ NapisNazwisko;
	private: System::Windows::Forms::Label^ NapisNumerTelefonu;
	private: System::Windows::Forms::Label^ NapisAdres;
	private: System::Windows::Forms::TextBox^ PoleAdres;





	private: System::Windows::Forms::Button^ PrzyciskZarejestruj;

	private: System::Windows::Forms::Button^ PrzyciskPowrot;

	private: System::Windows::Forms::Label^ NapisRejestracja;





	protected:

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
			this->NapisRejestracja = (gcnew System::Windows::Forms::Label());
			this->PoleNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->PoleImie = (gcnew System::Windows::Forms::TextBox());
			this->PolePesel = (gcnew System::Windows::Forms::TextBox());
			this->PoleLogin = (gcnew System::Windows::Forms::TextBox());
			this->PoleHaslo = (gcnew System::Windows::Forms::TextBox());
			this->PolePotwierdzHaslo = (gcnew System::Windows::Forms::TextBox());
			this->PoleNumerTelefonu = (gcnew System::Windows::Forms::TextBox());
			this->NapisLogin = (gcnew System::Windows::Forms::Label());
			this->NapisHaslo = (gcnew System::Windows::Forms::Label());
			this->NapisPotwierdzHaslo = (gcnew System::Windows::Forms::Label());
			this->NapisPesel = (gcnew System::Windows::Forms::Label());
			this->NapisImie = (gcnew System::Windows::Forms::Label());
			this->NapisNazwisko = (gcnew System::Windows::Forms::Label());
			this->NapisNumerTelefonu = (gcnew System::Windows::Forms::Label());
			this->NapisAdres = (gcnew System::Windows::Forms::Label());
			this->PoleAdres = (gcnew System::Windows::Forms::TextBox());
			this->PrzyciskZarejestruj = (gcnew System::Windows::Forms::Button());
			this->PrzyciskPowrot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NapisRejestracja
			// 
			this->NapisRejestracja->BackColor = System::Drawing::Color::Transparent;
			this->NapisRejestracja->Cursor = System::Windows::Forms::Cursors::Default;
			this->NapisRejestracja->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisRejestracja->Location = System::Drawing::Point(12, -4);
			this->NapisRejestracja->Name = L"NapisRejestracja";
			this->NapisRejestracja->Size = System::Drawing::Size(806, 86);
			this->NapisRejestracja->TabIndex = 1;
			this->NapisRejestracja->Text = L"Rejestracja";
			this->NapisRejestracja->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisRejestracja->Click += gcnew System::EventHandler(this, &RegisterPage::napis_rejestracja);
			// 
			// PoleNazwisko
			// 
			this->PoleNazwisko->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->PoleNazwisko->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleNazwisko->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->PoleNazwisko->Location = System::Drawing::Point(220, 142);
			this->PoleNazwisko->Multiline = true;
			this->PoleNazwisko->Name = L"PoleNazwisko";
			this->PoleNazwisko->Size = System::Drawing::Size(450, 52);
			this->PoleNazwisko->TabIndex = 3;
			this->PoleNazwisko->TextChanged += gcnew System::EventHandler(this, &RegisterPage::pole_nazwisko);
			// 
			// PoleImie
			// 
			this->PoleImie->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->PoleImie->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleImie->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->PoleImie->Location = System::Drawing::Point(220, 85);
			this->PoleImie->Multiline = true;
			this->PoleImie->Name = L"PoleImie";
			this->PoleImie->Size = System::Drawing::Size(450, 51);
			this->PoleImie->TabIndex = 2;
			this->PoleImie->TextChanged += gcnew System::EventHandler(this, &RegisterPage::pole_imie);
			// 
			// PolePesel
			// 
			this->PolePesel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->PolePesel->BackColor = System::Drawing::SystemColors::Menu;
			this->PolePesel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->PolePesel->Location = System::Drawing::Point(220, 200);
			this->PolePesel->MaxLength = 11;
			this->PolePesel->Multiline = true;
			this->PolePesel->Name = L"PolePesel";
			this->PolePesel->Size = System::Drawing::Size(450, 51);
			this->PolePesel->TabIndex = 4;
			this->PolePesel->TextChanged += gcnew System::EventHandler(this, &RegisterPage::pole_pesel);
			// 
			// PoleLogin
			// 
			this->PoleLogin->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->PoleLogin->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleLogin->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->PoleLogin->Location = System::Drawing::Point(220, 257);
			this->PoleLogin->MaxLength = 12;
			this->PoleLogin->Multiline = true;
			this->PoleLogin->Name = L"PoleLogin";
			this->PoleLogin->Size = System::Drawing::Size(450, 51);
			this->PoleLogin->TabIndex = 5;
			this->PoleLogin->TextChanged += gcnew System::EventHandler(this, &RegisterPage::pole_login);
			// 
			// PoleHaslo
			// 
			this->PoleHaslo->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->PoleHaslo->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleHaslo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->PoleHaslo->Location = System::Drawing::Point(220, 314);
			this->PoleHaslo->MaxLength = 15;
			this->PoleHaslo->Multiline = true;
			this->PoleHaslo->Name = L"PoleHaslo";
			this->PoleHaslo->PasswordChar = '*';
			this->PoleHaslo->Size = System::Drawing::Size(450, 51);
			this->PoleHaslo->TabIndex = 6;
			this->PoleHaslo->TextChanged += gcnew System::EventHandler(this, &RegisterPage::pole_haslo);
			// 
			// PolePotwierdzHaslo
			// 
			this->PolePotwierdzHaslo->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->PolePotwierdzHaslo->BackColor = System::Drawing::SystemColors::Menu;
			this->PolePotwierdzHaslo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->PolePotwierdzHaslo->Location = System::Drawing::Point(220, 374);
			this->PolePotwierdzHaslo->MaxLength = 15;
			this->PolePotwierdzHaslo->Multiline = true;
			this->PolePotwierdzHaslo->Name = L"PolePotwierdzHaslo";
			this->PolePotwierdzHaslo->PasswordChar = '*';
			this->PolePotwierdzHaslo->Size = System::Drawing::Size(450, 51);
			this->PolePotwierdzHaslo->TabIndex = 7;
			this->PolePotwierdzHaslo->TextChanged += gcnew System::EventHandler(this, &RegisterPage::pole_potwierdz_haslo);
			// 
			// PoleNumerTelefonu
			// 
			this->PoleNumerTelefonu->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->PoleNumerTelefonu->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleNumerTelefonu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->PoleNumerTelefonu->Location = System::Drawing::Point(220, 431);
			this->PoleNumerTelefonu->MaxLength = 9;
			this->PoleNumerTelefonu->Multiline = true;
			this->PoleNumerTelefonu->Name = L"PoleNumerTelefonu";
			this->PoleNumerTelefonu->Size = System::Drawing::Size(450, 51);
			this->PoleNumerTelefonu->TabIndex = 8;
			this->PoleNumerTelefonu->TextChanged += gcnew System::EventHandler(this, &RegisterPage::pole_numer_telefonu);
			// 
			// NapisLogin
			// 
			this->NapisLogin->AutoSize = true;
			this->NapisLogin->BackColor = System::Drawing::Color::Transparent;
			this->NapisLogin->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisLogin->Location = System::Drawing::Point(130, 274);
			this->NapisLogin->Name = L"NapisLogin";
			this->NapisLogin->Size = System::Drawing::Size(75, 34);
			this->NapisLogin->TabIndex = 12;
			this->NapisLogin->Text = L"Login";
			this->NapisLogin->Click += gcnew System::EventHandler(this, &RegisterPage::napis_login);
			// 
			// NapisHaslo
			// 
			this->NapisHaslo->AutoSize = true;
			this->NapisHaslo->BackColor = System::Drawing::Color::Transparent;
			this->NapisHaslo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisHaslo->Location = System::Drawing::Point(127, 331);
			this->NapisHaslo->Name = L"NapisHaslo";
			this->NapisHaslo->Size = System::Drawing::Size(78, 34);
			this->NapisHaslo->TabIndex = 13;
			this->NapisHaslo->Text = L"Has³o";
			this->NapisHaslo->Click += gcnew System::EventHandler(this, &RegisterPage::napis_haslo);
			// 
			// NapisPotwierdzHaslo
			// 
			this->NapisPotwierdzHaslo->AutoSize = true;
			this->NapisPotwierdzHaslo->BackColor = System::Drawing::Color::Transparent;
			this->NapisPotwierdzHaslo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisPotwierdzHaslo->Location = System::Drawing::Point(8, 391);
			this->NapisPotwierdzHaslo->Name = L"NapisPotwierdzHaslo";
			this->NapisPotwierdzHaslo->Size = System::Drawing::Size(197, 34);
			this->NapisPotwierdzHaslo->TabIndex = 14;
			this->NapisPotwierdzHaslo->Text = L"PotwierdŸ has³o";
			this->NapisPotwierdzHaslo->Click += gcnew System::EventHandler(this, &RegisterPage::napis_potwierdz_haslo);
			// 
			// NapisPesel
			// 
			this->NapisPesel->AutoSize = true;
			this->NapisPesel->BackColor = System::Drawing::Color::Transparent;
			this->NapisPesel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisPesel->Location = System::Drawing::Point(114, 217);
			this->NapisPesel->Name = L"NapisPesel";
			this->NapisPesel->Size = System::Drawing::Size(91, 34);
			this->NapisPesel->TabIndex = 15;
			this->NapisPesel->Text = L"PESEL";
			this->NapisPesel->Click += gcnew System::EventHandler(this, &RegisterPage::napis_pesel);
			// 
			// NapisImie
			// 
			this->NapisImie->AutoSize = true;
			this->NapisImie->BackColor = System::Drawing::Color::Transparent;
			this->NapisImie->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisImie->Location = System::Drawing::Point(136, 102);
			this->NapisImie->Name = L"NapisImie";
			this->NapisImie->Size = System::Drawing::Size(69, 34);
			this->NapisImie->TabIndex = 16;
			this->NapisImie->Text = L"Imiê";
			this->NapisImie->Click += gcnew System::EventHandler(this, &RegisterPage::napis_imie);
			// 
			// NapisNazwisko
			// 
			this->NapisNazwisko->AutoSize = true;
			this->NapisNazwisko->BackColor = System::Drawing::Color::Transparent;
			this->NapisNazwisko->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisNazwisko->Location = System::Drawing::Point(80, 160);
			this->NapisNazwisko->Name = L"NapisNazwisko";
			this->NapisNazwisko->Size = System::Drawing::Size(125, 34);
			this->NapisNazwisko->TabIndex = 17;
			this->NapisNazwisko->Text = L"Nazwisko";
			this->NapisNazwisko->Click += gcnew System::EventHandler(this, &RegisterPage::napis_nazwisko);
			// 
			// NapisNumerTelefonu
			// 
			this->NapisNumerTelefonu->AutoSize = true;
			this->NapisNumerTelefonu->BackColor = System::Drawing::Color::Transparent;
			this->NapisNumerTelefonu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisNumerTelefonu->Location = System::Drawing::Point(1, 448);
			this->NapisNumerTelefonu->Name = L"NapisNumerTelefonu";
			this->NapisNumerTelefonu->Size = System::Drawing::Size(204, 34);
			this->NapisNumerTelefonu->TabIndex = 18;
			this->NapisNumerTelefonu->Text = L"Numer Telefonu";
			this->NapisNumerTelefonu->Click += gcnew System::EventHandler(this, &RegisterPage::napis_numer_telefonu);
			// 
			// NapisAdres
			// 
			this->NapisAdres->AutoSize = true;
			this->NapisAdres->BackColor = System::Drawing::Color::Transparent;
			this->NapisAdres->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->NapisAdres->Location = System::Drawing::Point(119, 502);
			this->NapisAdres->Name = L"NapisAdres";
			this->NapisAdres->Size = System::Drawing::Size(86, 34);
			this->NapisAdres->TabIndex = 19;
			this->NapisAdres->Text = L"Adres";
			this->NapisAdres->Click += gcnew System::EventHandler(this, &RegisterPage::napis_adres);
			// 
			// PoleAdres
			// 
			this->PoleAdres->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->PoleAdres->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleAdres->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->PoleAdres->Location = System::Drawing::Point(220, 488);
			this->PoleAdres->Multiline = true;
			this->PoleAdres->Name = L"PoleAdres";
			this->PoleAdres->Size = System::Drawing::Size(450, 51);
			this->PoleAdres->TabIndex = 9;
			this->PoleAdres->TextChanged += gcnew System::EventHandler(this, &RegisterPage::pole_adres);
			// 
			// PrzyciskZarejestruj
			// 
			this->PrzyciskZarejestruj->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskZarejestruj->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskZarejestruj->Location = System::Drawing::Point(445, 564);
			this->PrzyciskZarejestruj->Name = L"PrzyciskZarejestruj";
			this->PrzyciskZarejestruj->Size = System::Drawing::Size(225, 51);
			this->PrzyciskZarejestruj->TabIndex = 10;
			this->PrzyciskZarejestruj->Text = L"Zarejestruj";
			this->PrzyciskZarejestruj->UseVisualStyleBackColor = false;
			this->PrzyciskZarejestruj->Click += gcnew System::EventHandler(this, &RegisterPage::Zarejestruj);
			// 
			// PrzyciskPowrot
			// 
			this->PrzyciskPowrot->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskPowrot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskPowrot->Location = System::Drawing::Point(220, 564);
			this->PrzyciskPowrot->Name = L"PrzyciskPowrot";
			this->PrzyciskPowrot->Size = System::Drawing::Size(201, 51);
			this->PrzyciskPowrot->TabIndex = 11;
			this->PrzyciskPowrot->Text = L"Powrót";
			this->PrzyciskPowrot->UseVisualStyleBackColor = false;
			this->PrzyciskPowrot->Click += gcnew System::EventHandler(this, &RegisterPage::Powrot);
			// 
			// RegisterPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(815, 668);
			this->Controls->Add(this->PrzyciskPowrot);
			this->Controls->Add(this->PrzyciskZarejestruj);
			this->Controls->Add(this->PoleAdres);
			this->Controls->Add(this->NapisAdres);
			this->Controls->Add(this->NapisNumerTelefonu);
			this->Controls->Add(this->NapisNazwisko);
			this->Controls->Add(this->NapisImie);
			this->Controls->Add(this->NapisPesel);
			this->Controls->Add(this->NapisPotwierdzHaslo);
			this->Controls->Add(this->NapisHaslo);
			this->Controls->Add(this->NapisLogin);
			this->Controls->Add(this->PoleNumerTelefonu);
			this->Controls->Add(this->PolePotwierdzHaslo);
			this->Controls->Add(this->PoleHaslo);
			this->Controls->Add(this->PoleLogin);
			this->Controls->Add(this->PolePesel);
			this->Controls->Add(this->PoleImie);
			this->Controls->Add(this->PoleNazwisko);
			this->Controls->Add(this->NapisRejestracja);
			this->MaximizeBox = false;
			this->Name = L"RegisterPage";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DentApp";
			this->Load += gcnew System::EventHandler(this, &RegisterPage::RegisterPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Powrot(System::Object^ sender, System::EventArgs^ e) {
	this->goToLoginPage = true;
	this->Close();
	}
	public: bool goToLoginPage = false;
	public: User^ user = nullptr;
	private: System::Void Zarejestruj(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->PoleImie->Text;
	String^ surname = this->PoleNazwisko->Text;
	String^ pesel = this->PolePesel->Text;
	String^ login = this->PoleLogin->Text;
	String^ password = this->PoleHaslo->Text;
	String^ confirmPassword = this->PolePotwierdzHaslo->Text;
	String^ phone = this->PoleNumerTelefonu->Text;
	String^ address = this->PoleAdres->Text;
	if (name->Length == 0 || surname->Length == 0 || pesel->Length == 0 || login->Length == 0 || password->Length == 0 || confirmPassword->Length == 0 || phone->Length == 0 || address->Length == 0)
	{
		MessageBox::Show("Uzupe³nij puste pola.", "DentApp", MessageBoxButtons::OK);
		return;
	}
	if (pesel->Length !=11 && pesel->Length != 0)
	{
		MessageBox::Show("Numer PESEL musi zawieraæ 11 znaków.", "DentApp", MessageBoxButtons::OK);
		return;
	}
	if ((login->Length < 5 && login->Length != 0) || (login->Length > 12 && login->Length != 0))
	{
		MessageBox::Show("Login musi zawieraæ od 5 do 12 znaków.", "DentApp", MessageBoxButtons::OK);
		return;
	}
	if ((password->Length < 5 && password->Length != 0) || (password->Length > 15 && password->Length != 0))
	{
		MessageBox::Show("Has³o musi zawieraæ od 5 do 15 znaków.", "DentApp", MessageBoxButtons::OK);
		return;
	}
	if (String::Compare(password, confirmPassword) != 0)
	{
		MessageBox::Show("Podane has³a s¹ ró¿ne. Popraw dane.", "DentApp", MessageBoxButtons::OK);
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

		String^ sqlQuery = "INSERT INTO Users " +
			"(pesel, name, surname, login, password, phone, address) VALUES " +
			"(@pesel, @name, @surname, @login, @password, @phone, @address);";
		SqlCommand command(sqlQuery, % sqlConnectionString);
		command.Parameters->AddWithValue("@pesel", pesel);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@surname", surname);
		command.Parameters->AddWithValue("@login", login);
		command.Parameters->AddWithValue("@password", password);
		command.Parameters->AddWithValue("@phone", phone);
		command.Parameters->AddWithValue("@address", address);

		command.ExecuteNonQuery();
		user = gcnew User;
		user->pesel = pesel;
		user->name = name;
		user->surname = surname;
		user->login = login;
		user->password = password;
		user->phone = phone;
		user->address = address;

		this->goToLoginPage = true;
		MessageBox::Show("Pomyœlnie zarejestrowano konto.", "DentApp", MessageBoxButtons::OK);
		this->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("B³¹d rejestracji. Podany PESEL lub login posaida ju¿ konto.", "DentApp", MessageBoxButtons::OK);
	}
}
	private: System::Void RegisterPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_rejestracja(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void napis_potwierdz_haslo(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_numer_telefonu(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_adres(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_imie(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_nazwisko(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_pesel(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_login(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_haslo(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_potwierdz_haslo(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_numer_telefonu(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_adres(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
