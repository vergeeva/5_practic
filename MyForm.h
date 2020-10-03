#pragma once
#define max_size 20
#include "Header.h"

namespace My5практика {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
#include "Header.h"
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			One = gcnew array <Point_2D^>(max_size);
			Two = gcnew array <Point_3D^>(max_size);
			for (int i = 0; i < max_size; i++)
			{
				One[i] = gcnew Point_2D();
				Two[i] = gcnew Point_3D();
			}
		}

	protected:
		array <Point_2D^>^ One;
		array <Point_3D^>^ Two;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		template <typename type>
		void Out(type Obj, System::Windows::Forms::ListBox^ LB)
		{
			LB->Items->Clear();
			for (int i = 0; i < max_size; i++)
			{
				LB->Items->Add(Obj[i]->ToString());
			}
		}

		template <typename type>
		type^ max(array <type^>^ Obj)
		{
			type^ max = gcnew type(Obj[0]);
			for (int i = 0; i < max_size; i++)
			{
				if (Obj[i]->Length() > max->Length()) max = Obj[i];
			}
			return max;
		}
		template <typename type>
		type^ min(array <type^>^ Obj)
		{
			type^ min = gcnew type(Obj[0]);
			for (int i = 0; i < max_size; i++)
			{
				if (min->Length() > Obj[i]->Length()) min = Obj[i];
			}
			return min;
		}

		template <typename type>
		int find(array <type^>^ Obj, type ^ f)
		{
			for (int i = 0; i < max_size; i++)
			{
				if (Obj[i] == f) return i;
			}
			return -1;
		}

		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(36, 80);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(217, 404);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(279, 80);
			this->listBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(217, 404);
			this->listBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 55);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"2D points";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(340, 55);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"3D points";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->ForeColor = System::Drawing::Color::GreenYellow;
			this->textBox1->Location = System::Drawing::Point(11, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 26);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->ForeColor = System::Drawing::Color::Crimson;
			this->textBox2->Location = System::Drawing::Point(11, 129);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(174, 26);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Наибольший:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Наименьший:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(527, 80);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(224, 190);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Показать из 2D";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Location = System::Drawing::Point(527, 294);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(224, 190);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Показать из 3D";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Наименьший:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Наибольший:";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->ForeColor = System::Drawing::Color::Crimson;
			this->textBox3->Location = System::Drawing::Point(11, 129);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(174, 26);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->ForeColor = System::Drawing::Color::GreenYellow;
			this->textBox4->Location = System::Drawing::Point(11, 68);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(174, 26);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(58, 30);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(58, 66);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 12;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(174, 65);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(48, 24);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->Text = L"3D";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(174, 28);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(48, 24);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->Text = L"2D";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"x = ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 69);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"y = ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(58, 102);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 107);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"z = ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(174, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 35);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Найти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Location = System::Drawing::Point(36, 503);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(346, 150);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Поиск";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(613, 618);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 35);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(818, 666);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Массивы точек";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Out(One, listBox1);
	Out(Two, listBox2);

	Point_2D^ p = gcnew Point_2D(max(One)); //Ищем наибольшее в массиве 2Д
	Point_3D^ q = gcnew Point_3D(max(Two)); //Ищем наибольшее в массиве 3Д
	textBox1->Text = p->ToString();
	textBox4->Text = q->ToString();

	Point_2D^ m = gcnew Point_2D(min(One)); //Ищем наименьшее в массиве 2Д
	Point_3D^ n = gcnew Point_3D(min(Two)); //Ищем наименьшее в массиве 3Д
	textBox2->Text = m->ToString();
	textBox3->Text = n->ToString();

}


private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->textBox7->Enabled = true;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->textBox7->Enabled = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text != "" && textBox6->Text != "" && radioButton2->Checked == true)
	{
		Point_2D^ f = gcnew Point_2D(Convert::ToInt32(textBox5->Text), Convert::ToInt32(textBox6->Text));
		int i = find(One, f);
		if (i == -1) MessageBox::Show("Элемент не найден", "Предужпреждение");
		else listBox1->SelectedIndex = i;
	}


	if (textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "" && radioButton1->Checked == true)
	{
		Point_3D^ f = gcnew Point_3D(Convert::ToInt32(textBox5->Text), Convert::ToInt32(textBox6->Text), Convert::ToInt32(textBox7->Text));
		int i = find(Two, f);
		if (i == -1) MessageBox::Show("Элемент не найден", "Предужпреждение");
		else listBox2->SelectedIndex = i;
	}
	//else MessageBox::Show("Заполните поля и отметьте, какую точку нужно найти");
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
