#pragma once
#include <msclr/marshal_cppstd.h>
#include "Caluclater.cpp"
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace msclr::interop;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ InputTextBox;
	private: System::Windows::Forms::Button^ GetValueButton;
	private: System::Windows::Forms::Button^ ClearAll;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ DivisionButton;
	private: System::Windows::Forms::Button^ MultButton;
	private: System::Windows::Forms::Button^ MinusButton;
	private: System::Windows::Forms::Button^ PlusButton;
	private: System::Windows::Forms::Button^ ButtonPercent;
	private: System::Windows::Forms::Button^ PowButton;
	private: System::Windows::Forms::Button^ Set1;
	private: System::Windows::Forms::Button^ Set2;
	private: System::Windows::Forms::Button^ Set3;
	private: System::Windows::Forms::Button^ Set6;
	private: System::Windows::Forms::Button^ Set9;
	private: System::Windows::Forms::Button^ Set5;
	private: System::Windows::Forms::Button^ Set8;
	private: System::Windows::Forms::Button^ Set4;
	private: System::Windows::Forms::Button^ Set7;
	private: System::Windows::Forms::Button^ Set0;
	private: System::Windows::Forms::Button^ SetPoint;
	private: System::Windows::Forms::Button^ ButtonLeftBracket;

	private: System::Windows::Forms::Button^ ButtonRightBracket;



	protected:
	protected:
	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->InputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->GetValueButton = (gcnew System::Windows::Forms::Button());
			this->ClearAll = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->DivisionButton = (gcnew System::Windows::Forms::Button());
			this->MultButton = (gcnew System::Windows::Forms::Button());
			this->MinusButton = (gcnew System::Windows::Forms::Button());
			this->PlusButton = (gcnew System::Windows::Forms::Button());
			this->ButtonPercent = (gcnew System::Windows::Forms::Button());
			this->PowButton = (gcnew System::Windows::Forms::Button());
			this->Set1 = (gcnew System::Windows::Forms::Button());
			this->Set2 = (gcnew System::Windows::Forms::Button());
			this->Set3 = (gcnew System::Windows::Forms::Button());
			this->Set6 = (gcnew System::Windows::Forms::Button());
			this->Set9 = (gcnew System::Windows::Forms::Button());
			this->Set5 = (gcnew System::Windows::Forms::Button());
			this->Set8 = (gcnew System::Windows::Forms::Button());
			this->Set4 = (gcnew System::Windows::Forms::Button());
			this->Set7 = (gcnew System::Windows::Forms::Button());
			this->Set0 = (gcnew System::Windows::Forms::Button());
			this->SetPoint = (gcnew System::Windows::Forms::Button());
			this->ButtonLeftBracket = (gcnew System::Windows::Forms::Button());
			this->ButtonRightBracket = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// InputTextBox
			// 
			this->InputTextBox->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->InputTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputTextBox->ForeColor = System::Drawing::Color::RosyBrown;
			this->InputTextBox->Location = System::Drawing::Point(31, 57);
			this->InputTextBox->Name = L"InputTextBox";
			this->InputTextBox->Size = System::Drawing::Size(359, 45);
			this->InputTextBox->TabIndex = 0;
			this->InputTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// GetValueButton
			// 
			this->GetValueButton->BackColor = System::Drawing::Color::Khaki;
			this->GetValueButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GetValueButton->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->GetValueButton->Location = System::Drawing::Point(178, 394);
			this->GetValueButton->Name = L"GetValueButton";
			this->GetValueButton->Size = System::Drawing::Size(67, 63);
			this->GetValueButton->TabIndex = 1;
			this->GetValueButton->Text = L"OK";
			this->GetValueButton->UseVisualStyleBackColor = false;
			this->GetValueButton->Click += gcnew System::EventHandler(this, &MyForm::GetValueButton_Click);
			// 
			// ClearAll
			// 
			this->ClearAll->BackColor = System::Drawing::Color::Khaki;
			this->ClearAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearAll->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClearAll->Location = System::Drawing::Point(250, 118);
			this->ClearAll->Name = L"ClearAll";
			this->ClearAll->Size = System::Drawing::Size(67, 63);
			this->ClearAll->TabIndex = 2;
			this->ClearAll->Text = L"AC";
			this->ClearAll->UseVisualStyleBackColor = false;
			this->ClearAll->Click += gcnew System::EventHandler(this, &MyForm::ClearAll_Click);
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::Khaki;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Clear->Location = System::Drawing::Point(323, 118);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(67, 63);
			this->Clear->TabIndex = 3;
			this->Clear->Text = L"C";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// DivisionButton
			// 
			this->DivisionButton->BackColor = System::Drawing::Color::Khaki;
			this->DivisionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DivisionButton->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->DivisionButton->Location = System::Drawing::Point(250, 187);
			this->DivisionButton->Name = L"DivisionButton";
			this->DivisionButton->Size = System::Drawing::Size(67, 63);
			this->DivisionButton->TabIndex = 4;
			this->DivisionButton->Text = L"/";
			this->DivisionButton->UseVisualStyleBackColor = false;
			this->DivisionButton->Click += gcnew System::EventHandler(this, &MyForm::DivisionButton_Click);
			// 
			// MultButton
			// 
			this->MultButton->BackColor = System::Drawing::Color::Khaki;
			this->MultButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MultButton->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->MultButton->Location = System::Drawing::Point(250, 256);
			this->MultButton->Name = L"MultButton";
			this->MultButton->Size = System::Drawing::Size(67, 63);
			this->MultButton->TabIndex = 5;
			this->MultButton->Text = L"*";
			this->MultButton->UseVisualStyleBackColor = false;
			this->MultButton->Click += gcnew System::EventHandler(this, &MyForm::MultButton_Click);
			// 
			// MinusButton
			// 
			this->MinusButton->BackColor = System::Drawing::Color::Khaki;
			this->MinusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MinusButton->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->MinusButton->Location = System::Drawing::Point(250, 325);
			this->MinusButton->Name = L"MinusButton";
			this->MinusButton->Size = System::Drawing::Size(67, 63);
			this->MinusButton->TabIndex = 6;
			this->MinusButton->Text = L"-";
			this->MinusButton->UseVisualStyleBackColor = false;
			this->MinusButton->Click += gcnew System::EventHandler(this, &MyForm::MinusButton_Click);
			// 
			// PlusButton
			// 
			this->PlusButton->BackColor = System::Drawing::Color::Khaki;
			this->PlusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PlusButton->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->PlusButton->Location = System::Drawing::Point(323, 325);
			this->PlusButton->Name = L"PlusButton";
			this->PlusButton->Size = System::Drawing::Size(67, 63);
			this->PlusButton->TabIndex = 7;
			this->PlusButton->Text = L"+";
			this->PlusButton->UseVisualStyleBackColor = false;
			this->PlusButton->Click += gcnew System::EventHandler(this, &MyForm::PlusButton_Click);
			// 
			// ButtonPercent
			// 
			this->ButtonPercent->BackColor = System::Drawing::Color::Khaki;
			this->ButtonPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonPercent->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->ButtonPercent->Location = System::Drawing::Point(323, 187);
			this->ButtonPercent->Name = L"ButtonPercent";
			this->ButtonPercent->Size = System::Drawing::Size(67, 63);
			this->ButtonPercent->TabIndex = 8;
			this->ButtonPercent->Text = L"%";
			this->ButtonPercent->UseVisualStyleBackColor = false;
			this->ButtonPercent->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// PowButton
			// 
			this->PowButton->BackColor = System::Drawing::Color::Khaki;
			this->PowButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PowButton->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->PowButton->Location = System::Drawing::Point(323, 256);
			this->PowButton->Name = L"PowButton";
			this->PowButton->Size = System::Drawing::Size(67, 63);
			this->PowButton->TabIndex = 9;
			this->PowButton->Text = L"^";
			this->PowButton->UseVisualStyleBackColor = false;
			this->PowButton->Click += gcnew System::EventHandler(this, &MyForm::PowButton_Click);
			// 
			// Set1
			// 
			this->Set1->BackColor = System::Drawing::Color::Khaki;
			this->Set1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Set1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Set1->Location = System::Drawing::Point(32, 256);
			this->Set1->Name = L"Set1";
			this->Set1->Size = System::Drawing::Size(67, 63);
			this->Set1->TabIndex = 10;
			this->Set1->Text = L"1";
			this->Set1->UseVisualStyleBackColor = false;
			this->Set1->Click += gcnew System::EventHandler(this, &MyForm::Set1_Click);
			// 
			// Set2
			// 
			this->Set2->BackColor = System::Drawing::Color::Khaki;
			this->Set2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Set2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Set2->Location = System::Drawing::Point(105, 256);
			this->Set2->Name = L"Set2";
			this->Set2->Size = System::Drawing::Size(67, 63);
			this->Set2->TabIndex = 11;
			this->Set2->Text = L"2";
			this->Set2->UseVisualStyleBackColor = false;
			this->Set2->Click += gcnew System::EventHandler(this, &MyForm::Set2_Click);
			// 
			// Set3
			// 
			this->Set3->BackColor = System::Drawing::Color::Khaki;
			this->Set3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Set3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Set3->Location = System::Drawing::Point(178, 256);
			this->Set3->Name = L"Set3";
			this->Set3->Size = System::Drawing::Size(67, 63);
			this->Set3->TabIndex = 12;
			this->Set3->Text = L"3";
			this->Set3->UseVisualStyleBackColor = false;
			this->Set3->Click += gcnew System::EventHandler(this, &MyForm::Set3_Click);
			// 
			// Set6
			// 
			this->Set6->BackColor = System::Drawing::Color::Khaki;
			this->Set6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Set6->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Set6->Location = System::Drawing::Point(178, 187);
			this->Set6->Name = L"Set6";
			this->Set6->Size = System::Drawing::Size(67, 63);
			this->Set6->TabIndex = 13;
			this->Set6->Text = L"6";
			this->Set6->UseVisualStyleBackColor = false;
			this->Set6->Click += gcnew System::EventHandler(this, &MyForm::Set6_Click);
			// 
			// Set9
			// 
			this->Set9->BackColor = System::Drawing::Color::Khaki;
			this->Set9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Set9->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Set9->Location = System::Drawing::Point(178, 118);
			this->Set9->Name = L"Set9";
			this->Set9->Size = System::Drawing::Size(67, 63);
			this->Set9->TabIndex = 14;
			this->Set9->Text = L"9";
			this->Set9->UseVisualStyleBackColor = false;
			this->Set9->Click += gcnew System::EventHandler(this, &MyForm::Set9_Click);
			// 
			// Set5
			// 
			this->Set5->BackColor = System::Drawing::Color::Khaki;
			this->Set5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Set5->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Set5->Location = System::Drawing::Point(105, 187);
			this->Set5->Name = L"Set5";
			this->Set5->Size = System::Drawing::Size(67, 63);
			this->Set5->TabIndex = 16;
			this->Set5->Text = L"5";
			this->Set5->UseVisualStyleBackColor = false;
			this->Set5->Click += gcnew System::EventHandler(this, &MyForm::Set5_Click);
			// 
			// Set8
			// 
			this->Set8->BackColor = System::Drawing::Color::Khaki;
			this->Set8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Set8->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Set8->Location = System::Drawing::Point(105, 118);
			this->Set8->Name = L"Set8";
			this->Set8->Size = System::Drawing::Size(67, 63);
			this->Set8->TabIndex = 17;
			this->Set8->Text = L"8";
			this->Set8->UseVisualStyleBackColor = false;
			this->Set8->Click += gcnew System::EventHandler(this, &MyForm::Set8_Click);
			// 
			// Set4
			// 
			this->Set4->BackColor = System::Drawing::Color::Khaki;
			this->Set4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Set4->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Set4->Location = System::Drawing::Point(32, 187);
			this->Set4->Name = L"Set4";
			this->Set4->Size = System::Drawing::Size(67, 63);
			this->Set4->TabIndex = 19;
			this->Set4->Text = L"4";
			this->Set4->UseVisualStyleBackColor = false;
			this->Set4->Click += gcnew System::EventHandler(this, &MyForm::Set4_Click);
			// 
			// Set7
			// 
			this->Set7->BackColor = System::Drawing::Color::Khaki;
			this->Set7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Set7->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Set7->Location = System::Drawing::Point(32, 118);
			this->Set7->Name = L"Set7";
			this->Set7->Size = System::Drawing::Size(67, 63);
			this->Set7->TabIndex = 20;
			this->Set7->Text = L"7";
			this->Set7->UseVisualStyleBackColor = false;
			this->Set7->Click += gcnew System::EventHandler(this, &MyForm::Set7_Click);
			// 
			// Set0
			// 
			this->Set0->BackColor = System::Drawing::Color::Khaki;
			this->Set0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Set0->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Set0->Location = System::Drawing::Point(32, 325);
			this->Set0->Name = L"Set0";
			this->Set0->Size = System::Drawing::Size(140, 63);
			this->Set0->TabIndex = 21;
			this->Set0->Text = L"0";
			this->Set0->UseVisualStyleBackColor = false;
			this->Set0->Click += gcnew System::EventHandler(this, &MyForm::Set0_Click);
			// 
			// SetPoint
			// 
			this->SetPoint->BackColor = System::Drawing::Color::Khaki;
			this->SetPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SetPoint->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->SetPoint->Location = System::Drawing::Point(178, 325);
			this->SetPoint->Name = L"SetPoint";
			this->SetPoint->Size = System::Drawing::Size(67, 63);
			this->SetPoint->TabIndex = 22;
			this->SetPoint->Text = L".";
			this->SetPoint->UseVisualStyleBackColor = false;
			this->SetPoint->Click += gcnew System::EventHandler(this, &MyForm::SetPoint_Click);
			// 
			// ButtonLeftBracket
			// 
			this->ButtonLeftBracket->BackColor = System::Drawing::Color::Khaki;
			this->ButtonLeftBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonLeftBracket->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->ButtonLeftBracket->Location = System::Drawing::Point(32, 394);
			this->ButtonLeftBracket->Name = L"ButtonLeftBracket";
			this->ButtonLeftBracket->Size = System::Drawing::Size(140, 63);
			this->ButtonLeftBracket->TabIndex = 23;
			this->ButtonLeftBracket->Text = L"(";
			this->ButtonLeftBracket->UseVisualStyleBackColor = false;
			this->ButtonLeftBracket->Click += gcnew System::EventHandler(this, &MyForm::ButtonLeftBracket_Click);
			// 
			// ButtonRightBracket
			// 
			this->ButtonRightBracket->BackColor = System::Drawing::Color::Khaki;
			this->ButtonRightBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonRightBracket->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->ButtonRightBracket->Location = System::Drawing::Point(250, 394);
			this->ButtonRightBracket->Name = L"ButtonRightBracket";
			this->ButtonRightBracket->Size = System::Drawing::Size(140, 63);
			this->ButtonRightBracket->TabIndex = 24;
			this->ButtonRightBracket->Text = L")";
			this->ButtonRightBracket->UseVisualStyleBackColor = false;
			this->ButtonRightBracket->Click += gcnew System::EventHandler(this, &MyForm::ButtonRightBracket_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(418, 567);
			this->Controls->Add(this->ButtonRightBracket);
			this->Controls->Add(this->ButtonLeftBracket);
			this->Controls->Add(this->SetPoint);
			this->Controls->Add(this->Set0);
			this->Controls->Add(this->Set7);
			this->Controls->Add(this->Set4);
			this->Controls->Add(this->Set8);
			this->Controls->Add(this->Set5);
			this->Controls->Add(this->Set9);
			this->Controls->Add(this->Set6);
			this->Controls->Add(this->Set3);
			this->Controls->Add(this->Set2);
			this->Controls->Add(this->Set1);
			this->Controls->Add(this->PowButton);
			this->Controls->Add(this->ButtonPercent);
			this->Controls->Add(this->PlusButton);
			this->Controls->Add(this->MinusButton);
			this->Controls->Add(this->MultButton);
			this->Controls->Add(this->DivisionButton);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->ClearAll);
			this->Controls->Add(this->GetValueButton);
			this->Controls->Add(this->InputTextBox);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma region Init Button
		private: System::Void GetValueButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(CalcValuer::CalculateValue(msclr::interop::
					marshal_as<string>(InputTextBox->Text)));
		}
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '%'));
		}
		private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ text = InputTextBox->Text;
			if (!String::IsNullOrEmpty(text))
			{
				text = text->Remove(text->Length - 1);
				InputTextBox->Text = text;
			}
		}
		private: System::Void ClearAll_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = "";
		}
		private: System::Void PowButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '^'));
		}
		private: System::Void Set7_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '7'));
		}
		private: System::Void Set8_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '8'));
		}
		private: System::Void Set9_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '9'));
		}
		private: System::Void Set4_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '4'));
		}
		private: System::Void Set5_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '5'));
		}
		private: System::Void Set6_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '6'));
		}
		private: System::Void Set1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '1'));
		}
		private: System::Void Set2_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '2'));
		}
		private: System::Void Set3_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '3'));
		}
		private: System::Void Set0_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '0'));
		}
		private: System::Void SetPoint_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '.'));
		}
		private: System::Void MinusButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '-'));
		}
		private: System::Void PlusButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '+'));
		}
		private: System::Void MultButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '*'));
		}
		private: System::Void DivisionButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '/'));
		}
		private: System::Void ButtonRightBracket_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), ')'));

		}
		private: System::Void ButtonLeftBracket_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			InputTextBox->Text = msclr::interop::marshal_as<String^>
				(ControllOperators::AddChar(
					msclr::interop::marshal_as<string>(InputTextBox->Text), '('));

		}
};
#pragma endregion
#pragma endregion
};