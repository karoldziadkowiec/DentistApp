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
	public ref class CreateVisit : public System::Windows::Forms::Form
	{
	public:
		CreateVisit(User^ user)
		{
			InitializeComponent();
			
			NapisTwojPesel->Text = user->pesel;
			String^ pesel = user->pesel;
			String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
			SqlConnection^ sqlConnectionString = gcnew SqlConnection(connectionString);
			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT id,date FROM Visits WHERE pesel='0' ORDER BY date ASC;", sqlConnectionString);
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
				MessageBox::Show("B��d wczytania bazy danych.", "DentApp", MessageBoxButtons::OK);
			}
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~CreateVisit()
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
	private: System::Windows::Forms::Label^ NapisTwojPesel;
	private: System::Windows::Forms::Label^ NapisUtworzWizyteDla;
	private: System::Windows::Forms::DataGridView^ BazaWizyty;
	private: System::Windows::Forms::Label^ NapisDostepneWizyty;
	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs�ugi projektanta � nie nale�y modyfikowa�
		/// jej zawarto�ci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->NapisUtworzWizyte = (gcnew System::Windows::Forms::Label());
			this->PrzyciskPowrot = (gcnew System::Windows::Forms::Button());
			this->PrzyciskUtworz = (gcnew System::Windows::Forms::Button());
			this->NapisData = (gcnew System::Windows::Forms::Label());
			this->PoleData = (gcnew System::Windows::Forms::TextBox());
			this->NapisTwojPesel = (gcnew System::Windows::Forms::Label());
			this->NapisUtworzWizyteDla = (gcnew System::Windows::Forms::Label());
			this->BazaWizyty = (gcnew System::Windows::Forms::DataGridView());
			this->NapisDostepneWizyty = (gcnew System::Windows::Forms::Label());
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
			this->NapisUtworzWizyte->Text = L"Utw�rz wizyt�";
			this->NapisUtworzWizyte->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisUtworzWizyte->Click += gcnew System::EventHandler(this, &CreateVisit::napis_utworz_wizyte);
			// 
			// PrzyciskPowrot
			// 
			this->PrzyciskPowrot->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskPowrot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskPowrot->Location = System::Drawing::Point(360, 448);
			this->PrzyciskPowrot->Name = L"PrzyciskPowrot";
			this->PrzyciskPowrot->Size = System::Drawing::Size(225, 51);
			this->PrzyciskPowrot->TabIndex = 29;
			this->PrzyciskPowrot->Text = L"Powr�t";
			this->PrzyciskPowrot->UseVisualStyleBackColor = false;
			this->PrzyciskPowrot->Click += gcnew System::EventHandler(this, &CreateVisit::Powrot);
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
			this->PrzyciskUtworz->Text = L"Utw�rz";
			this->PrzyciskUtworz->UseVisualStyleBackColor = false;
			this->PrzyciskUtworz->Click += gcnew System::EventHandler(this, &CreateVisit::Utworz);
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
			this->NapisData->Click += gcnew System::EventHandler(this, &CreateVisit::napis_data);
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
			this->PoleData->TextChanged += gcnew System::EventHandler(this, &CreateVisit::pole_data);
			// 
			// NapisTwojPesel
			// 
			this->NapisTwojPesel->BackColor = System::Drawing::Color::Transparent;
			this->NapisTwojPesel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisTwojPesel->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->NapisTwojPesel->Location = System::Drawing::Point(360, 268);
			this->NapisTwojPesel->Name = L"NapisTwojPesel";
			this->NapisTwojPesel->Size = System::Drawing::Size(225, 55);
			this->NapisTwojPesel->TabIndex = 25;
			this->NapisTwojPesel->Text = L"label2";
			this->NapisTwojPesel->Click += gcnew System::EventHandler(this, &CreateVisit::napis_pesel);
			// 
			// NapisUtworzWizyteDla
			// 
			this->NapisUtworzWizyteDla->BackColor = System::Drawing::Color::Transparent;
			this->NapisUtworzWizyteDla->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisUtworzWizyteDla->Location = System::Drawing::Point(12, 268);
			this->NapisUtworzWizyteDla->Name = L"NapisUtworzWizyteDla";
			this->NapisUtworzWizyteDla->Size = System::Drawing::Size(342, 55);
			this->NapisUtworzWizyteDla->TabIndex = 24;
			this->NapisUtworzWizyteDla->Text = L"Utw�rz wizyt� dla u�ytkownika:";
			this->NapisUtworzWizyteDla->Click += gcnew System::EventHandler(this, &CreateVisit::napis_utworz_wizyte_dla);
			// 
			// BazaWizyty
			// 
			this->BazaWizyty->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BazaWizyty->Location = System::Drawing::Point(178, 79);
			this->BazaWizyty->Name = L"BazaWizyty";
			this->BazaWizyty->ReadOnly = true;
			this->BazaWizyty->RowHeadersWidth = 51;
			this->BazaWizyty->RowTemplate->Height = 24;
			this->BazaWizyty->Size = System::Drawing::Size(361, 169);
			this->BazaWizyty->TabIndex = 23;
			this->BazaWizyty->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CreateVisit::baza_wizyty);
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
			this->NapisDostepneWizyty->Text = L"Dost�pne wizyty";
			this->NapisDostepneWizyty->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisDostepneWizyty->Click += gcnew System::EventHandler(this, &CreateVisit::napis_dostepne_wizyty);
			// 
			// CreateVisit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 506);
			this->Controls->Add(this->NapisDostepneWizyty);
			this->Controls->Add(this->BazaWizyty);
			this->Controls->Add(this->NapisUtworzWizyteDla);
			this->Controls->Add(this->NapisTwojPesel);
			this->Controls->Add(this->PoleData);
			this->Controls->Add(this->NapisData);
			this->Controls->Add(this->PrzyciskUtworz);
			this->Controls->Add(this->PrzyciskPowrot);
			this->Controls->Add(this->panel3);
			this->MaximizeBox = false;
			this->Name = L"CreateVisit";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DentApp";
			this->Load += gcnew System::EventHandler(this, &CreateVisit::CreateVisit_Load);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaWizyty))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	public: Visit^ visit = nullptr;

	private: System::Void Utworz(System::Object^ sender, System::EventArgs^ e) {

		String^ date = this->PoleData->Text;
		String^ pesel = this->NapisTwojPesel->Text;
		if (date->Length == 0)
		{
			MessageBox::Show("B��d w rejestracji. Uzupe�nij puste pole.", "DentApp", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
			SqlConnection sqlConnectionString(connectionString);
			sqlConnectionString.Open();

			String^ sqlQuery = "UPDATE Visits " +
				"SET pesel=@pesel " +
				"WHERE date=@date";

			SqlCommand command(sqlQuery, % sqlConnectionString);
			command.Parameters->AddWithValue("@pesel", pesel);
			command.Parameters->AddWithValue("@date", date);
			command.ExecuteNonQuery();

			MessageBox::Show("Pomy�lnie zarejestrowano wizyt�.", "DentApp", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("B��d w rejestracji. Wpisz poprawne dane.", "DentApp", MessageBoxButtons::OK);
		}
	}

	private: System::Void Powrot(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void pole_data(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void napis_data(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void napis_pesel(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void baza_wizyty(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void napis_dostepne_wizyty(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void CreateVisit_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void napis_utworz_wizyte_dla(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void napis_utworz_wizyte(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
