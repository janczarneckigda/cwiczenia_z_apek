#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Wy³¹cznik;
	private: System::Windows::Forms::Label^  etykieta_napisu;
	private: System::Windows::Forms::Button^  przycisk_etykietynapisu;
	protected:



	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::TextBox^  Boks_wyswietla;

	private: System::Windows::Forms::Button^  Wyswietla_tekstboksa;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Wy³¹cznik = (gcnew System::Windows::Forms::Button());
			this->etykieta_napisu = (gcnew System::Windows::Forms::Label());
			this->przycisk_etykietynapisu = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->Boks_wyswietla = (gcnew System::Windows::Forms::TextBox());
			this->Wyswietla_tekstboksa = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Wy³¹cznik
			// 
			this->Wy³¹cznik->Location = System::Drawing::Point(338, 279);
			this->Wy³¹cznik->Margin = System::Windows::Forms::Padding(6);
			this->Wy³¹cznik->Name = L"Wy³¹cznik";
			this->Wy³¹cznik->Size = System::Drawing::Size(138, 44);
			this->Wy³¹cznik->TabIndex = 0;
			this->Wy³¹cznik->Text = L"Close";
			this->Wy³¹cznik->UseVisualStyleBackColor = true;
			this->Wy³¹cznik->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// etykieta_napisu
			// 
			this->etykieta_napisu->AutoSize = true;
			this->etykieta_napisu->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->etykieta_napisu->Location = System::Drawing::Point(135, 107);
			this->etykieta_napisu->Name = L"etykieta_napisu";
			this->etykieta_napisu->Size = System::Drawing::Size(0, 36);
			this->etykieta_napisu->TabIndex = 1;
			// 
			// przycisk_etykietynapisu
			// 
			this->przycisk_etykietynapisu->Location = System::Drawing::Point(78, 279);
			this->przycisk_etykietynapisu->Name = L"przycisk_etykietynapisu";
			this->przycisk_etykietynapisu->Size = System::Drawing::Size(226, 34);
			this->przycisk_etykietynapisu->TabIndex = 2;
			this->przycisk_etykietynapisu->Text = L"Show something smart";
			this->przycisk_etykietynapisu->UseVisualStyleBackColor = true;
			this->przycisk_etykietynapisu->Click += gcnew System::EventHandler(this, &Form1::przycisk_etykietynapisu_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(78, 241);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(156, 25);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"www.mzkzg.org";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// Boks_wyswietla
			// 
			this->Boks_wyswietla->Location = System::Drawing::Point(256, 12);
			this->Boks_wyswietla->Name = L"Boks_wyswietla";
			this->Boks_wyswietla->Size = System::Drawing::Size(336, 33);
			this->Boks_wyswietla->TabIndex = 4;
			// 
			// Wyswietla_tekstboksa
			// 
			this->Wyswietla_tekstboksa->Location = System::Drawing::Point(511, 279);
			this->Wyswietla_tekstboksa->Name = L"Wyswietla_tekstboksa";
			this->Wyswietla_tekstboksa->Size = System::Drawing::Size(206, 34);
			this->Wyswietla_tekstboksa->TabIndex = 5;
			this->Wyswietla_tekstboksa->Text = L"Show sth on textbox";
			this->Wyswietla_tekstboksa->UseVisualStyleBackColor = true;
			this->Wyswietla_tekstboksa->Click += gcnew System::EventHandler(this, &Form1::Wyswietla_tekstboksa_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Fuchsia;
			this->ClientSize = System::Drawing::Size(804, 352);
			this->Controls->Add(this->Wyswietla_tekstboksa);
			this->Controls->Add(this->Boks_wyswietla);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->przycisk_etykietynapisu);
			this->Controls->Add(this->etykieta_napisu);
			this->Controls->Add(this->Wy³¹cznik);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
	}
	
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start(linkLabel1->Text); linkLabel1->LinkVisited = true;
}			 

private: System::Void Wyswietla_tekstboksa_Click(System::Object^  sender, System::EventArgs^  e) {
			 Boks_wyswietla->AppendText("Ju¿ wkrótce œwiat bêdzie nasz");
}
private: System::Void przycisk_etykietynapisu_Click(System::Object^  sender, System::EventArgs^  e) {
			 etykieta_napisu->Text = "Mój program jest najlepsiejszy w ca³ym kosmosie";
}
};
};

