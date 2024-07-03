#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			labels = gcnew List<Label^>();
			labels->Add(this->label1);
			cher = gcnew List<CheckBox^>();
			cher->Add(this->checkBox1);
			butt = gcnew List<Button^>();
			butt->Add(this->button3);
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: String^ tex1;
	private: int numlab;
	private: List<Label^>^ labels;
	private: List<CheckBox^>^ cher;
	private: List<Button^>^ butt;
	private: int lastpos = 90;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(39, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Set your note";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(225, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 21);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Create";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(308, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 20);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(25, 57);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(19, 19);
			this->button3->TabIndex = 3;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// label1
			// 
			this->label1->AutoEllipsis = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(55, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 34);
			this->label1->TabIndex = 4;
			this->label1->Text = L"New note";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(211, 59);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(79, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Successed";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChang);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(12, 20);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(21, 19);
			this->button4->TabIndex = 6;
			this->button4->Text = L"x";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::butclear);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(25, 318);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(337, 13);
			this->progressBar1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(181, 302);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"0%";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(374, 343);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"Notes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->tex1 = this->textBox1->Text;

}
	private: System::Void chbcret() {
		
		CheckBox^ chb = gcnew CheckBox();
		chb->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		chb->Size = System::Drawing::Size(84, 34);
		chb->Location = System::Drawing::Point(211, this->lastpos + 10);
		chb->Text = "Successed";
		this->Controls->Add(chb);
		this->cher->Add(chb);
		chb->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChang);

	}
	private: System::Void btncret() {
		
		Button^ bnt = gcnew Button();
		bnt->Size = System::Drawing::Size(19, 19);
		bnt->Location = System::Drawing::Point(26, this->lastpos + 10);
		bnt->Text = "-";
		bnt->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Controls->Add(bnt);
		this->butt->Add(bnt);
		bnt->Click += gcnew System::EventHandler(this, &MyForm::button_Click);

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->labels->Count < 5) {
			btncret();
			chbcret();
			
			Label^ lbl = gcnew Label();
			lbl->AutoSize = false;
			lbl->AutoEllipsis = true;
			lbl->BackColor = System::Drawing::SystemColors::Control;
			lbl->Size = System::Drawing::Size(80, 34);
			lbl->Location = System::Drawing::Point(55, this->lastpos + 10);
			lbl->Text = "New note";
			this->Controls->Add(lbl);
			this->labels->Add(lbl);
			this->lastpos = lbl->Location.Y + lbl->Height;
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = this->tex1;
		for (int i = 0; i < this->labels->Count; i++) {
			if (this->labels[i]->Text == "New note") {
				this->labels[i]->Text = this->textBox1->Text;
				break;
			}
		}
	}
	private: System::Void checkBox1_CheckedChang(System::Object^ sender, System::EventArgs^ e) {
		for (int g = 0; g < this->cher->Count; g++) {
			checker(this->cher[g], this->labels[g]);
		}
		progbar(this->progressBar1, this->cher, this->label2);
	}
	private: System::Void checker(System::Windows::Forms::CheckBox^ checkbox, System::Windows::Forms::Label^ lab) {
		if (checkbox->Checked == true) {
			lab->BackColor = Color::Green;
		}
		else { lab->BackColor = Color::White; }
	}

	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ buttin = safe_cast<Button^> (sender);
		for (int i = 0; i < this->butt->Count; i++) {
			if (this->butt[i] == buttin) {
				but(this->butt[i], this->labels[i], this->cher[i]);
				break;
			}

		}

	}
	private: System::Void but(Button^ bih, Label^ lav, CheckBox^ chec) {
		this->Controls->Remove(lav);
		this->Controls->Remove(bih);
		this->Controls->Remove(chec);
		this->labels->Remove(lav);
		this->butt->Remove(bih);
		this->cher->Remove(chec);
		this->lastpos -= 10;

	}


private: System::Void butclear(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = " ";
}

 private: System::Void progbar(ProgressBar^ prog, List<CheckBox^>^ ght, Label^ lnb) {
	 int res = ght->Count * 10;
	 int min = 0;
	 int checked= 0;
	 prog->Minimum = min;
	 prog->Maximum = res;
	 int checkedCheckBoxes = 0;
	 for (int i = 0; i < ght->Count; i++) {
		 if (ght[i]->Checked == true) {
			 prog->Increment(10);
			 checked++;
		 }
		 int newvl = checked * 10;
		 prog->Value = newvl;
		 checkedCheckBoxes = (prog->Value / ght->Count) * 10;
		 String^ labelText = System::Convert::ToString(checkedCheckBoxes);
		 lnb->Text = labelText + "%";

	 }
	
 }



};
}
