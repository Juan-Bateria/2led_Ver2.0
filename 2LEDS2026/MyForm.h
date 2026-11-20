#pragma once

namespace My2LEDS2026 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int c=0, c_on=0, c_green=0;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::GroupBox^  groupBox1;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_red;
	protected:
	private: System::Windows::Forms::Button^  btn_green;
	private: System::Windows::Forms::Button^  btn_amb;
	private: System::Windows::Forms::Button^  btn_on;
	private: System::Windows::Forms::Button^  bot_off;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btn_red = (gcnew System::Windows::Forms::Button());
			this->btn_green = (gcnew System::Windows::Forms::Button());
			this->btn_amb = (gcnew System::Windows::Forms::Button());
			this->btn_on = (gcnew System::Windows::Forms::Button());
			this->bot_off = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_red
			// 
			this->btn_red->BackColor = System::Drawing::Color::Gainsboro;
			this->btn_red->Enabled = false;
			this->btn_red->Location = System::Drawing::Point(143, 168);
			this->btn_red->Name = L"btn_red";
			this->btn_red->Size = System::Drawing::Size(125, 76);
			this->btn_red->TabIndex = 0;
			this->btn_red->TabStop = false;
			this->btn_red->Text = L"RED";
			this->btn_red->UseVisualStyleBackColor = false;
			this->btn_red->Click += gcnew System::EventHandler(this, &MyForm::btn_red_Click);
			// 
			// btn_green
			// 
			this->btn_green->BackColor = System::Drawing::Color::Gainsboro;
			this->btn_green->Enabled = false;
			this->btn_green->Location = System::Drawing::Point(143, 266);
			this->btn_green->Name = L"btn_green";
			this->btn_green->Size = System::Drawing::Size(127, 63);
			this->btn_green->TabIndex = 1;
			this->btn_green->Text = L"GREEN";
			this->btn_green->UseVisualStyleBackColor = false;
			this->btn_green->Click += gcnew System::EventHandler(this, &MyForm::btn_green_Click);
			// 
			// btn_amb
			// 
			this->btn_amb->BackColor = System::Drawing::Color::Gainsboro;
			this->btn_amb->Enabled = false;
			this->btn_amb->Location = System::Drawing::Point(142, 374);
			this->btn_amb->Name = L"btn_amb";
			this->btn_amb->Size = System::Drawing::Size(125, 67);
			this->btn_amb->TabIndex = 2;
			this->btn_amb->Text = L"AMBULANCIA";
			this->btn_amb->UseVisualStyleBackColor = false;
			this->btn_amb->Click += gcnew System::EventHandler(this, &MyForm::btn_amb_Click);
			// 
			// btn_on
			// 
			this->btn_on->BackColor = System::Drawing::Color::Gainsboro;
			this->btn_on->ForeColor = System::Drawing::Color::Black;
			this->btn_on->Location = System::Drawing::Point(33, 28);
			this->btn_on->Name = L"btn_on";
			this->btn_on->Size = System::Drawing::Size(78, 54);
			this->btn_on->TabIndex = 3;
			this->btn_on->Text = L"ON";
			this->btn_on->UseVisualStyleBackColor = false;
			this->btn_on->Click += gcnew System::EventHandler(this, &MyForm::btn_on_Click);
			// 
			// bot_off
			// 
			this->bot_off->Location = System::Drawing::Point(142, 27);
			this->bot_off->Name = L"bot_off";
			this->bot_off->Size = System::Drawing::Size(75, 55);
			this->bot_off->TabIndex = 4;
			this->bot_off->Text = L"OFF";
			this->bot_off->UseVisualStyleBackColor = true;
			this->bot_off->Click += gcnew System::EventHandler(this, &MyForm::bot_off_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM3";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 27);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(48, 21);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"On";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 54);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(48, 21);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Off";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(328, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(80, 86);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"power";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 519);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->bot_off);
			this->Controls->Add(this->btn_on);
			this->Controls->Add(this->btn_amb);
			this->Controls->Add(this->btn_green);
			this->Controls->Add(this->btn_red);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_on_Click(System::Object^  sender, System::EventArgs^  e) {
		c_on++;
		if (c_on == 1)
		{
			serialPort1->Open();
			btn_red->Enabled = true;
			btn_green->Enabled = true;
			btn_amb->Enabled = true;
			btn_on->BackColor = System::Drawing::Color::Blue;
			btn_on->ForeColor = System::Drawing::Color::White;
		}

			
		
		else
		{
			serialPort1->Write("2");
			serialPort1->Write("4");
			serialPort1->Write("6");
			timer1->Enabled = false;
			serialPort1->Close();
			btn_red->BackColor = System::Drawing::Color::Gainsboro;
			btn_green->BackColor = System::Drawing::Color::Gainsboro;
			btn_amb->BackColor = System::Drawing::Color::Gainsboro;
			btn_on->BackColor = System::Drawing::Color::Gainsboro;
			btn_on->ForeColor = System::Drawing::Color::Black;
			btn_red->Enabled = false;
			btn_green->Enabled = false;
			btn_amb->Enabled = false;
			c_on = 0;
		}
		
	}
private: System::Void bot_off_Click(System::Object^  sender, System::EventArgs^  e) {
	
	
	


}
private: System::Void btn_red_Click(System::Object^  sender, System::EventArgs^  e) {
	c++;
	if(c == 1) 
	{	serialPort1->Write("1");
		btn_red->BackColor = System::Drawing::Color::Red;
	}
	else
	{
		serialPort1->Write("2");
		btn_red->BackColor = System::Drawing::Color::Gainsboro;
		c = 0;
	}
}
private: System::Void btn_green_Click(System::Object^  sender, System::EventArgs^  e) {
	c_green++;
	if (c_green == 1)
	{
		serialPort1->Write("3");
		btn_green->BackColor = System::Drawing::Color::Green;
	}
	else
	{
		serialPort1->Write("4");
		btn_green->BackColor = System::Drawing::Color::Gainsboro;
		c_green = 0;
	}
	
	
	
	
	
	

}
private: System::Void btn_amb_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = true;
	
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	serialPort1->Write("5");
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
