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
	/// Podsumowanie informacji o MyVisitsPage
	/// </summary>
	public ref class MyVisitsPage : public System::Windows::Forms::Form
	{
	public:
		MyVisitsPage(User^ user)
		{

			InitializeComponent();

			String^ pesel = user->pesel;
			NapisTwojPesel->Text = user->pesel;

			String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
			SqlConnection^ sqlConnectionString = gcnew SqlConnection(connectionString);
			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT Id,date FROM Visits WHERE pesel='" + pesel + "' ORDER BY date DESC", sqlConnectionString);
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
		~MyVisitsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ NapisMojeWizyty;
	private: System::Windows::Forms::DataGridView^ BazaWizyty;
	private: System::Windows::Forms::Button^ PrzyciskPowrot;
	protected:
	private: System::Windows::Forms::Label^ NapisUsunWizyte;
	private: System::Windows::Forms::Label^ NapisTwojPesel;
	private: System::Windows::Forms::Label^ NapisIdWizyty;
	private: System::Windows::Forms::TextBox^ PoleIdWizyty;
	private: System::Windows::Forms::Button^ PrzyciskOdwolajWizyte;
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
			this->NapisMojeWizyty = (gcnew System::Windows::Forms::Label());
			this->BazaWizyty = (gcnew System::Windows::Forms::DataGridView());
			this->PrzyciskPowrot = (gcnew System::Windows::Forms::Button());
			this->NapisUsunWizyte = (gcnew System::Windows::Forms::Label());
			this->NapisTwojPesel = (gcnew System::Windows::Forms::Label());
			this->NapisIdWizyty = (gcnew System::Windows::Forms::Label());
			this->PoleIdWizyty = (gcnew System::Windows::Forms::TextBox());
			this->PrzyciskOdwolajWizyte = (gcnew System::Windows::Forms::Button());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaWizyty))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MediumVioletRed;
			this->panel3->Controls->Add(this->NapisMojeWizyty);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(608, 73);
			this->panel3->TabIndex = 5;
			// 
			// NapisMojeWizyty
			// 
			this->NapisMojeWizyty->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisMojeWizyty->ForeColor = System::Drawing::Color::White;
			this->NapisMojeWizyty->Location = System::Drawing::Point(0, 0);
			this->NapisMojeWizyty->Name = L"NapisMojeWizyty";
			this->NapisMojeWizyty->Size = System::Drawing::Size(608, 73);
			this->NapisMojeWizyty->TabIndex = 0;
			this->NapisMojeWizyty->Text = L"Moje wizyty";
			this->NapisMojeWizyty->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisMojeWizyty->Click += gcnew System::EventHandler(this, &MyVisitsPage::napis_moje_wizyty);
			// 
			// BazaWizyty
			// 
			this->BazaWizyty->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BazaWizyty->Location = System::Drawing::Point(128, 79);
			this->BazaWizyty->Name = L"BazaWizyty";
			this->BazaWizyty->ReadOnly = true;
			this->BazaWizyty->RowHeadersWidth = 51;
			this->BazaWizyty->RowTemplate->Height = 24;
			this->BazaWizyty->Size = System::Drawing::Size(334, 272);
			this->BazaWizyty->TabIndex = 6;
			this->BazaWizyty->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyVisitsPage::baza_wizyty);
			// 
			// PrzyciskPowrot
			// 
			this->PrzyciskPowrot->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskPowrot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskPowrot->Location = System::Drawing::Point(368, 482);
			this->PrzyciskPowrot->Name = L"PrzyciskPowrot";
			this->PrzyciskPowrot->Size = System::Drawing::Size(177, 51);
			this->PrzyciskPowrot->TabIndex = 10;
			this->PrzyciskPowrot->Text = L"Powr�t";
			this->PrzyciskPowrot->UseVisualStyleBackColor = false;
			this->PrzyciskPowrot->Click += gcnew System::EventHandler(this, &MyVisitsPage::Powrot);
			// 
			// NapisUsunWizyte
			// 
			this->NapisUsunWizyte->BackColor = System::Drawing::Color::Transparent;
			this->NapisUsunWizyte->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisUsunWizyte->Location = System::Drawing::Point(12, 363);
			this->NapisUsunWizyte->Name = L"NapisUsunWizyte";
			this->NapisUsunWizyte->Size = System::Drawing::Size(306, 35);
			this->NapisUsunWizyte->TabIndex = 25;
			this->NapisUsunWizyte->Text = L"Usu� wizyt� dla u�ytkownika:";
			this->NapisUsunWizyte->Click += gcnew System::EventHandler(this, &MyVisitsPage::napis_usun_wizyte);
			// 
			// NapisTwojPesel
			// 
			this->NapisTwojPesel->BackColor = System::Drawing::Color::Transparent;
			this->NapisTwojPesel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisTwojPesel->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->NapisTwojPesel->Location = System::Drawing::Point(324, 363);
			this->NapisTwojPesel->Name = L"NapisTwojPesel";
			this->NapisTwojPesel->Size = System::Drawing::Size(235, 38);
			this->NapisTwojPesel->TabIndex = 7;
			this->NapisTwojPesel->Text = L"label2";
			this->NapisTwojPesel->Click += gcnew System::EventHandler(this, &MyVisitsPage::napis_twoj_pesel);
			// 
			// NapisIdWizyty
			// 
			this->NapisIdWizyty->BackColor = System::Drawing::Color::Transparent;
			this->NapisIdWizyty->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisIdWizyty->Location = System::Drawing::Point(12, 404);
			this->NapisIdWizyty->Name = L"NapisIdWizyty";
			this->NapisIdWizyty->Size = System::Drawing::Size(285, 62);
			this->NapisIdWizyty->TabIndex = 27;
			this->NapisIdWizyty->Text = L"Id wizyty do anulowania:";
			this->NapisIdWizyty->Click += gcnew System::EventHandler(this, &MyVisitsPage::napis_id_wizyty);
			// 
			// PoleIdWizyty
			// 
			this->PoleIdWizyty->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleIdWizyty->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PoleIdWizyty->Location = System::Drawing::Point(297, 404);
			this->PoleIdWizyty->Multiline = true;
			this->PoleIdWizyty->Name = L"PoleIdWizyty";
			this->PoleIdWizyty->Size = System::Drawing::Size(166, 51);
			this->PoleIdWizyty->TabIndex = 8;
			this->PoleIdWizyty->TextChanged += gcnew System::EventHandler(this, &MyVisitsPage::pole_id_wizyty);
			// 
			// PrzyciskOdwolajWizyte
			// 
			this->PrzyciskOdwolajWizyte->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskOdwolajWizyte->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskOdwolajWizyte->Location = System::Drawing::Point(469, 404);
			this->PrzyciskOdwolajWizyte->Name = L"PrzyciskOdwolajWizyte";
			this->PrzyciskOdwolajWizyte->Size = System::Drawing::Size(76, 51);
			this->PrzyciskOdwolajWizyte->TabIndex = 9;
			this->PrzyciskOdwolajWizyte->Text = L"Odwo�aj wizyt�";
			this->PrzyciskOdwolajWizyte->UseVisualStyleBackColor = false;
			this->PrzyciskOdwolajWizyte->Click += gcnew System::EventHandler(this, &MyVisitsPage::OdwolajWizyte);
			// 
			// MyVisitsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 545);
			this->Controls->Add(this->PrzyciskOdwolajWizyte);
			this->Controls->Add(this->PoleIdWizyty);
			this->Controls->Add(this->NapisIdWizyty);
			this->Controls->Add(this->NapisTwojPesel);
			this->Controls->Add(this->NapisUsunWizyte);
			this->Controls->Add(this->PrzyciskPowrot);
			this->Controls->Add(this->BazaWizyty);
			this->Controls->Add(this->panel3);
			this->MaximizeBox = false;
			this->Name = L"MyVisitsPage";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DentApp";
			this->Load += gcnew System::EventHandler(this, &MyVisitsPage::MyVisitsPage_Load);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaWizyty))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void baza_wizyty(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}

	private: System::Void Powrot(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void MyVisitsPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void OdwolajWizyte(System::Object^ sender, System::EventArgs^ e) {
		String^ Id = this->PoleIdWizyty->Text;
		String^ pesel = "0";
		if (Id->Length == 0)
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
				"SET pesel='0' " +
				"WHERE Id=@Id";

			SqlCommand command(sqlQuery, % sqlConnectionString);
			command.Parameters->AddWithValue("@pesel", pesel);
			command.Parameters->AddWithValue("@Id", Id);
			command.ExecuteNonQuery();

			MessageBox::Show("Pomy�lnie anulowano wizyt�.", "DentApp", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("B��d w rejestracji. Wpisz poprawne dane.", "DentApp", MessageBoxButtons::OK);
		}
	}

	private: System::Void napis_twoj_pesel(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void napis_moje_wizyty(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void napis_usun_wizyte(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void napis_id_wizyty(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void pole_id_wizyty(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
