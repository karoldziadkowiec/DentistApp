#pragma once
namespace DentistApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o AdminPatients
	/// </summary>
	public ref class AdminPatients : public System::Windows::Forms::Form
	{
	public:
		AdminPatients(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
			SqlConnection^ sqlConnectionString = gcnew SqlConnection(connectionString);
			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT Id,pesel,name,surname,login,phone,address FROM Users WHERE login!='admin' ORDER BY id asc", sqlConnectionString);
			SqlDataReader^ myReader;
			try
			{
				SqlDataAdapter^ sda = gcnew  SqlDataAdapter();
				sda->SelectCommand = cmdDataBase;
				DataTable^ dbdataset = gcnew DataTable();
				sda->Fill(dbdataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbdataset;
				BazaPacjenci->DataSource = bSource;
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
		~AdminPatients()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NapisBazaPacjentow;
	private: System::Windows::Forms::DataGridView^ BazaPacjenci;
	private: System::Windows::Forms::Button^ PrzyciskPowrot;
	protected:



	private: System::Windows::Forms::Button^ PrzyciskSzukaj;
	private: System::Windows::Forms::TextBox^ PoleWpiszPesel;


	private: System::Windows::Forms::Label^ NapisWpiszPesel;
	private: System::Windows::Forms::DataGridView^ BazaWizyty;


	private: System::Windows::Forms::Label^ NapisWszystkieWizyty;


	protected:

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
			this->NapisBazaPacjentow = (gcnew System::Windows::Forms::Label());
			this->BazaPacjenci = (gcnew System::Windows::Forms::DataGridView());
			this->PrzyciskPowrot = (gcnew System::Windows::Forms::Button());
			this->PrzyciskSzukaj = (gcnew System::Windows::Forms::Button());
			this->PoleWpiszPesel = (gcnew System::Windows::Forms::TextBox());
			this->NapisWpiszPesel = (gcnew System::Windows::Forms::Label());
			this->BazaWizyty = (gcnew System::Windows::Forms::DataGridView());
			this->NapisWszystkieWizyty = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaPacjenci))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaWizyty))->BeginInit();
			this->SuspendLayout();
			// 
			// NapisBazaPacjentow
			// 
			this->NapisBazaPacjentow->BackColor = System::Drawing::Color::MediumVioletRed;
			this->NapisBazaPacjentow->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisBazaPacjentow->ForeColor = System::Drawing::Color::White;
			this->NapisBazaPacjentow->Location = System::Drawing::Point(0, 0);
			this->NapisBazaPacjentow->Name = L"NapisBazaPacjentow";
			this->NapisBazaPacjentow->Size = System::Drawing::Size(1077, 73);
			this->NapisBazaPacjentow->TabIndex = 1;
			this->NapisBazaPacjentow->Text = L"Baza pacjentów";
			this->NapisBazaPacjentow->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisBazaPacjentow->Click += gcnew System::EventHandler(this, &AdminPatients::napis_baza_pacjentow);
			// 
			// BazaPacjenci
			// 
			this->BazaPacjenci->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BazaPacjenci->Location = System::Drawing::Point(24, 92);
			this->BazaPacjenci->Name = L"BazaPacjenci";
			this->BazaPacjenci->ReadOnly = true;
			this->BazaPacjenci->RowHeadersWidth = 51;
			this->BazaPacjenci->RowTemplate->Height = 24;
			this->BazaPacjenci->Size = System::Drawing::Size(1030, 182);
			this->BazaPacjenci->TabIndex = 7;
			this->BazaPacjenci->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminPatients::baza_pacjenci);
			// 
			// PrzyciskPowrot
			// 
			this->PrzyciskPowrot->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskPowrot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskPowrot->Location = System::Drawing::Point(747, 528);
			this->PrzyciskPowrot->Name = L"PrzyciskPowrot";
			this->PrzyciskPowrot->Size = System::Drawing::Size(188, 51);
			this->PrzyciskPowrot->TabIndex = 11;
			this->PrzyciskPowrot->Text = L"Powrót";
			this->PrzyciskPowrot->UseVisualStyleBackColor = false;
			this->PrzyciskPowrot->Click += gcnew System::EventHandler(this, &AdminPatients::Powrot);
			// 
			// PrzyciskSzukaj
			// 
			this->PrzyciskSzukaj->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskSzukaj->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskSzukaj->Location = System::Drawing::Point(747, 292);
			this->PrzyciskSzukaj->Name = L"PrzyciskSzukaj";
			this->PrzyciskSzukaj->Size = System::Drawing::Size(188, 51);
			this->PrzyciskSzukaj->TabIndex = 9;
			this->PrzyciskSzukaj->Text = L"Szukaj";
			this->PrzyciskSzukaj->UseVisualStyleBackColor = false;
			this->PrzyciskSzukaj->Click += gcnew System::EventHandler(this, &AdminPatients::Szukaj);
			// 
			// PoleWpiszPesel
			// 
			this->PoleWpiszPesel->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleWpiszPesel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PoleWpiszPesel->Location = System::Drawing::Point(380, 292);
			this->PoleWpiszPesel->MaxLength = 11;
			this->PoleWpiszPesel->Multiline = true;
			this->PoleWpiszPesel->Name = L"PoleWpiszPesel";
			this->PoleWpiszPesel->Size = System::Drawing::Size(335, 51);
			this->PoleWpiszPesel->TabIndex = 8;
			this->PoleWpiszPesel->TextChanged += gcnew System::EventHandler(this, &AdminPatients::pole_wpisz_pesel);
			// 
			// NapisWpiszPesel
			// 
			this->NapisWpiszPesel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisWpiszPesel->Location = System::Drawing::Point(142, 292);
			this->NapisWpiszPesel->Name = L"NapisWpiszPesel";
			this->NapisWpiszPesel->Size = System::Drawing::Size(232, 51);
			this->NapisWpiszPesel->TabIndex = 29;
			this->NapisWpiszPesel->Text = L"Wpisz PESEL pacjenta:";
			this->NapisWpiszPesel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisWpiszPesel->Click += gcnew System::EventHandler(this, &AdminPatients::napis_wpisz_pesel);
			// 
			// BazaWizyty
			// 
			this->BazaWizyty->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BazaWizyty->Location = System::Drawing::Point(380, 366);
			this->BazaWizyty->Name = L"BazaWizyty";
			this->BazaWizyty->ReadOnly = true;
			this->BazaWizyty->RowHeadersWidth = 51;
			this->BazaWizyty->RowTemplate->Height = 24;
			this->BazaWizyty->Size = System::Drawing::Size(335, 156);
			this->BazaWizyty->TabIndex = 10;
			this->BazaWizyty->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminPatients::baza_wizyty_pacjenta);
			// 
			// NapisWszystkieWizyty
			// 
			this->NapisWszystkieWizyty->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisWszystkieWizyty->Location = System::Drawing::Point(119, 366);
			this->NapisWszystkieWizyty->Name = L"NapisWszystkieWizyty";
			this->NapisWszystkieWizyty->Size = System::Drawing::Size(255, 51);
			this->NapisWszystkieWizyty->TabIndex = 30;
			this->NapisWszystkieWizyty->Text = L"Wszystkie wizyty pacjenta:";
			this->NapisWszystkieWizyty->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisWszystkieWizyty->Click += gcnew System::EventHandler(this, &AdminPatients::napis_wszystkie_wizyty);
			// 
			// AdminPatients
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1077, 591);
			this->Controls->Add(this->NapisWszystkieWizyty);
			this->Controls->Add(this->BazaWizyty);
			this->Controls->Add(this->NapisWpiszPesel);
			this->Controls->Add(this->PoleWpiszPesel);
			this->Controls->Add(this->PrzyciskSzukaj);
			this->Controls->Add(this->PrzyciskPowrot);
			this->Controls->Add(this->BazaPacjenci);
			this->Controls->Add(this->NapisBazaPacjentow);
			this->MaximizeBox = false;
			this->Name = L"AdminPatients";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DentApp";
			this->Load += gcnew System::EventHandler(this, &AdminPatients::AdminPatients_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaPacjenci))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaWizyty))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: bool goToAdminPatientInfo = false;
	private: System::Void napis_baza_pacjentow(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AdminPatients_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Powrot(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void baza_pacjenci(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

private: System::Void Szukaj(System::Object^ sender, System::EventArgs^ e) {
	String^ pesel = this->PoleWpiszPesel->Text;
	if (pesel->Length == 0)
	{
		MessageBox::Show("Failed connection", "There cannot be any empty field", MessageBoxButtons::OK);
		return;
	}
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

		//this->label3->Text = pesel;
	}
	catch (Exception^ e)
	{
		MessageBox::Show("B³¹d wczytania bazy danych.", "DentApp", MessageBoxButtons::OK);
	}

	//goToAdminPatientInfo = true;
	//this->Close();
}
private: System::Void pole_wpisz_pesel (System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void napis_wpisz_pesel(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void napis_wszystkie_wizyty(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void baza_wizyty_pacjenta(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
