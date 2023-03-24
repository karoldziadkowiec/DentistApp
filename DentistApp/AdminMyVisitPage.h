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
	public ref class AdminMyVisitPage : public System::Windows::Forms::Form
	{
	public:
		AdminMyVisitPage(User^ user)
		{
			String^ pesel = user->pesel;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
			SqlConnection^ sqlConnectionString = gcnew SqlConnection(connectionString);
			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT id,date,pesel FROM Visits WHERE pesel!='0' ORDER BY date DESC", sqlConnectionString);
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
		~AdminMyVisitPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ NapisWszystkieWizyty;
	private: System::Windows::Forms::DataGridView^ BazaWizyty;
	private: System::Windows::Forms::Button^ PrzyciskPowrot;
	protected:



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
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->NapisWszystkieWizyty = (gcnew System::Windows::Forms::Label());
			this->BazaWizyty = (gcnew System::Windows::Forms::DataGridView());
			this->PrzyciskPowrot = (gcnew System::Windows::Forms::Button());
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
			this->panel3->Controls->Add(this->NapisWszystkieWizyty);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(608, 73);
			this->panel3->TabIndex = 5;
			// 
			// NapisWszystkieWizyty
			// 
			this->NapisWszystkieWizyty->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisWszystkieWizyty->ForeColor = System::Drawing::Color::White;
			this->NapisWszystkieWizyty->Location = System::Drawing::Point(0, 0);
			this->NapisWszystkieWizyty->Name = L"NapisWszystkieWizyty";
			this->NapisWszystkieWizyty->Size = System::Drawing::Size(608, 73);
			this->NapisWszystkieWizyty->TabIndex = 0;
			this->NapisWszystkieWizyty->Text = L"Wszystkie wizyty";
			this->NapisWszystkieWizyty->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisWszystkieWizyty->Click += gcnew System::EventHandler(this, &AdminMyVisitPage::napis_wszystkie_wizyty);
			// 
			// BazaWizyty
			// 
			this->BazaWizyty->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BazaWizyty->Location = System::Drawing::Point(71, 96);
			this->BazaWizyty->Name = L"BazaWizyty";
			this->BazaWizyty->ReadOnly = true;
			this->BazaWizyty->RowHeadersWidth = 51;
			this->BazaWizyty->RowTemplate->Height = 24;
			this->BazaWizyty->Size = System::Drawing::Size(472, 236);
			this->BazaWizyty->TabIndex = 6;
			this->BazaWizyty->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminMyVisitPage::baza_wizyty);
			// 
			// PrzyciskPowrot
			// 
			this->PrzyciskPowrot->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskPowrot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskPowrot->Location = System::Drawing::Point(333, 406);
			this->PrzyciskPowrot->Name = L"PrzyciskPowrot";
			this->PrzyciskPowrot->Size = System::Drawing::Size(210, 51);
			this->PrzyciskPowrot->TabIndex = 9;
			this->PrzyciskPowrot->Text = L"Powrót";
			this->PrzyciskPowrot->UseVisualStyleBackColor = false;
			this->PrzyciskPowrot->Click += gcnew System::EventHandler(this, &AdminMyVisitPage::Powrot);
			// 
			// NapisIdWizyty
			// 
			this->NapisIdWizyty->BackColor = System::Drawing::Color::Transparent;
			this->NapisIdWizyty->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisIdWizyty->Location = System::Drawing::Point(66, 346);
			this->NapisIdWizyty->Name = L"NapisIdWizyty";
			this->NapisIdWizyty->Size = System::Drawing::Size(261, 44);
			this->NapisIdWizyty->TabIndex = 28;
			this->NapisIdWizyty->Text = L"Id wizyty do anulowania:";
			this->NapisIdWizyty->Click += gcnew System::EventHandler(this, &AdminMyVisitPage::napis_id_wizyty);
			// 
			// PoleIdWizyty
			// 
			this->PoleIdWizyty->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleIdWizyty->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PoleIdWizyty->Location = System::Drawing::Point(316, 339);
			this->PoleIdWizyty->MaxLength = 10;
			this->PoleIdWizyty->Multiline = true;
			this->PoleIdWizyty->Name = L"PoleIdWizyty";
			this->PoleIdWizyty->Size = System::Drawing::Size(114, 51);
			this->PoleIdWizyty->TabIndex = 7;
			this->PoleIdWizyty->TextChanged += gcnew System::EventHandler(this, &AdminMyVisitPage::pole_id_wizyty);
			// 
			// PrzyciskOdwolajWizyte
			// 
			this->PrzyciskOdwolajWizyte->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskOdwolajWizyte->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskOdwolajWizyte->Location = System::Drawing::Point(436, 339);
			this->PrzyciskOdwolajWizyte->Name = L"PrzyciskOdwolajWizyte";
			this->PrzyciskOdwolajWizyte->Size = System::Drawing::Size(107, 51);
			this->PrzyciskOdwolajWizyte->TabIndex = 8;
			this->PrzyciskOdwolajWizyte->Text = L"Odwo³aj wizytê";
			this->PrzyciskOdwolajWizyte->UseVisualStyleBackColor = false;
			this->PrzyciskOdwolajWizyte->Click += gcnew System::EventHandler(this, &AdminMyVisitPage::OdwolajWizyte);
			// 
			// AdminMyVisitPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 478);
			this->Controls->Add(this->PrzyciskOdwolajWizyte);
			this->Controls->Add(this->PoleIdWizyty);
			this->Controls->Add(this->NapisIdWizyty);
			this->Controls->Add(this->PrzyciskPowrot);
			this->Controls->Add(this->BazaWizyty);
			this->Controls->Add(this->panel3);
			this->MaximizeBox = false;
			this->Name = L"AdminMyVisitPage";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DentApp";
			this->Load += gcnew System::EventHandler(this, &AdminMyVisitPage::AdminMyVisitsPage_Load);
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


	private: System::Void AdminMyVisitsPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void pole_id_wizyty(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void OdwolajWizyte(System::Object^ sender, System::EventArgs^ e) {
		String^ Id = this->PoleIdWizyty->Text;
		String^ pesel = "0";
		if (Id->Length == 0)
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
				"SET pesel='0' " +
				"WHERE Id=@Id";

			SqlCommand command(sqlQuery, % sqlConnectionString);
			command.Parameters->AddWithValue("@pesel", pesel);
			command.Parameters->AddWithValue("@Id", Id);
			command.ExecuteNonQuery();



			MessageBox::Show("Pomyœlnie anulowano wizytê.", "DentApp", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("B³¹d w rejestracji. Wpisz poprawne dane.", "DentApp", MessageBoxButtons::OK);
		}
	}
	private: System::Void napis_wszystkie_wizyty(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_id_wizyty(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
