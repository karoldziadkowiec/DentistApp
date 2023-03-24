#pragma once
#include "Products.h"

namespace DentistApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o AdminStoreAdd
	/// </summary>
	public ref class AdminStoreAdd : public System::Windows::Forms::Form
	{
	public:
		AdminStoreAdd(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
			SqlConnection^ sqlConnectionString = gcnew SqlConnection(connectionString);
			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT Id,name FROM Products ORDER BY name asc", sqlConnectionString);
			SqlDataReader^ myReader;
			try
			{
				SqlDataAdapter^ sda = gcnew  SqlDataAdapter();
				sda->SelectCommand = cmdDataBase;
				DataTable^ dbdataset = gcnew DataTable();
				sda->Fill(dbdataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbdataset;
				BazaMagazyn->DataSource = bSource;
				sda->Update(dbdataset);
			}
			catch (Exception^ e)
			{
				MessageBox::Show("B³¹d wczytania bazy danych.", "DentApp", MessageBoxButtons::OK);
			}
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~AdminStoreAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NapisBazaProduktow;
	private: System::Windows::Forms::DataGridView^ BazaMagazyn;
	protected:


	private: System::Windows::Forms::Label^ NapisNazwaProduktu;
	private: System::Windows::Forms::TextBox^ PoleNazwaProduktu;


	private: System::Windows::Forms::Button^ PrzyciskPowrotDoMenu;





	private: System::Windows::Forms::Button^ PrzyciskDodaj;
	private: System::Windows::Forms::Button^ PrzyciskUsun;


	private: System::Windows::Forms::Label^ NapisCenaProduktu;
	private: System::Windows::Forms::TextBox^ PoleCenaProduktu;


	private: System::Windows::Forms::Label^ NapisZ³;

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
			this->NapisBazaProduktow = (gcnew System::Windows::Forms::Label());
			this->BazaMagazyn = (gcnew System::Windows::Forms::DataGridView());
			this->NapisNazwaProduktu = (gcnew System::Windows::Forms::Label());
			this->PoleNazwaProduktu = (gcnew System::Windows::Forms::TextBox());
			this->PrzyciskPowrotDoMenu = (gcnew System::Windows::Forms::Button());
			this->PrzyciskDodaj = (gcnew System::Windows::Forms::Button());
			this->PrzyciskUsun = (gcnew System::Windows::Forms::Button());
			this->NapisCenaProduktu = (gcnew System::Windows::Forms::Label());
			this->PoleCenaProduktu = (gcnew System::Windows::Forms::TextBox());
			this->NapisZ³ = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaMagazyn))->BeginInit();
			this->SuspendLayout();
			// 
			// NapisBazaProduktow
			// 
			this->NapisBazaProduktow->BackColor = System::Drawing::Color::MediumVioletRed;
			this->NapisBazaProduktow->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisBazaProduktow->ForeColor = System::Drawing::Color::White;
			this->NapisBazaProduktow->Location = System::Drawing::Point(0, -3);
			this->NapisBazaProduktow->Name = L"NapisBazaProduktow";
			this->NapisBazaProduktow->Size = System::Drawing::Size(636, 73);
			this->NapisBazaProduktow->TabIndex = 3;
			this->NapisBazaProduktow->Text = L"Baza produktów w magazynie";
			this->NapisBazaProduktow->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisBazaProduktow->Click += gcnew System::EventHandler(this, &AdminStoreAdd::napis_baza_produktow);
			// 
			// BazaMagazyn
			// 
			this->BazaMagazyn->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BazaMagazyn->Location = System::Drawing::Point(159, 86);
			this->BazaMagazyn->Name = L"BazaMagazyn";
			this->BazaMagazyn->ReadOnly = true;
			this->BazaMagazyn->RowHeadersWidth = 51;
			this->BazaMagazyn->RowTemplate->Height = 24;
			this->BazaMagazyn->Size = System::Drawing::Size(338, 272);
			this->BazaMagazyn->TabIndex = 17;
			this->BazaMagazyn->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminStoreAdd::baza_magazyn);
			// 
			// NapisNazwaProduktu
			// 
			this->NapisNazwaProduktu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisNazwaProduktu->Location = System::Drawing::Point(85, 374);
			this->NapisNazwaProduktu->Name = L"NapisNazwaProduktu";
			this->NapisNazwaProduktu->Size = System::Drawing::Size(215, 51);
			this->NapisNazwaProduktu->TabIndex = 31;
			this->NapisNazwaProduktu->Text = L"Nazwa produktu:";
			this->NapisNazwaProduktu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisNazwaProduktu->Click += gcnew System::EventHandler(this, &AdminStoreAdd::napis_nazwa_produktu);
			// 
			// PoleNazwaProduktu
			// 
			this->PoleNazwaProduktu->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleNazwaProduktu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PoleNazwaProduktu->Location = System::Drawing::Point(306, 374);
			this->PoleNazwaProduktu->MaxLength = 100;
			this->PoleNazwaProduktu->Multiline = true;
			this->PoleNazwaProduktu->Name = L"PoleNazwaProduktu";
			this->PoleNazwaProduktu->Size = System::Drawing::Size(229, 51);
			this->PoleNazwaProduktu->TabIndex = 32;
			this->PoleNazwaProduktu->TextChanged += gcnew System::EventHandler(this, &AdminStoreAdd::pole_nazwa_produktu);
			// 
			// PrzyciskPowrotDoMenu
			// 
			this->PrzyciskPowrotDoMenu->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskPowrotDoMenu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskPowrotDoMenu->Location = System::Drawing::Point(361, 549);
			this->PrzyciskPowrotDoMenu->Name = L"PrzyciskPowrotDoMenu";
			this->PrzyciskPowrotDoMenu->Size = System::Drawing::Size(174, 51);
			this->PrzyciskPowrotDoMenu->TabIndex = 36;
			this->PrzyciskPowrotDoMenu->Text = L"Powrót do menu";
			this->PrzyciskPowrotDoMenu->UseVisualStyleBackColor = false;
			this->PrzyciskPowrotDoMenu->Click += gcnew System::EventHandler(this, &AdminStoreAdd::PowrotDoMenu);
			// 
			// PrzyciskDodaj
			// 
			this->PrzyciskDodaj->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskDodaj->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskDodaj->Location = System::Drawing::Point(306, 492);
			this->PrzyciskDodaj->Name = L"PrzyciskDodaj";
			this->PrzyciskDodaj->Size = System::Drawing::Size(109, 51);
			this->PrzyciskDodaj->TabIndex = 34;
			this->PrzyciskDodaj->Text = L"Dodaj";
			this->PrzyciskDodaj->UseVisualStyleBackColor = false;
			this->PrzyciskDodaj->Click += gcnew System::EventHandler(this, &AdminStoreAdd::Dodaj);
			// 
			// PrzyciskUsun
			// 
			this->PrzyciskUsun->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskUsun->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskUsun->Location = System::Drawing::Point(426, 492);
			this->PrzyciskUsun->Name = L"PrzyciskUsun";
			this->PrzyciskUsun->Size = System::Drawing::Size(109, 51);
			this->PrzyciskUsun->TabIndex = 35;
			this->PrzyciskUsun->Text = L"Usuñ";
			this->PrzyciskUsun->UseVisualStyleBackColor = false;
			this->PrzyciskUsun->Click += gcnew System::EventHandler(this, &AdminStoreAdd::Usun);
			// 
			// NapisCenaProduktu
			// 
			this->NapisCenaProduktu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisCenaProduktu->Location = System::Drawing::Point(96, 438);
			this->NapisCenaProduktu->Name = L"NapisCenaProduktu";
			this->NapisCenaProduktu->Size = System::Drawing::Size(215, 51);
			this->NapisCenaProduktu->TabIndex = 42;
			this->NapisCenaProduktu->Text = L"Cena produktu(0.00):";
			this->NapisCenaProduktu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisCenaProduktu->Click += gcnew System::EventHandler(this, &AdminStoreAdd::napis_cena_produktu);
			// 
			// PoleCenaProduktu
			// 
			this->PoleCenaProduktu->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleCenaProduktu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PoleCenaProduktu->Location = System::Drawing::Point(306, 438);
			this->PoleCenaProduktu->MaxLength = 10;
			this->PoleCenaProduktu->Multiline = true;
			this->PoleCenaProduktu->Name = L"PoleCenaProduktu";
			this->PoleCenaProduktu->Size = System::Drawing::Size(229, 51);
			this->PoleCenaProduktu->TabIndex = 33;
			this->PoleCenaProduktu->TextChanged += gcnew System::EventHandler(this, &AdminStoreAdd::pole_cena_produktu);
			// 
			// NapisZ³
			// 
			this->NapisZ³->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisZ³->Location = System::Drawing::Point(541, 438);
			this->NapisZ³->Name = L"NapisZ³";
			this->NapisZ³->Size = System::Drawing::Size(32, 51);
			this->NapisZ³->TabIndex = 43;
			this->NapisZ³->Text = L"z³.";
			this->NapisZ³->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisZ³->Click += gcnew System::EventHandler(this, &AdminStoreAdd::napis_zl);
			// 
			// AdminStoreAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 612);
			this->Controls->Add(this->NapisZ³);
			this->Controls->Add(this->PoleCenaProduktu);
			this->Controls->Add(this->NapisCenaProduktu);
			this->Controls->Add(this->PrzyciskUsun);
			this->Controls->Add(this->PrzyciskDodaj);
			this->Controls->Add(this->PrzyciskPowrotDoMenu);
			this->Controls->Add(this->PoleNazwaProduktu);
			this->Controls->Add(this->NapisNazwaProduktu);
			this->Controls->Add(this->BazaMagazyn);
			this->Controls->Add(this->NapisBazaProduktow);
			this->MaximizeBox = false;
			this->Name = L"AdminStoreAdd";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DentApp";
			this->Load += gcnew System::EventHandler(this, &AdminStoreAdd::AdminStoreAdd_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaMagazyn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PowrotDoMenu(System::Object^ sender, System::EventArgs^ e) {
		this->goToAdminMainPage = true;
		this->Close();
	}
	private: System::Void baza_magazyn(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	public: bool goToAdminMainPage = false;
	public: Products^ product = nullptr;
	private: System::Void Dodaj(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->PoleNazwaProduktu->Text;
	String^ price = this->PoleCenaProduktu->Text;
	String^ amount = "0";
	if (name->Length == 0 || price->Length == 0)
	{
		MessageBox::Show("Uzupe³nij puste pola.", "DentApp", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
		SqlConnection sqlConnectionString(connectionString);
		sqlConnectionString.Open();

		String^ sqlQuery = "INSERT INTO Products " +
			"(name, amount, price) VALUES " +
			"(@name, @amount, @price);";

		SqlCommand command(sqlQuery, % sqlConnectionString);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@amount", amount);
		command.Parameters->AddWithValue("@price", price);
		command.ExecuteNonQuery();

		this->goToAdminMainPage = true;
		MessageBox::Show("Dodano produkt do magazynu.", "DentApp", MessageBoxButtons::OK);
		this->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("B³¹d bazy magazynu.", "DentApp", MessageBoxButtons::OK);
	}
}
	private: System::Void pole_cena_produktu(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_nazwa_produktu(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Usun(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->PoleNazwaProduktu->Text;
	String^ price = this->PoleCenaProduktu->Text;
	String^ amount = "0";
	if (name->Length == 0)
	{
		MessageBox::Show("Uzupe³nij puste pola.", "DentApp", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
		SqlConnection sqlConnectionString(connectionString);
		sqlConnectionString.Open();

		String^ sqlQuery = "DELETE FROM Products WHERE name=@name";

		SqlCommand command(sqlQuery, % sqlConnectionString);
		command.Parameters->AddWithValue("@name", name);
		command.ExecuteNonQuery();

		this->goToAdminMainPage = true;
		MessageBox::Show("Usuniêto produkt z magazynu.", "DentApp", MessageBoxButtons::OK);
		this->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("B³¹d bazy magazynu.", "DentApp", MessageBoxButtons::OK);
	}
}
	private: System::Void napis_baza_produktow(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_nazwa_produktu(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_cena_produktu(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AdminStoreAdd_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_zl(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
