#pragma once
#include "User.h"
#include "Visit.h"

namespace DentistApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o CreateVisit
	/// </summary>
	public ref class AdminCreateVisit : public System::Windows::Forms::Form
	{
	public:
		AdminCreateVisit(User^ user)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

			String^ pesel = user->pesel;
			String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
			SqlConnection^ sqlConnectionString = gcnew SqlConnection(connectionString);
			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT id,date FROM Visits WHERE pesel='0' ORDER BY date ASC", sqlConnectionString);
			SqlDataReader^ myReader;
			try
			{
				SqlDataAdapter^ sda = gcnew  SqlDataAdapter();
				sda->SelectCommand = cmdDataBase;
				DataTable^ dbdataset = gcnew DataTable();
				sda->Fill(dbdataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbdataset;
				BazaWizyty->DataSource = bSource;
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
		~AdminCreateVisit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ NapisUtworzWizyte;
	private: System::Windows::Forms::Button^ PrzyciskPowrot;

	protected:


	private: System::Windows::Forms::Button^ PrzyciskUtworz;

	private: System::Windows::Forms::Label^ NapisData;
	private: System::Windows::Forms::TextBox^ PoleData;


	private: System::Windows::Forms::Label^ NapisPodajPesel;
	private: System::Windows::Forms::DataGridView^ BazaWizyty;




	private: System::Windows::Forms::Label^ NapisDostepneWizyty;
	private: System::Windows::Forms::TextBox^ PolePodajPesel;







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
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->NapisUtworzWizyte = (gcnew System::Windows::Forms::Label());
			this->PrzyciskPowrot = (gcnew System::Windows::Forms::Button());
			this->PrzyciskUtworz = (gcnew System::Windows::Forms::Button());
			this->NapisData = (gcnew System::Windows::Forms::Label());
			this->PoleData = (gcnew System::Windows::Forms::TextBox());
			this->NapisPodajPesel = (gcnew System::Windows::Forms::Label());
			this->BazaWizyty = (gcnew System::Windows::Forms::DataGridView());
			this->NapisDostepneWizyty = (gcnew System::Windows::Forms::Label());
			this->PolePodajPesel = (gcnew System::Windows::Forms::TextBox());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaWizyty))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MediumVioletRed;
			this->panel3->Controls->Add(this->NapisUtworzWizyte);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(608, 73);
			this->panel3->TabIndex = 2;
			// 
			// NapisUtworzWizyte
			// 
			this->NapisUtworzWizyte->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisUtworzWizyte->ForeColor = System::Drawing::Color::White;
			this->NapisUtworzWizyte->Location = System::Drawing::Point(0, 0);
			this->NapisUtworzWizyte->Name = L"NapisUtworzWizyte";
			this->NapisUtworzWizyte->Size = System::Drawing::Size(608, 73);
			this->NapisUtworzWizyte->TabIndex = 0;
			this->NapisUtworzWizyte->Text = L"Utwórz wizytê dla pacjenta";
			this->NapisUtworzWizyte->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisUtworzWizyte->Click += gcnew System::EventHandler(this, &AdminCreateVisit::napis_utworz_wizyte);
			// 
			// PrzyciskPowrot
			// 
			this->PrzyciskPowrot->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskPowrot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskPowrot->Location = System::Drawing::Point(360, 453);
			this->PrzyciskPowrot->Name = L"PrzyciskPowrot";
			this->PrzyciskPowrot->Size = System::Drawing::Size(225, 51);
			this->PrzyciskPowrot->TabIndex = 29;
			this->PrzyciskPowrot->Text = L"Powrót";
			this->PrzyciskPowrot->UseVisualStyleBackColor = false;
			this->PrzyciskPowrot->Click += gcnew System::EventHandler(this, &AdminCreateVisit::Powrot);
			// 
			// PrzyciskUtworz
			// 
			this->PrzyciskUtworz->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskUtworz->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskUtworz->Location = System::Drawing::Point(360, 391);
			this->PrzyciskUtworz->Name = L"PrzyciskUtworz";
			this->PrzyciskUtworz->Size = System::Drawing::Size(225, 51);
			this->PrzyciskUtworz->TabIndex = 28;
			this->PrzyciskUtworz->Text = L"Utwórz";
			this->PrzyciskUtworz->UseVisualStyleBackColor = false;
			this->PrzyciskUtworz->Click += gcnew System::EventHandler(this, &AdminCreateVisit::Utworz);
			// 
			// NapisData
			// 
			this->NapisData->BackColor = System::Drawing::Color::Transparent;
			this->NapisData->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisData->Location = System::Drawing::Point(12, 323);
			this->NapisData->Name = L"NapisData";
			this->NapisData->Size = System::Drawing::Size(219, 62);
			this->NapisData->TabIndex = 26;
			this->NapisData->Text = L"Data(YYYY-MM-DD HH:MM:SS)";
			this->NapisData->Click += gcnew System::EventHandler(this, &AdminCreateVisit::napis_data);
			// 
			// PoleData
			// 
			this->PoleData->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleData->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PoleData->Location = System::Drawing::Point(237, 334);
			this->PoleData->MaxLength = 19;
			this->PoleData->Multiline = true;
			this->PoleData->Name = L"PoleData";
			this->PoleData->Size = System::Drawing::Size(348, 51);
			this->PoleData->TabIndex = 27;
			this->PoleData->TextChanged += gcnew System::EventHandler(this, &AdminCreateVisit::pole_data);
			// 
			// NapisPodajPesel
			// 
			this->NapisPodajPesel->BackColor = System::Drawing::Color::Transparent;
			this->NapisPodajPesel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisPodajPesel->Location = System::Drawing::Point(12, 276);
			this->NapisPodajPesel->Name = L"NapisPodajPesel";
			this->NapisPodajPesel->Size = System::Drawing::Size(342, 55);
			this->NapisPodajPesel->TabIndex = 24;
			this->NapisPodajPesel->Text = L"Podaj PESEL pacjenta:";
			this->NapisPodajPesel->Click += gcnew System::EventHandler(this, &AdminCreateVisit::napis_podaj_pesel);
			// 
			// BazaWizyty
			// 
			this->BazaWizyty->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BazaWizyty->Location = System::Drawing::Point(178, 79);
			this->BazaWizyty->Name = L"BazaWizyty";
			this->BazaWizyty->ReadOnly = true;
			this->BazaWizyty->RowHeadersWidth = 51;
			this->BazaWizyty->RowTemplate->Height = 24;
			this->BazaWizyty->Size = System::Drawing::Size(357, 169);
			this->BazaWizyty->TabIndex = 23;
			this->BazaWizyty->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminCreateVisit::baza_wizyty);
			// 
			// NapisDostepneWizyty
			// 
			this->NapisDostepneWizyty->BackColor = System::Drawing::Color::Transparent;
			this->NapisDostepneWizyty->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisDostepneWizyty->Location = System::Drawing::Point(33, 79);
			this->NapisDostepneWizyty->Name = L"NapisDostepneWizyty";
			this->NapisDostepneWizyty->Size = System::Drawing::Size(130, 169);
			this->NapisDostepneWizyty->TabIndex = 22;
			this->NapisDostepneWizyty->Text = L"Dostêpne wizyty";
			this->NapisDostepneWizyty->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisDostepneWizyty->Click += gcnew System::EventHandler(this, &AdminCreateVisit::napis_dostepne_wizyty);
			// 
			// PolePodajPesel
			// 
			this->PolePodajPesel->BackColor = System::Drawing::SystemColors::Menu;
			this->PolePodajPesel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PolePodajPesel->Location = System::Drawing::Point(237, 264);
			this->PolePodajPesel->MaxLength = 11;
			this->PolePodajPesel->Multiline = true;
			this->PolePodajPesel->Name = L"PolePodajPesel";
			this->PolePodajPesel->Size = System::Drawing::Size(348, 51);
			this->PolePodajPesel->TabIndex = 26;
			this->PolePodajPesel->TextChanged += gcnew System::EventHandler(this, &AdminCreateVisit::pole_podaj_pesel);
			// 
			// AdminCreateVisit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 516);
			this->Controls->Add(this->PolePodajPesel);
			this->Controls->Add(this->NapisDostepneWizyty);
			this->Controls->Add(this->BazaWizyty);
			this->Controls->Add(this->NapisPodajPesel);
			this->Controls->Add(this->PoleData);
			this->Controls->Add(this->NapisData);
			this->Controls->Add(this->PrzyciskUtworz);
			this->Controls->Add(this->PrzyciskPowrot);
			this->Controls->Add(this->panel3);
			this->MaximizeBox = false;
			this->Name = L"AdminCreateVisit";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DentApp";
			this->Load += gcnew System::EventHandler(this, &AdminCreateVisit::AdminCreateVisit_Load);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaWizyty))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Visit^ visit = nullptr;

	private: System::Void Utworz(System::Object^ sender, System::EventArgs^ e) {

		String^ date = this->PoleData->Text;
		String^ pesel = this->PolePodajPesel->Text;
		if (date->Length == 0 && pesel->Length == 0)
		{
			MessageBox::Show("B³¹d w rejestracji. Uzupe³nij puste pola.", "DentApp", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
			SqlConnection sqlConnectionString(connectionString);
			sqlConnectionString.Open();

			String^ sqlQuery = "UPDATE Visits " +
				"SET pesel=@pesel " +
				"WHERE date=@date ";

			SqlCommand command(sqlQuery, % sqlConnectionString);
			command.Parameters->AddWithValue("@pesel", pesel);
			command.Parameters->AddWithValue("@date", date);
			command.ExecuteNonQuery();

			MessageBox::Show("Pomyœlnie zarejestrowano wizytê.", "DentApp", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("B³¹d w rejestracji. Wpisz poprawne dane.", "DentApp", MessageBoxButtons::OK);
		}

	}

	private: System::Void Powrot(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pole_data(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void napis_data(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void baza_wizyty(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void napis_dostepne_wizyty(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AdminCreateVisit_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_podaj_pesel(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pole_podaj_pesel(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_utworz_wizyte(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
