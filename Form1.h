#pragma once
#include "Form_Principal.h"

namespace ProjetoCLR {

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

	protected:
































































































public: System::Windows::Forms::Timer^ timer1;


public:
private:


private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 5000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(780, 638);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

			}
#pragma endregion

	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
		MessageBox::Show("Version: 1.0.01\n25/09/2020");
		}
private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
private: System::Void toolStripMenuItem55_Click(System::Object^ sender, System::EventArgs^ e)
	{
	this->BackColor = Color::Red;
	}
private: System::Void toolStripMenuItem57_Click(System::Object^ sender, System::EventArgs^ e)
	{
	
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
	//Application::Exit();
	//this->Close();

	//this->Hide();
	ProjetoCLR::Form_Principal formS;
	formS.Show();
	timer1->Stop();
	//formS.ShowDialog();

	//this->Close();
	//Form1::Close();
	//timer1->Stop();
	
	//this->Show();
	}
private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
			{
		
			}
	}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e)
	{
	//if (timer1->Interval >= 4995)
	//	{
	//	this->Hide();
	//	ProjetoCLR::Form_Principal formS;
	//	formS.Show();
	//	//this->Close();

	//	timer1->Stop();
	//
	//	
	//	}
	
	}
};
}
