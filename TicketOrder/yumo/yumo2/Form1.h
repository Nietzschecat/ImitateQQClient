#pragma once
#include "Mainmenu.h"

namespace yumo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		    //this->IsMdiContainer  = true;
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;

	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: System::Windows::Forms::Label^  label1;

	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Panel^  panel2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape3;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Panel^  panel4;

	protected: 

	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->rectangleShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->lineShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(541, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 14);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(6) {this->lineShape3, 
				this->rectangleShape3, this->lineShape2, this->rectangleShape2, this->rectangleShape1, this->lineShape1});
			this->shapeContainer1->Size = System::Drawing::Size(822, 489);
			this->shapeContainer1->TabIndex = 1;
			this->shapeContainer1->TabStop = false;
			// 
			// lineShape3
			// 
			this->lineShape3->BorderColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->lineShape3->Name = L"lineShape3";
			this->lineShape3->SelectionColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->lineShape3->X1 = 529;
			this->lineShape3->X2 = 529;
			this->lineShape3->Y1 = 192;
			this->lineShape3->Y2 = 209;
			// 
			// rectangleShape3
			// 
			this->rectangleShape3->BorderColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->rectangleShape3->Location = System::Drawing::Point(495, 187);
			this->rectangleShape3->Name = L"rectangleShape3";
			this->rectangleShape3->Size = System::Drawing::Size(215, 27);
			// 
			// lineShape2
			// 
			this->lineShape2->BorderColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lineShape2->Name = L"lineShape2";
			this->lineShape2->X1 = 529;
			this->lineShape2->X2 = 529;
			this->lineShape2->Y1 = 124;
			this->lineShape2->Y2 = 142;
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->BorderColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->rectangleShape2->Location = System::Drawing::Point(495, 119);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(214, 28);
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->BorderColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->rectangleShape1->Location = System::Drawing::Point(422, 25);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(361, 434);
			this->rectangleShape1->Click += gcnew System::EventHandler(this, &Form1::rectangleShape1_Click);
			// 
			// lineShape1
			// 
			this->lineShape1->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = 475;
			this->lineShape1->X2 = 751;
			this->lineShape1->Y1 = 88;
			this->lineShape1->Y2 = 88;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(490, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"login";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->Location = System::Drawing::Point(509, 128);
			this->panel1->Margin = System::Windows::Forms::Padding(8, 3, 3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(10, 16);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(541, 195);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(156, 14);
			this->textBox2->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel2->Location = System::Drawing::Point(509, 195);
			this->panel2->Margin = System::Windows::Forms::Padding(8, 3, 3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(15, 16);
			this->panel2->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(-19, -16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 58);
			this->button1->TabIndex = 6;
			this->button1->Text = L"登      录";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button1);
			this->panel3->Location = System::Drawing::Point(494, 287);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(216, 28);
			this->panel3->TabIndex = 7;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->DisabledLinkColor = System::Drawing::Color::White;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->Location = System::Drawing::Point(629, 244);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->linkLabel1->Size = System::Drawing::Size(68, 17);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"忘记密码？";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(509, 244);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(75, 21);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"记住密码";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Location = System::Drawing::Point(464, 335);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(247, 80);
			this->panel4->TabIndex = 10;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(822, 489);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->shapeContainer1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
         }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rectangleShape1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }




//////////////////////////////////////////////////////////////////////////////////////////////////
//进入主菜单
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 			 Mainmenu^ mainmenu=gcnew Mainmenu();
						 //mainmenu->MdiParent=this;
						 mainmenu->Show();

 }

//链接到网页
private:
	void linkLabel1_LinkClicked(System::Object ^  sender,
		System::Windows::Forms::LinkLabelLinkClickedEventArgs ^  e)
	{
		try
		{
			VisitLink();
		}
		catch (Exception ^ ex)
		{
			MessageBox::Show("Unable to open link that was clicked.");
		}
	}
private:
	void VisitLink()
	{
		// Change the color of the link text by setting LinkVisited 
		// to true.
		linkLabel1->LinkVisited = true;
		// Call the Process.Start method to open the default browser 
		// with a URL:
		System::Diagnostics::Process::Start("http://my.ctrip.com/Home/PassWord/VerifyUserInfo.aspx");
	}



};
}

