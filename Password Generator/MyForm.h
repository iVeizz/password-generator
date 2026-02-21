#pragma once

namespace PasswordGenerator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::CheckBox^ chkLowercase;
	private: System::Windows::Forms::CheckBox^ chkUppercase;
	private: System::Windows::Forms::CheckBox^ chkNumbers;
	private: System::Windows::Forms::CheckBox^ chkSymbols;
	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->chkLowercase = (gcnew System::Windows::Forms::CheckBox());
			this->chkUppercase = (gcnew System::Windows::Forms::CheckBox());
			this->chkNumbers = (gcnew System::Windows::Forms::CheckBox());
			this->chkSymbols = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(181, 12);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(114, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// chkLowercase
			// 
			this->chkLowercase->AutoSize = true;
			this->chkLowercase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->chkLowercase->Location = System::Drawing::Point(55, 127);
			this->chkLowercase->Name = L"chkLowercase";
			this->chkLowercase->Size = System::Drawing::Size(141, 24);
			this->chkLowercase->TabIndex = 1;
			this->chkLowercase->Text = L"Lowercase (a-z)";
			this->chkLowercase->UseVisualStyleBackColor = true;
			// 
			// chkUppercase
			// 
			this->chkUppercase->AutoSize = true;
			this->chkUppercase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->chkUppercase->Location = System::Drawing::Point(55, 148);
			this->chkUppercase->Name = L"chkUppercase";
			this->chkUppercase->Size = System::Drawing::Size(146, 24);
			this->chkUppercase->TabIndex = 2;
			this->chkUppercase->Text = L"Uppercase (A-Z)";
			this->chkUppercase->UseVisualStyleBackColor = true;
			// 
			// chkNumbers
			// 
			this->chkNumbers->AutoSize = true;
			this->chkNumbers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->chkNumbers->Location = System::Drawing::Point(55, 169);
			this->chkNumbers->Name = L"chkNumbers";
			this->chkNumbers->Size = System::Drawing::Size(129, 24);
			this->chkNumbers->TabIndex = 3;
			this->chkNumbers->Text = L"Numbers (0-9)";
			this->chkNumbers->UseVisualStyleBackColor = true;
			// 
			// chkSymbols
			// 
			this->chkSymbols->AutoSize = true;
			this->chkSymbols->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->chkSymbols->Location = System::Drawing::Point(55, 187);
			this->chkSymbols->Name = L"chkSymbols";
			this->chkSymbols->Size = System::Drawing::Size(140, 24);
			this->chkSymbols->TabIndex = 4;
			this->chkSymbols->Text = L"Symbols (!@#$)";
			this->chkSymbols->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(5, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Password Length";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(29, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Character Options";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(55, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 42);
			this->button1->TabIndex = 7;
			this->button1->Text = L"GENERATE PASSWORD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(181, 335);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 47);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Copy";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(45, 300);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(200, 29);
			this->textBox1->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(302, 396);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chkSymbols);
			this->Controls->Add(this->chkNumbers);
			this->Controls->Add(this->chkUppercase);
			this->Controls->Add(this->chkLowercase);
			this->Controls->Add(this->numericUpDown1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ lowerCase = "abcdefghijklmnopqrstuvwxyz";
	String^ upperCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	String^ numbers = "0123456789";
	String^ specialChars = "!@#$%^&*()_+-=[]{}|;:,.<>?";

	String^ charPool = "";

	if (chkLowercase->Checked) charPool += lowerCase;
	if (chkUppercase->Checked) charPool += upperCase;
	if (chkNumbers->Checked) charPool += numbers;
	if (chkSymbols->Checked) charPool += specialChars;

	if (charPool->Length == 0) {
		MessageBox::Show("Please select at least one option!");
		return; 
	}
	int passwordLength = (int)numericUpDown1->Value;
	String^ generatedPassword = "";
	Random^ randomGen = gcnew Random();

	for (int i = 0; i < passwordLength; i++) {
		
		int randomIndex = randomGen->Next(charPool->Length);

		generatedPassword += charPool[randomIndex];
	}

	textBox1->Text = generatedPassword;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text->Length > 0) {
		
		Clipboard::SetText(textBox1->Text);
		MessageBox::Show("Password copied to clipboard!");
	}
}
};
}
