#pragma once
#include "About.h"
#include "Credits.h"
#include <http.h>


namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Principal
	/// </summary>
	public ref class Form_Principal : public System::Windows::Forms::Form
	{
	public:
		Form_Principal(void)
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
		~Form_Principal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backgroundToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem55;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem56;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem57;
	private: System::Windows::Forms::ToolStripMenuItem^ projectsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hTMLToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ classToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem42;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem43;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem44;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem45;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem46;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem47;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem48;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem49;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem50;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem51;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem52;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem53;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem54;
	private: System::Windows::Forms::ToolStripMenuItem^ documentsToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ tipsToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ fianalProjectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cSSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ classToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem29;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem30;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem31;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem32;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem33;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem34;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem35;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem36;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem37;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem38;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem39;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem40;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem41;
	private: System::Windows::Forms::ToolStripMenuItem^ documentsToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ tipsToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ finalProjectToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ cToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ classToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem15;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem16;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem17;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem18;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem19;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem20;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem21;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem22;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem23;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem24;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem25;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem26;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem27;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem28;
	private: System::Windows::Forms::ToolStripMenuItem^ documentsToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ tipsToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ finalExamToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ classToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem10;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem11;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem12;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem13;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem14;
	private: System::Windows::Forms::ToolStripMenuItem^ documentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tipsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ finalProjectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ projectsToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ hTMLAndCSSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cSharpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ creditsToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ minimizeToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ geralToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ fSIToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ classToolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem58;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem59;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem60;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem61;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem62;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem63;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem64;
private: System::Windows::Forms::ToolStripMenuItem^ documentsToolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^ tipsToolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^ finalProjectToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ fSIToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ site1ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ site2ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ site3ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ testeToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ siteFinalToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ teste1ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ teste1ToolStripMenuItem1;







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
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->minimizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem55 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem56 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem57 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->geralToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projectsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hTMLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->classToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem42 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem43 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem44 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem45 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem46 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem47 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem48 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem49 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem50 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem51 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem52 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem53 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem54 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentsToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tipsToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->teste1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fianalProjectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cSSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->classToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem29 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem30 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem31 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem32 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem33 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem34 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem35 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem36 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem37 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem38 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem39 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem40 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem41 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentsToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tipsToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finalProjectToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->classToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem18 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem19 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem20 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem21 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem22 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem23 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem24 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem25 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem26 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem27 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem28 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentsToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tipsToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finalExamToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->classToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tipsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finalProjectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fSIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->classToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem58 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem59 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem60 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem61 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem62 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem63 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem64 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentsToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tipsToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->teste1ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finalProjectToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projectsToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hTMLAndCSSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->site1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->site2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->site3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cSharpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fSIToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->testeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->siteFinalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creditsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6)
				{
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->viewToolStripMenuItem, this->projectsToolStripMenuItem, this->projectsToolStripMenuItem1,
					this->helpToolStripMenuItem
				});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(984, 24);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6)
				{
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->minimizeToolStripMenuItem, this->closeToolStripMenuItem
				});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->newToolStripMenuItem->Text = L"New";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Principal::saveAsToolStripMenuItem_Click);
			// 
			// minimizeToolStripMenuItem
			// 
			this->minimizeToolStripMenuItem->Name = L"minimizeToolStripMenuItem";
			this->minimizeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->minimizeToolStripMenuItem->Text = L"Minimize";
			this->minimizeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Principal::minimizeToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Principal::closeToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4)
				{
				this->copyToolStripMenuItem,
					this->cutToolStripMenuItem, this->deleteToolStripMenuItem, this->cutToolStripMenuItem1
				});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->copyToolStripMenuItem->Text = L"Copy";
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->cutToolStripMenuItem->Text = L"Cut";
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->deleteToolStripMenuItem->Text = L"Paste";
			// 
			// cutToolStripMenuItem1
			// 
			this->cutToolStripMenuItem1->Name = L"cutToolStripMenuItem1";
			this->cutToolStripMenuItem1->Size = System::Drawing::Size(107, 22);
			this->cutToolStripMenuItem1->Text = L"Delete";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2)
				{
				this->backgroundToolStripMenuItem,
					this->geralToolStripMenuItem
				});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// backgroundToolStripMenuItem
			// 
			this->backgroundToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3)
				{
				this->toolStripMenuItem55,
					this->toolStripMenuItem56, this->toolStripMenuItem57
				});
			this->backgroundToolStripMenuItem->Name = L"backgroundToolStripMenuItem";
			this->backgroundToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->backgroundToolStripMenuItem->Text = L"Background";
			// 
			// toolStripMenuItem55
			// 
			this->toolStripMenuItem55->Name = L"toolStripMenuItem55";
			this->toolStripMenuItem55->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem55->Text = L"01";
			this->toolStripMenuItem55->Click += gcnew System::EventHandler(this, &Form_Principal::toolStripMenuItem55_Click);
			// 
			// toolStripMenuItem56
			// 
			this->toolStripMenuItem56->Name = L"toolStripMenuItem56";
			this->toolStripMenuItem56->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem56->Text = L"02";
			// 
			// toolStripMenuItem57
			// 
			this->toolStripMenuItem57->Name = L"toolStripMenuItem57";
			this->toolStripMenuItem57->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem57->Text = L"03";
			// 
			// geralToolStripMenuItem
			// 
			this->geralToolStripMenuItem->Name = L"geralToolStripMenuItem";
			this->geralToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->geralToolStripMenuItem->Text = L"Geral";
			// 
			// projectsToolStripMenuItem
			// 
			this->projectsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5)
				{
				this->hTMLToolStripMenuItem,
					this->cSSToolStripMenuItem, this->cToolStripMenuItem, this->cToolStripMenuItem1, this->fSIToolStripMenuItem
				});
			this->projectsToolStripMenuItem->Name = L"projectsToolStripMenuItem";
			this->projectsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->projectsToolStripMenuItem->Text = L"Courses";
			// 
			// hTMLToolStripMenuItem
			// 
			this->hTMLToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5)
				{
				this->classToolStripMenuItem3,
					this->documentsToolStripMenuItem3, this->tipsToolStripMenuItem3, this->teste1ToolStripMenuItem, this->fianalProjectToolStripMenuItem
				});
			this->hTMLToolStripMenuItem->Name = L"hTMLToolStripMenuItem";
			this->hTMLToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->hTMLToolStripMenuItem->Text = L"HTML";
			// 
			// classToolStripMenuItem3
			// 
			this->classToolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13)
				{
				this->toolStripMenuItem42,
					this->toolStripMenuItem43, this->toolStripMenuItem44, this->toolStripMenuItem45, this->toolStripMenuItem46, this->toolStripMenuItem47,
					this->toolStripMenuItem48, this->toolStripMenuItem49, this->toolStripMenuItem50, this->toolStripMenuItem51, this->toolStripMenuItem52,
					this->toolStripMenuItem53, this->toolStripMenuItem54
				});
			this->classToolStripMenuItem3->Name = L"classToolStripMenuItem3";
			this->classToolStripMenuItem3->Size = System::Drawing::Size(139, 22);
			this->classToolStripMenuItem3->Text = L"Class";
			// 
			// toolStripMenuItem42
			// 
			this->toolStripMenuItem42->Name = L"toolStripMenuItem42";
			this->toolStripMenuItem42->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem42->Text = L"01";
			// 
			// toolStripMenuItem43
			// 
			this->toolStripMenuItem43->Name = L"toolStripMenuItem43";
			this->toolStripMenuItem43->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem43->Text = L"02";
			// 
			// toolStripMenuItem44
			// 
			this->toolStripMenuItem44->Name = L"toolStripMenuItem44";
			this->toolStripMenuItem44->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem44->Text = L"03";
			// 
			// toolStripMenuItem45
			// 
			this->toolStripMenuItem45->Name = L"toolStripMenuItem45";
			this->toolStripMenuItem45->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem45->Text = L"04";
			// 
			// toolStripMenuItem46
			// 
			this->toolStripMenuItem46->Name = L"toolStripMenuItem46";
			this->toolStripMenuItem46->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem46->Text = L"05";
			// 
			// toolStripMenuItem47
			// 
			this->toolStripMenuItem47->Name = L"toolStripMenuItem47";
			this->toolStripMenuItem47->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem47->Text = L"06";
			// 
			// toolStripMenuItem48
			// 
			this->toolStripMenuItem48->Name = L"toolStripMenuItem48";
			this->toolStripMenuItem48->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem48->Text = L"07";
			// 
			// toolStripMenuItem49
			// 
			this->toolStripMenuItem49->Name = L"toolStripMenuItem49";
			this->toolStripMenuItem49->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem49->Text = L"08";
			// 
			// toolStripMenuItem50
			// 
			this->toolStripMenuItem50->Name = L"toolStripMenuItem50";
			this->toolStripMenuItem50->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem50->Text = L"09";
			// 
			// toolStripMenuItem51
			// 
			this->toolStripMenuItem51->Name = L"toolStripMenuItem51";
			this->toolStripMenuItem51->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem51->Text = L"10";
			// 
			// toolStripMenuItem52
			// 
			this->toolStripMenuItem52->Name = L"toolStripMenuItem52";
			this->toolStripMenuItem52->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem52->Text = L"11";
			// 
			// toolStripMenuItem53
			// 
			this->toolStripMenuItem53->Name = L"toolStripMenuItem53";
			this->toolStripMenuItem53->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem53->Text = L"12";
			// 
			// toolStripMenuItem54
			// 
			this->toolStripMenuItem54->Name = L"toolStripMenuItem54";
			this->toolStripMenuItem54->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem54->Text = L"13";
			// 
			// documentsToolStripMenuItem3
			// 
			this->documentsToolStripMenuItem3->Name = L"documentsToolStripMenuItem3";
			this->documentsToolStripMenuItem3->Size = System::Drawing::Size(139, 22);
			this->documentsToolStripMenuItem3->Text = L"Documents";
			// 
			// tipsToolStripMenuItem3
			// 
			this->tipsToolStripMenuItem3->Name = L"tipsToolStripMenuItem3";
			this->tipsToolStripMenuItem3->Size = System::Drawing::Size(139, 22);
			this->tipsToolStripMenuItem3->Text = L"Tips";
			// 
			// teste1ToolStripMenuItem
			// 
			this->teste1ToolStripMenuItem->Name = L"teste1ToolStripMenuItem";
			this->teste1ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->teste1ToolStripMenuItem->Text = L"Teste 1";
			this->teste1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Principal::teste1ToolStripMenuItem_Click);
			// 
			// fianalProjectToolStripMenuItem
			// 
			this->fianalProjectToolStripMenuItem->Name = L"fianalProjectToolStripMenuItem";
			this->fianalProjectToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->fianalProjectToolStripMenuItem->Text = L"Final Project";
			// 
			// cSSToolStripMenuItem
			// 
			this->cSSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4)
				{
				this->classToolStripMenuItem2,
					this->documentsToolStripMenuItem2, this->tipsToolStripMenuItem2, this->finalProjectToolStripMenuItem1
				});
			this->cSSToolStripMenuItem->Name = L"cSSToolStripMenuItem";
			this->cSSToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->cSSToolStripMenuItem->Text = L"CSS";
			// 
			// classToolStripMenuItem2
			// 
			this->classToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13)
				{
				this->toolStripMenuItem29,
					this->toolStripMenuItem30, this->toolStripMenuItem31, this->toolStripMenuItem32, this->toolStripMenuItem33, this->toolStripMenuItem34,
					this->toolStripMenuItem35, this->toolStripMenuItem36, this->toolStripMenuItem37, this->toolStripMenuItem38, this->toolStripMenuItem39,
					this->toolStripMenuItem40, this->toolStripMenuItem41
				});
			this->classToolStripMenuItem2->Name = L"classToolStripMenuItem2";
			this->classToolStripMenuItem2->Size = System::Drawing::Size(139, 22);
			this->classToolStripMenuItem2->Text = L"Class";
			// 
			// toolStripMenuItem29
			// 
			this->toolStripMenuItem29->Name = L"toolStripMenuItem29";
			this->toolStripMenuItem29->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem29->Text = L"01";
			// 
			// toolStripMenuItem30
			// 
			this->toolStripMenuItem30->Name = L"toolStripMenuItem30";
			this->toolStripMenuItem30->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem30->Text = L"02";
			// 
			// toolStripMenuItem31
			// 
			this->toolStripMenuItem31->Name = L"toolStripMenuItem31";
			this->toolStripMenuItem31->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem31->Text = L"03";
			// 
			// toolStripMenuItem32
			// 
			this->toolStripMenuItem32->Name = L"toolStripMenuItem32";
			this->toolStripMenuItem32->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem32->Text = L"04";
			// 
			// toolStripMenuItem33
			// 
			this->toolStripMenuItem33->Name = L"toolStripMenuItem33";
			this->toolStripMenuItem33->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem33->Text = L"05";
			// 
			// toolStripMenuItem34
			// 
			this->toolStripMenuItem34->Name = L"toolStripMenuItem34";
			this->toolStripMenuItem34->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem34->Text = L"06";
			// 
			// toolStripMenuItem35
			// 
			this->toolStripMenuItem35->Name = L"toolStripMenuItem35";
			this->toolStripMenuItem35->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem35->Text = L"07";
			// 
			// toolStripMenuItem36
			// 
			this->toolStripMenuItem36->Name = L"toolStripMenuItem36";
			this->toolStripMenuItem36->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem36->Text = L"08";
			// 
			// toolStripMenuItem37
			// 
			this->toolStripMenuItem37->Name = L"toolStripMenuItem37";
			this->toolStripMenuItem37->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem37->Text = L"09";
			// 
			// toolStripMenuItem38
			// 
			this->toolStripMenuItem38->Name = L"toolStripMenuItem38";
			this->toolStripMenuItem38->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem38->Text = L"10";
			// 
			// toolStripMenuItem39
			// 
			this->toolStripMenuItem39->Name = L"toolStripMenuItem39";
			this->toolStripMenuItem39->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem39->Text = L"11";
			// 
			// toolStripMenuItem40
			// 
			this->toolStripMenuItem40->Name = L"toolStripMenuItem40";
			this->toolStripMenuItem40->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem40->Text = L"12";
			// 
			// toolStripMenuItem41
			// 
			this->toolStripMenuItem41->Name = L"toolStripMenuItem41";
			this->toolStripMenuItem41->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem41->Text = L"13";
			// 
			// documentsToolStripMenuItem2
			// 
			this->documentsToolStripMenuItem2->Name = L"documentsToolStripMenuItem2";
			this->documentsToolStripMenuItem2->Size = System::Drawing::Size(139, 22);
			this->documentsToolStripMenuItem2->Text = L"Documents";
			// 
			// tipsToolStripMenuItem2
			// 
			this->tipsToolStripMenuItem2->Name = L"tipsToolStripMenuItem2";
			this->tipsToolStripMenuItem2->Size = System::Drawing::Size(139, 22);
			this->tipsToolStripMenuItem2->Text = L"Tips";
			// 
			// finalProjectToolStripMenuItem1
			// 
			this->finalProjectToolStripMenuItem1->Name = L"finalProjectToolStripMenuItem1";
			this->finalProjectToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->finalProjectToolStripMenuItem1->Text = L"Final Project";
			// 
			// cToolStripMenuItem
			// 
			this->cToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4)
				{
				this->classToolStripMenuItem1,
					this->documentsToolStripMenuItem1, this->tipsToolStripMenuItem1, this->finalExamToolStripMenuItem
				});
			this->cToolStripMenuItem->Name = L"cToolStripMenuItem";
			this->cToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->cToolStripMenuItem->Text = L"C++";
			// 
			// classToolStripMenuItem1
			// 
			this->classToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(14)
				{
				this->toolStripMenuItem15,
					this->toolStripMenuItem16, this->toolStripMenuItem17, this->toolStripMenuItem18, this->toolStripMenuItem19, this->toolStripMenuItem20,
					this->toolStripMenuItem21, this->toolStripMenuItem22, this->toolStripMenuItem23, this->toolStripMenuItem24, this->toolStripMenuItem25,
					this->toolStripMenuItem26, this->toolStripMenuItem27, this->toolStripMenuItem28
				});
			this->classToolStripMenuItem1->Name = L"classToolStripMenuItem1";
			this->classToolStripMenuItem1->Size = System::Drawing::Size(135, 22);
			this->classToolStripMenuItem1->Text = L"Class";
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem15->Text = L"01";
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem16->Text = L"02";
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem17->Text = L"03";
			// 
			// toolStripMenuItem18
			// 
			this->toolStripMenuItem18->Name = L"toolStripMenuItem18";
			this->toolStripMenuItem18->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem18->Text = L"04";
			// 
			// toolStripMenuItem19
			// 
			this->toolStripMenuItem19->Name = L"toolStripMenuItem19";
			this->toolStripMenuItem19->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem19->Text = L"05";
			// 
			// toolStripMenuItem20
			// 
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem20->Text = L"06";
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem21->Text = L"07";
			// 
			// toolStripMenuItem22
			// 
			this->toolStripMenuItem22->Name = L"toolStripMenuItem22";
			this->toolStripMenuItem22->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem22->Text = L"08";
			// 
			// toolStripMenuItem23
			// 
			this->toolStripMenuItem23->Name = L"toolStripMenuItem23";
			this->toolStripMenuItem23->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem23->Text = L"09";
			// 
			// toolStripMenuItem24
			// 
			this->toolStripMenuItem24->Name = L"toolStripMenuItem24";
			this->toolStripMenuItem24->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem24->Text = L"10";
			// 
			// toolStripMenuItem25
			// 
			this->toolStripMenuItem25->Name = L"toolStripMenuItem25";
			this->toolStripMenuItem25->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem25->Text = L"11";
			// 
			// toolStripMenuItem26
			// 
			this->toolStripMenuItem26->Name = L"toolStripMenuItem26";
			this->toolStripMenuItem26->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem26->Text = L"12";
			// 
			// toolStripMenuItem27
			// 
			this->toolStripMenuItem27->Name = L"toolStripMenuItem27";
			this->toolStripMenuItem27->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem27->Text = L"13";
			// 
			// toolStripMenuItem28
			// 
			this->toolStripMenuItem28->Name = L"toolStripMenuItem28";
			this->toolStripMenuItem28->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem28->Text = L"14";
			// 
			// documentsToolStripMenuItem1
			// 
			this->documentsToolStripMenuItem1->Name = L"documentsToolStripMenuItem1";
			this->documentsToolStripMenuItem1->Size = System::Drawing::Size(135, 22);
			this->documentsToolStripMenuItem1->Text = L"Documents";
			// 
			// tipsToolStripMenuItem1
			// 
			this->tipsToolStripMenuItem1->Name = L"tipsToolStripMenuItem1";
			this->tipsToolStripMenuItem1->Size = System::Drawing::Size(135, 22);
			this->tipsToolStripMenuItem1->Text = L"Tips";
			// 
			// finalExamToolStripMenuItem
			// 
			this->finalExamToolStripMenuItem->Name = L"finalExamToolStripMenuItem";
			this->finalExamToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->finalExamToolStripMenuItem->Text = L"Final Exam";
			// 
			// cToolStripMenuItem1
			// 
			this->cToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4)
				{
				this->classToolStripMenuItem,
					this->documentsToolStripMenuItem, this->tipsToolStripMenuItem, this->finalProjectToolStripMenuItem
				});
			this->cToolStripMenuItem1->Name = L"cToolStripMenuItem1";
			this->cToolStripMenuItem1->Size = System::Drawing::Size(107, 22);
			this->cToolStripMenuItem1->Text = L"C#";
			// 
			// classToolStripMenuItem
			// 
			this->classToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13)
				{
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6, this->toolStripMenuItem7,
					this->toolStripMenuItem8, this->toolStripMenuItem9, this->toolStripMenuItem10, this->toolStripMenuItem11, this->toolStripMenuItem12,
					this->toolStripMenuItem13, this->toolStripMenuItem14
				});
			this->classToolStripMenuItem->Name = L"classToolStripMenuItem";
			this->classToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->classToolStripMenuItem->Text = L"Class";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem2->Text = L"01";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem3->Text = L"02";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem4->Text = L"03";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem5->Text = L"04";
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem6->Text = L"05";
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem7->Text = L"06";
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem8->Text = L"07";
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem9->Text = L"08";
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem10->Text = L"09";
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem11->Text = L"10";
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem12->Text = L"11";
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem13->Text = L"12";
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem14->Text = L"13";
			// 
			// documentsToolStripMenuItem
			// 
			this->documentsToolStripMenuItem->Name = L"documentsToolStripMenuItem";
			this->documentsToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->documentsToolStripMenuItem->Text = L"Documents";
			// 
			// tipsToolStripMenuItem
			// 
			this->tipsToolStripMenuItem->Name = L"tipsToolStripMenuItem";
			this->tipsToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->tipsToolStripMenuItem->Text = L"Tips";
			// 
			// finalProjectToolStripMenuItem
			// 
			this->finalProjectToolStripMenuItem->Name = L"finalProjectToolStripMenuItem";
			this->finalProjectToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->finalProjectToolStripMenuItem->Text = L"Final Project";
			// 
			// fSIToolStripMenuItem
			// 
			this->fSIToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5)
				{
				this->classToolStripMenuItem4,
					this->documentsToolStripMenuItem4, this->tipsToolStripMenuItem4, this->teste1ToolStripMenuItem1, this->finalProjectToolStripMenuItem2
				});
			this->fSIToolStripMenuItem->Name = L"fSIToolStripMenuItem";
			this->fSIToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->fSIToolStripMenuItem->Text = L"FSI";
			// 
			// classToolStripMenuItem4
			// 
			this->classToolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7)
				{
				this->toolStripMenuItem58,
					this->toolStripMenuItem59, this->toolStripMenuItem60, this->toolStripMenuItem61, this->toolStripMenuItem62, this->toolStripMenuItem63,
					this->toolStripMenuItem64
				});
			this->classToolStripMenuItem4->Name = L"classToolStripMenuItem4";
			this->classToolStripMenuItem4->Size = System::Drawing::Size(139, 22);
			this->classToolStripMenuItem4->Text = L"Class";
			// 
			// toolStripMenuItem58
			// 
			this->toolStripMenuItem58->Name = L"toolStripMenuItem58";
			this->toolStripMenuItem58->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem58->Text = L"01";
			// 
			// toolStripMenuItem59
			// 
			this->toolStripMenuItem59->Name = L"toolStripMenuItem59";
			this->toolStripMenuItem59->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem59->Text = L"02";
			// 
			// toolStripMenuItem60
			// 
			this->toolStripMenuItem60->Name = L"toolStripMenuItem60";
			this->toolStripMenuItem60->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem60->Text = L"03";
			// 
			// toolStripMenuItem61
			// 
			this->toolStripMenuItem61->Name = L"toolStripMenuItem61";
			this->toolStripMenuItem61->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem61->Text = L"04";
			// 
			// toolStripMenuItem62
			// 
			this->toolStripMenuItem62->Name = L"toolStripMenuItem62";
			this->toolStripMenuItem62->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem62->Text = L"05";
			// 
			// toolStripMenuItem63
			// 
			this->toolStripMenuItem63->Name = L"toolStripMenuItem63";
			this->toolStripMenuItem63->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem63->Text = L"06";
			// 
			// toolStripMenuItem64
			// 
			this->toolStripMenuItem64->Name = L"toolStripMenuItem64";
			this->toolStripMenuItem64->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem64->Text = L"07";
			// 
			// documentsToolStripMenuItem4
			// 
			this->documentsToolStripMenuItem4->Name = L"documentsToolStripMenuItem4";
			this->documentsToolStripMenuItem4->Size = System::Drawing::Size(139, 22);
			this->documentsToolStripMenuItem4->Text = L"Documents";
			// 
			// tipsToolStripMenuItem4
			// 
			this->tipsToolStripMenuItem4->Name = L"tipsToolStripMenuItem4";
			this->tipsToolStripMenuItem4->Size = System::Drawing::Size(139, 22);
			this->tipsToolStripMenuItem4->Text = L"Tips";
			// 
			// teste1ToolStripMenuItem1
			// 
			this->teste1ToolStripMenuItem1->Name = L"teste1ToolStripMenuItem1";
			this->teste1ToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->teste1ToolStripMenuItem1->Text = L"Teste 1";
			this->teste1ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form_Principal::teste1ToolStripMenuItem1_Click);
			// 
			// finalProjectToolStripMenuItem2
			// 
			this->finalProjectToolStripMenuItem2->Name = L"finalProjectToolStripMenuItem2";
			this->finalProjectToolStripMenuItem2->Size = System::Drawing::Size(139, 22);
			this->finalProjectToolStripMenuItem2->Text = L"Final Project";
			this->finalProjectToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form_Principal::finalProjectToolStripMenuItem2_Click);
			// 
			// projectsToolStripMenuItem1
			// 
			this->projectsToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3)
				{
				this->hTMLAndCSSToolStripMenuItem,
					this->cSharpToolStripMenuItem, this->fSIToolStripMenuItem1
				});
			this->projectsToolStripMenuItem1->Name = L"projectsToolStripMenuItem1";
			this->projectsToolStripMenuItem1->Size = System::Drawing::Size(61, 20);
			this->projectsToolStripMenuItem1->Text = L"Projects";
			// 
			// hTMLAndCSSToolStripMenuItem
			// 
			this->hTMLAndCSSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3)
				{
				this->site1ToolStripMenuItem,
					this->site2ToolStripMenuItem, this->site3ToolStripMenuItem
				});
			this->hTMLAndCSSToolStripMenuItem->Name = L"hTMLAndCSSToolStripMenuItem";
			this->hTMLAndCSSToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->hTMLAndCSSToolStripMenuItem->Text = L"HTML and CSS";
			this->hTMLAndCSSToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Principal::hTMLAndCSSToolStripMenuItem_Click);
			// 
			// site1ToolStripMenuItem
			// 
			this->site1ToolStripMenuItem->Name = L"site1ToolStripMenuItem";
			this->site1ToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->site1ToolStripMenuItem->Text = L"Site 1";
			this->site1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Principal::site1ToolStripMenuItem_Click);
			// 
			// site2ToolStripMenuItem
			// 
			this->site2ToolStripMenuItem->Name = L"site2ToolStripMenuItem";
			this->site2ToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->site2ToolStripMenuItem->Text = L"Site 2";
			// 
			// site3ToolStripMenuItem
			// 
			this->site3ToolStripMenuItem->Name = L"site3ToolStripMenuItem";
			this->site3ToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->site3ToolStripMenuItem->Text = L"Site 3";
			// 
			// cSharpToolStripMenuItem
			// 
			this->cSharpToolStripMenuItem->Name = L"cSharpToolStripMenuItem";
			this->cSharpToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->cSharpToolStripMenuItem->Text = L"C Sharp";
			// 
			// fSIToolStripMenuItem1
			// 
			this->fSIToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2)
				{
				this->testeToolStripMenuItem,
					this->siteFinalToolStripMenuItem
				});
			this->fSIToolStripMenuItem1->Name = L"fSIToolStripMenuItem1";
			this->fSIToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->fSIToolStripMenuItem1->Text = L"FSI";
			this->fSIToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form_Principal::fSIToolStripMenuItem1_Click);
			// 
			// testeToolStripMenuItem
			// 
			this->testeToolStripMenuItem->Name = L"testeToolStripMenuItem";
			this->testeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->testeToolStripMenuItem->Text = L"Teste";
			this->testeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Principal::testeToolStripMenuItem_Click);
			// 
			// siteFinalToolStripMenuItem
			// 
			this->siteFinalToolStripMenuItem->Name = L"siteFinalToolStripMenuItem";
			this->siteFinalToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->siteFinalToolStripMenuItem->Text = L"Site Final";
			this->siteFinalToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Principal::siteFinalToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2)
				{
				this->aboutToolStripMenuItem,
					this->creditsToolStripMenuItem
				});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Principal::aboutToolStripMenuItem_Click);
			// 
			// creditsToolStripMenuItem
			// 
			this->creditsToolStripMenuItem->Name = L"creditsToolStripMenuItem";
			this->creditsToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->creditsToolStripMenuItem->Text = L"Credits";
			this->creditsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Principal::creditsToolStripMenuItem_Click);
			// 
			// Form_Principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 762);
			this->ControlBox = false;
			this->Controls->Add(this->menuStrip2);
			this->Name = L"Form_Principal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Resumo da Mat�ria";
			this->Load += gcnew System::EventHandler(this, &Form_Principal::Form_Principal_Load);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

			}
#pragma endregion
	private: System::Void Form_Principal_Load(System::Object^ sender, System::EventArgs^ e)
		{
		
		}
		
private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	Application::Exit();
	}
private: System::Void minimizeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	this->WindowState = FormWindowState::Minimized;
	}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	
	}
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	ProjetoCLR::About sobre;
	sobre.ShowDialog();
	}
private: System::Void creditsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	
	ProjetoCLR::Credits creditos;
	creditos.ShowDialog();
	}
private: System::Void finalProjectToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
	{
	System::Diagnostics::Process::Start("http://z05.ti400.net/");
	}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
	}
private: System::Void fSIToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	
	}
private: System::Void hTMLAndCSSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
private: System::Void site1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	System::Diagnostics::Process::Start("https://domingos-ribeiro.github.io/Portfolio-2/");
	}
private: System::Void testeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	System::Diagnostics::Process::Start("https://domingos-ribeiro.github.io/Site---FSI/");
	}
private: System::Void siteFinalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	System::Diagnostics::Process::Start("http://z05.ti400.net/");
	}
private: System::Void teste1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	System::Diagnostics::Process::Start("https://domingos-ribeiro.github.io/Portfolio-2/");
	}
private: System::Void teste1ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	System::Diagnostics::Process::Start("http://z05.ti400.net/");
	}
private: System::Void toolStripMenuItem55_Click(System::Object^ sender, System::EventArgs^ e)
	{
	this->DefaultBackColor.Aqua;
	}
};
}
