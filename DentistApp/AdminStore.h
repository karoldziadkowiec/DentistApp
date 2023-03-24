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
	/// Podsumowanie informacji o AdminStore
	/// </summary>
	public ref class AdminStore : public System::Windows::Forms::Form
	{
	public:
		AdminStore(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
			SqlConnection^ sqlConnectionString = gcnew SqlConnection(connectionString);
			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT name,amount,price FROM Products ORDER BY name asc", sqlConnectionString);
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
		~AdminStore()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NapisStanMagazynu;
	private: System::Windows::Forms::Button^ PrzyciskPowrot;
	protected:


	private: System::Windows::Forms::DataGridView^ BazaMagazyn;
	private: System::Windows::Forms::Label^ NapisWybierzProdukt;
	private: System::Windows::Forms::TextBox^ PoleWybierzProdukt;



	private: System::Windows::Forms::Label^ NapisPodajIlosc;
	private: System::Windows::Forms::TextBox^ PolePodajIlosc;
	private: System::Windows::Forms::Button^ PrzyciskUsun;



	private: System::Windows::Forms::Button^ PrzyciskDodaj;
	private: System::Windows::Forms::Button^ PrzyciskEdytujBazeProduktow;


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
			this->NapisStanMagazynu = (gcnew System::Windows::Forms::Label());
			this->PrzyciskPowrot = (gcnew System::Windows::Forms::Button());
			this->BazaMagazyn = (gcnew System::Windows::Forms::DataGridView());
			this->NapisWybierzProdukt = (gcnew System::Windows::Forms::Label());
			this->PoleWybierzProdukt = (gcnew System::Windows::Forms::TextBox());
			this->NapisPodajIlosc = (gcnew System::Windows::Forms::Label());
			this->PolePodajIlosc = (gcnew System::Windows::Forms::TextBox());
			this->PrzyciskUsun = (gcnew System::Windows::Forms::Button());
			this->PrzyciskDodaj = (gcnew System::Windows::Forms::Button());
			this->PrzyciskEdytujBazeProduktow = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaMagazyn))->BeginInit();
			this->SuspendLayout();
			// 
			// NapisStanMagazynu
			// 
			this->NapisStanMagazynu->BackColor = System::Drawing::Color::MediumVioletRed;
			this->NapisStanMagazynu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisStanMagazynu->ForeColor = System::Drawing::Color::White;
			this->NapisStanMagazynu->Location = System::Drawing::Point(-1, -1);
			this->NapisStanMagazynu->Name = L"NapisStanMagazynu";
			this->NapisStanMagazynu->Size = System::Drawing::Size(636, 73);
			this->NapisStanMagazynu->TabIndex = 2;
			this->NapisStanMagazynu->Text = L"Stan magazynu";
			this->NapisStanMagazynu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisStanMagazynu->Click += gcnew System::EventHandler(this, &AdminStore::napis_stan_magazynu);
			// 
			// PrzyciskPowrot
			// 
			this->PrzyciskPowrot->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskPowrot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskPowrot->Location = System::Drawing::Point(433, 521);
			this->PrzyciskPowrot->Name = L"PrzyciskPowrot";
			this->PrzyciskPowrot->Size = System::Drawing::Size(174, 51);
			this->PrzyciskPowrot->TabIndex = 36;
			this->PrzyciskPowrot->Text = L"Powrót";
			this->PrzyciskPowrot->UseVisualStyleBackColor = false;
			this->PrzyciskPowrot->Click += gcnew System::EventHandler(this, &AdminStore::Powrot);
			// 
			// BazaMagazyn
			// 
			this->BazaMagazyn->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BazaMagazyn->Location = System::Drawing::Point(86, 90);
			this->BazaMagazyn->Name = L"BazaMagazyn";
			this->BazaMagazyn->ReadOnly = true;
			this->BazaMagazyn->RowHeadersWidth = 51;
			this->BazaMagazyn->RowTemplate->Height = 24;
			this->BazaMagazyn->Size = System::Drawing::Size(467, 272);
			this->BazaMagazyn->TabIndex = 16;
			this->BazaMagazyn->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminStore::baza_magazyn);
			// 
			// NapisWybierzProdukt
			// 
			this->NapisWybierzProdukt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisWybierzProdukt->Location = System::Drawing::Point(52, 380);
			this->NapisWybierzProdukt->Name = L"NapisWybierzProdukt";
			this->NapisWybierzProdukt->Size = System::Drawing::Size(215, 51);
			this->NapisWybierzProdukt->TabIndex = 30;
			this->NapisWybierzProdukt->Text = L"Wybierz produkt:";
			this->NapisWybierzProdukt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisWybierzProdukt->Click += gcnew System::EventHandler(this, &AdminStore::napis_wybierz_produkt);
			// 
			// PoleWybierzProdukt
			// 
			this->PoleWybierzProdukt->BackColor = System::Drawing::SystemColors::Menu;
			this->PoleWybierzProdukt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PoleWybierzProdukt->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->PoleWybierzProdukt->Location = System::Drawing::Point(260, 380);
			this->PoleWybierzProdukt->MaxLength = 100;
			this->PoleWybierzProdukt->Multiline = true;
			this->PoleWybierzProdukt->Name = L"PoleWybierzProdukt";
			this->PoleWybierzProdukt->Size = System::Drawing::Size(229, 51);
			this->PoleWybierzProdukt->TabIndex = 31;
			this->PoleWybierzProdukt->TextChanged += gcnew System::EventHandler(this, &AdminStore::pole_wybierz_produkt);
			// 
			// NapisPodajIlosc
			// 
			this->NapisPodajIlosc->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NapisPodajIlosc->Location = System::Drawing::Point(82, 448);
			this->NapisPodajIlosc->Name = L"NapisPodajIlosc";
			this->NapisPodajIlosc->Size = System::Drawing::Size(202, 51);
			this->NapisPodajIlosc->TabIndex = 32;
			this->NapisPodajIlosc->Text = L"Podaj iloœæ:";
			this->NapisPodajIlosc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NapisPodajIlosc->Click += gcnew System::EventHandler(this, &AdminStore::napis_podaj_ilosc);
			// 
			// PolePodajIlosc
			// 
			this->PolePodajIlosc->BackColor = System::Drawing::SystemColors::Menu;
			this->PolePodajIlosc->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->PolePodajIlosc->Location = System::Drawing::Point(260, 448);
			this->PolePodajIlosc->MaxLength = 3;
			this->PolePodajIlosc->Multiline = true;
			this->PolePodajIlosc->Name = L"PolePodajIlosc";
			this->PolePodajIlosc->Size = System::Drawing::Size(229, 51);
			this->PolePodajIlosc->TabIndex = 33;
			this->PolePodajIlosc->TextChanged += gcnew System::EventHandler(this, &AdminStore::pole_podaj_ilosc);
			// 
			// PrzyciskUsun
			// 
			this->PrzyciskUsun->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskUsun->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskUsun->Location = System::Drawing::Point(495, 471);
			this->PrzyciskUsun->Name = L"PrzyciskUsun";
			this->PrzyciskUsun->Size = System::Drawing::Size(112, 28);
			this->PrzyciskUsun->TabIndex = 35;
			this->PrzyciskUsun->Text = L"Usuñ";
			this->PrzyciskUsun->UseVisualStyleBackColor = false;
			this->PrzyciskUsun->Click += gcnew System::EventHandler(this, &AdminStore::Usun);
			// 
			// PrzyciskDodaj
			// 
			this->PrzyciskDodaj->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskDodaj->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrzyciskDodaj->Location = System::Drawing::Point(495, 445);
			this->PrzyciskDodaj->Name = L"PrzyciskDodaj";
			this->PrzyciskDodaj->Size = System::Drawing::Size(112, 29);
			this->PrzyciskDodaj->TabIndex = 34;
			this->PrzyciskDodaj->Text = L"Dodaj";
			this->PrzyciskDodaj->UseVisualStyleBackColor = false;
			this->PrzyciskDodaj->Click += gcnew System::EventHandler(this, &AdminStore::Dodaj);
			// 
			// PrzyciskEdytujBazeProduktow
			// 
			this->PrzyciskEdytujBazeProduktow->BackColor = System::Drawing::SystemColors::Menu;
			this->PrzyciskEdytujBazeProduktow->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->PrzyciskEdytujBazeProduktow->Location = System::Drawing::Point(86, 521);
			this->PrzyciskEdytujBazeProduktow->Name = L"PrzyciskEdytujBazeProduktow";
			this->PrzyciskEdytujBazeProduktow->Size = System::Drawing::Size(257, 51);
			this->PrzyciskEdytujBazeProduktow->TabIndex = 37;
			this->PrzyciskEdytujBazeProduktow->Text = L"Edytuj bazê produktów";
			this->PrzyciskEdytujBazeProduktow->UseVisualStyleBackColor = false;
			this->PrzyciskEdytujBazeProduktow->Click += gcnew System::EventHandler(this, &AdminStore::EdytujBazeProduktow);
			// 
			// AdminStore
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 595);
			this->Controls->Add(this->PrzyciskEdytujBazeProduktow);
			this->Controls->Add(this->PrzyciskDodaj);
			this->Controls->Add(this->PrzyciskUsun);
			this->Controls->Add(this->PolePodajIlosc);
			this->Controls->Add(this->NapisPodajIlosc);
			this->Controls->Add(this->PoleWybierzProdukt);
			this->Controls->Add(this->NapisWybierzProdukt);
			this->Controls->Add(this->BazaMagazyn);
			this->Controls->Add(this->PrzyciskPowrot);
			this->Controls->Add(this->NapisStanMagazynu);
			this->MaximizeBox = false;
			this->Name = L"AdminStore";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DentApp";
			this->Load += gcnew System::EventHandler(this, &AdminStore::AdminStore_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BazaMagazyn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Powrot(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void napis_wybierz_produkt(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AdminStore_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void baza_magazyn(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void pole_wybierz_produkt(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Dodaj(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->PoleWybierzProdukt->Text;
	String^ amount = this->PolePodajIlosc->Text;
	if (name->Length == 0 && amount->Length == 0)
	{
		MessageBox::Show("Wpisz poprawnie parametry.", "DentApp", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
		SqlConnection sqlConnectionString(connectionString);
		sqlConnectionString.Open();

		String^ sqlQuery = "UPDATE Products " +
			"SET amount=amount+'"+amount+"' "+
			"WHERE name=@name ";

		SqlCommand command(sqlQuery, % sqlConnectionString);
		command.Parameters->AddWithValue("@amount", amount);
		command.Parameters->AddWithValue("@name", name);
		command.ExecuteNonQuery();

		MessageBox::Show("Zwiêkszono iloœæ produktu w magazynie.", "DentApp", MessageBoxButtons::OK);
		this->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("B³¹d bazy magazynu.", "DentApp", MessageBoxButtons::OK);
	}
	}
	private: System::Void Usun(System::Object^ sender, System::EventArgs^ e) {
		String^ name = this->PoleWybierzProdukt->Text;
		String^ amount = this->PolePodajIlosc->Text;
	if (name->Length == 0 && amount->Length == 0)
	{
		MessageBox::Show("Wpisz poprawnie parametry", "DentApp", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connectionString = "Data Source=.;Initial Catalog=Dentist;Integrated Security=True";
		SqlConnection sqlConnectionString(connectionString);
		sqlConnectionString.Open();

		String^ sqlQuery = "UPDATE Products " +
			"SET amount=amount-'" + amount + "' " +
			"WHERE name=@name ";

		SqlCommand command(sqlQuery, % sqlConnectionString);
		command.Parameters->AddWithValue("@amount", amount);
		command.Parameters->AddWithValue("@name", name);
		command.ExecuteNonQuery();

		MessageBox::Show("Zmniejszono iloœæ produktu w magazynie.", "DentApp", MessageBoxButtons::OK);
		this->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("B³¹d bazy magazynu.", "DentApp", MessageBoxButtons::OK);
	}
}
	public: bool goToAdminStoreAdd = false;
	private: System::Void EdytujBazeProduktow(System::Object^ sender, System::EventArgs^ e) {
	this->goToAdminStoreAdd=true;
	this->Close();
	}
	private: System::Void pole_podaj_ilosc(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_stan_magazynu(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void napis_podaj_ilosc(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
