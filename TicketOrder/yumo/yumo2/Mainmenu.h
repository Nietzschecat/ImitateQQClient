#pragma once
#include "customer.h"
#include "manager.h"
namespace yumo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::OleDb;	
	using namespace System::IO;

	/// <summary>
	/// Mainmenu 摘要
	/// </summary>
	public ref class Mainmenu : public System::Windows::Forms::Form
	{

	public: 
	array<  Customer^ >^ g_Customer;
    array< Manager^ >^ g_Manager;
	public: 
		int g_CustomerCount;
		int g_ManagerCount;
		BinaryWriter ^WriEmpFile;
		BinaryReader ^readEmpFile;    //定义读取二进制文件的流对象
		ArrayList ^ cus; 
		ArrayList ^ man; 
		String^ n_Replace;
	private: System::Windows::Forms::Panel^  panel20;
	public: 
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
	private: System::Windows::Forms::Button^  button92;
	private: System::Windows::Forms::Button^  button93;
	private: System::Windows::Forms::Button^  button94;
	private: System::Windows::Forms::Button^  button95;
	private: System::Windows::Forms::Button^  button96;
	private: System::Windows::Forms::Button^  button97;
	private: System::Windows::Forms::Button^  button98;
	private: System::Windows::Forms::Button^  button99;
	private: System::Windows::Forms::Button^  button100;
	private: System::Windows::Forms::Button^  button101;
	private: System::Windows::Forms::Button^  button102;
	private: System::Windows::Forms::Button^  button103;
	private: System::Windows::Forms::Button^  button104;
	private: System::Windows::Forms::Button^  button105;
	private: System::Windows::Forms::Button^  button106;
	private: System::Windows::Forms::Button^  button107;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer11;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape13;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel18;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::Button^  button57;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer8;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape10;
	private: System::Windows::Forms::Panel^  panel17;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button60;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Button^  button64;
	private: System::Windows::Forms::Button^  button65;
	private: System::Windows::Forms::Button^  button66;
	private: System::Windows::Forms::Button^  button67;
	private: System::Windows::Forms::Button^  button68;
	private: System::Windows::Forms::Button^  button69;
	private: System::Windows::Forms::Button^  button70;
	private: System::Windows::Forms::Button^  button71;
	private: System::Windows::Forms::Button^  button72;
	private: System::Windows::Forms::Button^  button73;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer9;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape11;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button74;
	private: System::Windows::Forms::Button^  button75;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button108;




	private: System::Windows::Forms::Label^  label21;
	public:
		Mainmenu(void)
		{
			InitializeComponent();
			g_CustomerCount=0;
		    g_ManagerCount=0;
		    g_Customer = gcnew array< Customer^ >(100);
		    g_Manager = gcnew array< Manager^ >(100);
			panel17->Visible=false;
			panel18->Visible=false;
			panel19->Visible=false;
			panel20->Visible=false;
			radioButton3->Checked=true;
			radioButton1->Checked=true;
		}

    protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Mainmenu()
		{
			if (components)
			{
				delete components;
			}
		}

//////////////////////////////////////////////////////////////////////////////////////////////////
//声明
	private: System::Windows::Forms::Panel^  panel2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape4;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape6;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape5;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape7;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
    private: System::Windows::Forms::Panel^  panel13;
    private: System::Windows::Forms::PictureBox^  pictureBox2;
    private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer4;
    private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape4;
    private: System::Windows::Forms::Label^  label18;
    private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape5;
    private: System::Windows::Forms::Label^  label20;
    private: System::Windows::Forms::Label^  label19;
    private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape6;
    private: System::Windows::Forms::Button^  button15;
    private: System::Windows::Forms::ComboBox^  comboBox4;
    private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape7;
    private: System::Windows::Forms::Panel^  panel16;
public protected: System::Windows::Forms::ListView^  listView1;
private: 

    private: System::Windows::Forms::Button^  button16;
    private: System::Windows::Forms::Panel^  panel10;
private: System::Windows::Forms::Panel^  panel4;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape8;


private: System::Windows::Forms::RadioButton^  radioButton4;
private: System::Windows::Forms::RadioButton^  radioButton3;
private: System::Windows::Forms::Label^  label2;
private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;
private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer6;
private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape8;
private: System::Windows::Forms::ListView^  listView2;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape9;
private: System::Windows::Forms::Panel^  panel8;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker3;
private: System::Windows::Forms::Label^  label9;

private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton1;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label1;
private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer5;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape3;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker4;
private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
private: System::Windows::Forms::Button^  button27;
private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::Button^  button24;
private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::Button^  button20;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Panel^  panel14;
private: System::Windows::Forms::Panel^  panel15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::Button^  button42;
private: System::Windows::Forms::Button^  button41;
private: System::Windows::Forms::Button^  button40;
private: System::Windows::Forms::Button^  button39;
private: System::Windows::Forms::Button^  button38;
private: System::Windows::Forms::Button^  button37;
private: System::Windows::Forms::Button^  button36;
private: System::Windows::Forms::Button^  button35;
private: System::Windows::Forms::Button^  button34;
private: System::Windows::Forms::Button^  button32;
private: System::Windows::Forms::Button^  button30;
private: System::Windows::Forms::Button^  button29;
private: System::Windows::Forms::Button^  button28;
private: System::Windows::Forms::Button^  button31;
private: System::Windows::Forms::Button^  button33;
private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer7;
private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape9;
private: System::Windows::Forms::Panel^  panel19;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
private: System::Windows::Forms::Button^  button76;
private: System::Windows::Forms::Button^  button77;
private: System::Windows::Forms::Button^  button78;
private: System::Windows::Forms::Button^  button79;
private: System::Windows::Forms::Button^  button80;
private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::Button^  button82;
private: System::Windows::Forms::Button^  button83;
private: System::Windows::Forms::Button^  button84;
private: System::Windows::Forms::Button^  button85;
private: System::Windows::Forms::Button^  button86;
private: System::Windows::Forms::Button^  button87;
private: System::Windows::Forms::Button^  button88;
private: System::Windows::Forms::Button^  button89;
private: System::Windows::Forms::Button^  button90;
private: System::Windows::Forms::Button^  button91;
private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer10;
private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape12;
private: System::ComponentModel::IContainer^  components;
private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
/////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////
//声明使用
#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Button^  button7;
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Mainmenu::typeid));
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(L""));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer7 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape9 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer2 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape7 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->shapeContainer3 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape8 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->rectangleShape9 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape8 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer6 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->ovalShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer9 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape11 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer8 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape10 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->shapeContainer4 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape7 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape6 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape5 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer5 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer11 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape13 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer10 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape12 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape6 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape5 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			button7 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel9->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel15->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel17->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->panel18->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel20->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->panel19->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button7
			// 
			button7->BackColor = System::Drawing::Color::LightCyan;
			button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.BackgroundImage")));
			button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button7->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			button7->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			button7->Location = System::Drawing::Point(337, 64);
			button7->Name = L"button7";
			button7->Size = System::Drawing::Size(44, 25);
			button7->TabIndex = 3;
			button7->Text = L"查询";
			button7->UseCompatibleTextRendering = true;
			button7->UseMnemonic = false;
			button7->UseVisualStyleBackColor = false;
			button7->Click += gcnew System::EventHandler(this, &Mainmenu::SearbyNaButton_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->shapeContainer2);
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel2->Location = System::Drawing::Point(70, 71);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(616, 124);
			this->panel2->TabIndex = 3;
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->tableLayoutPanel1);
			this->panel9->Controls->Add(this->panel14);
			this->panel9->Location = System::Drawing::Point(16, 122);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(384, 167);
			this->panel9->TabIndex = 3;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				74)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				57)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				39)));
			this->tableLayoutPanel1->Controls->Add(this->panel15, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button27, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button26, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button25, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->button24, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->button23, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button22, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button21, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button20, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->button19, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button18, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button17, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button14, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button72, 1, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(16, 70);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(349, 82);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// panel15
			// 
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->label16);
			this->panel15->Controls->Add(this->tableLayoutPanel2);
			this->panel15->Controls->Add(this->shapeContainer7);
			this->panel15->Location = System::Drawing::Point(182, 45);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(68, 14);
			this->panel15->TabIndex = 20;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label16->Location = System::Drawing::Point(12, 11);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(137, 12);
			this->label16->TabIndex = 4;
			this->label16->Text = L"支持中文/拼音/简拼输入";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				48.95105F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				51.04895F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				72)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				124)));
			this->tableLayoutPanel2->Controls->Add(this->button43, 3, 3);
			this->tableLayoutPanel2->Controls->Add(this->button42, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->button41, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->button40, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->button39, 3, 2);
			this->tableLayoutPanel2->Controls->Add(this->button38, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->button37, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->button36, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->button35, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->button34, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->button32, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->button30, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->button29, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->button28, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->button31, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->button33, 1, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(13, 42);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.98039F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.01961F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(287, 114);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// button43
			// 
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Location = System::Drawing::Point(165, 89);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(64, 22);
			this->button43->TabIndex = 4;
			this->button43->Text = L"湘潭";
			this->button43->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Location = System::Drawing::Point(93, 89);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(64, 22);
			this->button42->TabIndex = 4;
			this->button42->Text = L"抚顺";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// button41
			// 
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Location = System::Drawing::Point(47, 89);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(40, 22);
			this->button41->TabIndex = 4;
			this->button41->Text = L"通辽";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Location = System::Drawing::Point(3, 89);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(38, 22);
			this->button40->TabIndex = 4;
			this->button40->Text = L"南昌";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Location = System::Drawing::Point(165, 60);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(64, 23);
			this->button39->TabIndex = 4;
			this->button39->Text = L"杭州";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Location = System::Drawing::Point(93, 60);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(64, 23);
			this->button38->TabIndex = 4;
			this->button38->Text = L"辽中";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Location = System::Drawing::Point(47, 60);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(40, 23);
			this->button37->TabIndex = 4;
			this->button37->Text = L"通化";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Location = System::Drawing::Point(3, 60);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(38, 23);
			this->button36->TabIndex = 4;
			this->button36->Text = L"济南";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Location = System::Drawing::Point(165, 32);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(64, 22);
			this->button35->TabIndex = 4;
			this->button35->Text = L"湘潭";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Location = System::Drawing::Point(93, 32);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(64, 22);
			this->button34->TabIndex = 4;
			this->button34->Text = L"长春";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(3, 32);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(38, 22);
			this->button32->TabIndex = 4;
			this->button32->Text = L"武汉";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(93, 3);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(64, 23);
			this->button30->TabIndex = 4;
			this->button30->Text = L"天津";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(47, 3);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(40, 23);
			this->button29->TabIndex = 4;
			this->button29->Text = L"大连";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(3, 3);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(38, 23);
			this->button28->TabIndex = 0;
			this->button28->Text = L"沈阳";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(165, 3);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(64, 23);
			this->button31->TabIndex = 20;
			this->button31->Text = L"上海";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Location = System::Drawing::Point(47, 32);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(40, 22);
			this->button33->TabIndex = 4;
			this->button33->Text = L"福州";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// shapeContainer7
			// 
			this->shapeContainer7->Location = System::Drawing::Point(0, 0);
			this->shapeContainer7->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer7->Name = L"shapeContainer7";
			this->shapeContainer7->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->lineShape9});
			this->shapeContainer7->Size = System::Drawing::Size(66, 12);
			this->shapeContainer7->TabIndex = 2;
			this->shapeContainer7->TabStop = false;
			// 
			// lineShape9
			// 
			this->lineShape9->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape9->Name = L"lineShape9";
			this->lineShape9->X1 = 14;
			this->lineShape9->X2 = 299;
			this->lineShape9->Y1 = 30;
			this->lineShape9->Y2 = 30;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(84, 45);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 14);
			this->button27->TabIndex = 11;
			this->button27->Text = L"button27";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(3, 45);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 14);
			this->button26->TabIndex = 10;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(313, 24);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(33, 15);
			this->button25->TabIndex = 9;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(256, 24);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(51, 15);
			this->button24->TabIndex = 8;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(182, 24);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(68, 15);
			this->button23->TabIndex = 7;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(84, 24);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 15);
			this->button22->TabIndex = 6;
			this->button22->Text = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(3, 24);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 15);
			this->button21->TabIndex = 5;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(313, 3);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(33, 15);
			this->button20->TabIndex = 4;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(256, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(51, 15);
			this->button19->TabIndex = 3;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(182, 3);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(68, 15);
			this->button18->TabIndex = 2;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(3, 3);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 15);
			this->button17->TabIndex = 1;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(84, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 15);
			this->button14->TabIndex = 0;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button72
			// 
			this->button72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button72->Location = System::Drawing::Point(84, 65);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(43, 14);
			this->button72->TabIndex = 4;
			this->button72->Text = L"福州";
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &Mainmenu::button72_Click);
			// 
			// panel14
			// 
			this->panel14->Location = System::Drawing::Point(36, 24);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(280, 28);
			this->panel14->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(406, -1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 96);
			this->button1->TabIndex = 6;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Mainmenu::button1_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(3, -1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 95);
			this->button4->TabIndex = 9;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Mainmenu::button4_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(304, -1);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(96, 96);
			this->button6->TabIndex = 11;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Mainmenu::button6_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(105, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(92, 96);
			this->button5->TabIndex = 10;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Mainmenu::button5_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(509, -1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 96);
			this->button3->TabIndex = 8;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Mainmenu::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(203, -1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 97);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Mainmenu::button2_Click);
			// 
			// shapeContainer2
			// 
			this->shapeContainer2->Location = System::Drawing::Point(0, 0);
			this->shapeContainer2->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer2->Name = L"shapeContainer2";
			this->shapeContainer2->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(2) {this->lineShape7, 
				this->lineShape3});
			this->shapeContainer2->Size = System::Drawing::Size(616, 124);
			this->shapeContainer2->TabIndex = 12;
			this->shapeContainer2->TabStop = false;
			// 
			// lineShape7
			// 
			this->lineShape7->BorderColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->lineShape7->Name = L"lineShape7";
			this->lineShape7->X1 = -7;
			this->lineShape7->X2 = 608;
			this->lineShape7->Y1 = 111;
			this->lineShape7->Y2 = 110;
			// 
			// lineShape3
			// 
			this->lineShape3->Name = L"lineShape3";
			this->lineShape3->X1 = -4;
			this->lineShape3->X2 = -4;
			this->lineShape3->Y1 = -22;
			this->lineShape3->Y2 = 150;
			// 
			// lineShape1
			// 
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = 321;
			this->lineShape1->X2 = 323;
			this->lineShape1->Y1 = 433;
			this->lineShape1->Y2 = 435;
			// 
			// shapeContainer3
			// 
			this->shapeContainer3->Location = System::Drawing::Point(0, 0);
			this->shapeContainer3->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer3->Name = L"shapeContainer3";
			this->shapeContainer3->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(6) {this->lineShape8, 
				this->rectangleShape9, this->rectangleShape8, this->rectangleShape2, this->rectangleShape1, this->lineShape1});
			this->shapeContainer3->Size = System::Drawing::Size(766, 638);
			this->shapeContainer3->TabIndex = 5;
			this->shapeContainer3->TabStop = false;
			// 
			// lineShape8
			// 
			this->lineShape8->BorderColor = System::Drawing::SystemColors::HighlightText;
			this->lineShape8->Name = L"lineShape8";
			this->lineShape8->X1 = 47;
			this->lineShape8->X2 = 3;
			this->lineShape8->Y1 = 310;
			this->lineShape8->Y2 = 313;
			// 
			// rectangleShape9
			// 
			this->rectangleShape9->Location = System::Drawing::Point(795, 436);
			this->rectangleShape9->Name = L"rectangleShape9";
			this->rectangleShape9->Size = System::Drawing::Size(1, 42);
			// 
			// rectangleShape8
			// 
			this->rectangleShape8->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->rectangleShape8->Location = System::Drawing::Point(729, 518);
			this->rectangleShape8->Name = L"rectangleShape8";
			this->rectangleShape8->Size = System::Drawing::Size(14, 80);
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->BackColor = System::Drawing::Color::LightCyan;
			this->rectangleShape2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rectangleShape2.BackgroundImage")));
			this->rectangleShape2->BorderColor = System::Drawing::SystemColors::Desktop;
			this->rectangleShape2->FillColor = System::Drawing::SystemColors::ControlDarkDark;
			this->rectangleShape2->FillGradientColor = System::Drawing::Color::DarkRed;
			this->rectangleShape2->Location = System::Drawing::Point(199, 669);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(1, 1);
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->BorderColor = System::Drawing::SystemColors::ScrollBar;
			this->rectangleShape1->Location = System::Drawing::Point(494, 611);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(1, 1);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(66, 147);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(640, 461);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel11);
			this->tabPage1->Controls->Add(this->listView2);
			this->tabPage1->Controls->Add(this->panel4);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(632, 435);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Mainmenu::tabPage1_Click_1);
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->Location = System::Drawing::Point(45, 156);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(24, 257);
			this->panel11->TabIndex = 2;
			// 
			// listView2
			// 
			this->listView2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"listView2.BackgroundImage")));
			this->listView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->listView2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->listView2->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::None;
			this->listView2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(4) {listViewItem1, listViewItem2, 
				listViewItem3, listViewItem4});
			this->listView2->Location = System::Drawing::Point(69, 156);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(511, 257);
			this->listView2->TabIndex = 1;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Width = 100;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Width = 120;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(button7);
			this->panel4->Controls->Add(this->radioButton4);
			this->panel4->Controls->Add(this->radioButton3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->shapeContainer6);
			this->panel4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->panel4->ForeColor = System::Drawing::Color::PowderBlue;
			this->panel4->Location = System::Drawing::Point(45, 44);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(535, 106);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mainmenu::panel4_Paint);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox1->Location = System::Drawing::Point(35, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(296, 22);
			this->textBox1->TabIndex = 5;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->radioButton4->Location = System::Drawing::Point(126, 34);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(97, 24);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"按时间查询";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->radioButton3->Location = System::Drawing::Point(23, 34);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(97, 24);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"按公司查询";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label2->Location = System::Drawing::Point(21, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 22);
			this->label2->TabIndex = 0;
			this->label2->Text = L"航班动态查询";
			// 
			// shapeContainer6
			// 
			this->shapeContainer6->Location = System::Drawing::Point(0, 0);
			this->shapeContainer6->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer6->Name = L"shapeContainer6";
			this->shapeContainer6->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->ovalShape1});
			this->shapeContainer6->Size = System::Drawing::Size(535, 106);
			this->shapeContainer6->TabIndex = 4;
			this->shapeContainer6->TabStop = false;
			// 
			// ovalShape1
			// 
			this->ovalShape1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ovalShape1.BackgroundImage")));
			this->ovalShape1->BorderColor = System::Drawing::Color::Transparent;
			this->ovalShape1->FillColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ovalShape1->FillGradientColor = System::Drawing::Color::White;
			this->ovalShape1->Location = System::Drawing::Point(27, 67);
			this->ovalShape1->Name = L"ovalShape1";
			this->ovalShape1->SelectionColor = System::Drawing::SystemColors::ControlLightLight;
			this->ovalShape1->Size = System::Drawing::Size(21, 21);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->panel10);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(632, 435);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel10->Controls->Add(this->panel5);
			this->panel10->Location = System::Drawing::Point(32, 39);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(567, 382);
			this->panel10->TabIndex = 2;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Controls->Add(this->panel17);
			this->panel5->Controls->Add(this->panel18);
			this->panel5->Controls->Add(this->comboBox3);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->dateTimePicker1);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->button74);
			this->panel5->Controls->Add(this->button75);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->panel5->Location = System::Drawing::Point(16, 36);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(537, 332);
			this->panel5->TabIndex = 3;
			// 
			// panel17
			// 
			this->panel17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel17.BackgroundImage")));
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Controls->Add(this->label4);
			this->panel17->Controls->Add(this->tableLayoutPanel4);
			this->panel17->Controls->Add(this->shapeContainer9);
			this->panel17->Location = System::Drawing::Point(105, 113);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(317, 183);
			this->panel17->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label4->Location = System::Drawing::Point(12, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"yumo 支持中文/拼音/简拼输入";
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 4;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				48.95105F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				51.04895F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				72)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				68)));
			this->tableLayoutPanel4->Controls->Add(this->button108, 1, 1);
			this->tableLayoutPanel4->Controls->Add(this->button58, 2, 3);
			this->tableLayoutPanel4->Controls->Add(this->button59, 3, 3);
			this->tableLayoutPanel4->Controls->Add(this->button60, 1, 3);
			this->tableLayoutPanel4->Controls->Add(this->button62, 3, 2);
			this->tableLayoutPanel4->Controls->Add(this->button63, 2, 2);
			this->tableLayoutPanel4->Controls->Add(this->button64, 1, 2);
			this->tableLayoutPanel4->Controls->Add(this->button65, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->button66, 3, 1);
			this->tableLayoutPanel4->Controls->Add(this->button67, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->button68, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->button69, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->button70, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->button71, 3, 0);
			this->tableLayoutPanel4->Controls->Add(this->button73, 2, 1);
			this->tableLayoutPanel4->Controls->Add(this->button61, 0, 3);
			this->tableLayoutPanel4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tableLayoutPanel4->Location = System::Drawing::Point(17, 40);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 4;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.98039F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.01961F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(275, 127);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// button108
			// 
			this->button108->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button108->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button108->Location = System::Drawing::Point(69, 35);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(62, 25);
			this->button108->TabIndex = 24;
			this->button108->Text = L"长春";
			this->button108->UseVisualStyleBackColor = true;
			// 
			// button58
			// 
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button58->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button58->Location = System::Drawing::Point(137, 98);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(64, 26);
			this->button58->TabIndex = 4;
			this->button58->Text = L"抚顺";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &Mainmenu::button58_Click);
			// 
			// button59
			// 
			this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button59->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button59->Location = System::Drawing::Point(209, 98);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(60, 26);
			this->button59->TabIndex = 4;
			this->button59->Text = L"湘潭";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &Mainmenu::button59_Click);
			// 
			// button60
			// 
			this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button60->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button60->Location = System::Drawing::Point(69, 98);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(62, 26);
			this->button60->TabIndex = 4;
			this->button60->Text = L"通辽";
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &Mainmenu::button60_Click);
			// 
			// button62
			// 
			this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button62->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button62->Location = System::Drawing::Point(209, 66);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(60, 26);
			this->button62->TabIndex = 4;
			this->button62->Text = L"杭州";
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &Mainmenu::button62_Click);
			// 
			// button63
			// 
			this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button63->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button63->Location = System::Drawing::Point(137, 66);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(64, 26);
			this->button63->TabIndex = 4;
			this->button63->Text = L"辽中";
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &Mainmenu::button63_Click);
			// 
			// button64
			// 
			this->button64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button64->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button64->Location = System::Drawing::Point(69, 66);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(62, 26);
			this->button64->TabIndex = 4;
			this->button64->Text = L"通化";
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &Mainmenu::button64_Click);
			// 
			// button65
			// 
			this->button65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button65->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button65->Location = System::Drawing::Point(3, 66);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(60, 26);
			this->button65->TabIndex = 4;
			this->button65->Text = L"济南";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &Mainmenu::button65_Click);
			// 
			// button66
			// 
			this->button66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button66->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button66->Location = System::Drawing::Point(209, 35);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(60, 25);
			this->button66->TabIndex = 4;
			this->button66->Text = L"湘潭";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &Mainmenu::button66_Click);
			// 
			// button67
			// 
			this->button67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button67->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button67->Location = System::Drawing::Point(3, 35);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(60, 25);
			this->button67->TabIndex = 4;
			this->button67->Text = L"武汉";
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &Mainmenu::button67_Click);
			// 
			// button68
			// 
			this->button68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button68->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button68->Location = System::Drawing::Point(137, 3);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(64, 26);
			this->button68->TabIndex = 4;
			this->button68->Text = L"天津";
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &Mainmenu::button68_Click);
			// 
			// button69
			// 
			this->button69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button69->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button69->Location = System::Drawing::Point(69, 3);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(62, 26);
			this->button69->TabIndex = 4;
			this->button69->Text = L"大连";
			this->button69->UseVisualStyleBackColor = true;
			this->button69->Click += gcnew System::EventHandler(this, &Mainmenu::button69_Click);
			// 
			// button70
			// 
			this->button70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button70->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button70->Location = System::Drawing::Point(3, 3);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(60, 26);
			this->button70->TabIndex = 0;
			this->button70->Text = L"沈阳";
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &Mainmenu::button70_Click);
			// 
			// button71
			// 
			this->button71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button71->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button71->Location = System::Drawing::Point(209, 3);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(60, 26);
			this->button71->TabIndex = 20;
			this->button71->Text = L"上海";
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &Mainmenu::button71_Click);
			// 
			// button73
			// 
			this->button73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button73->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button73->Location = System::Drawing::Point(137, 35);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(64, 25);
			this->button73->TabIndex = 4;
			this->button73->Text = L"长春";
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &Mainmenu::button73_Click);
			// 
			// button61
			// 
			this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button61->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button61->Location = System::Drawing::Point(3, 98);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(60, 26);
			this->button61->TabIndex = 4;
			this->button61->Text = L"南昌";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &Mainmenu::button61_Click);
			// 
			// shapeContainer9
			// 
			this->shapeContainer9->Location = System::Drawing::Point(0, 0);
			this->shapeContainer9->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer9->Name = L"shapeContainer9";
			this->shapeContainer9->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->lineShape11});
			this->shapeContainer9->Size = System::Drawing::Size(315, 181);
			this->shapeContainer9->TabIndex = 2;
			this->shapeContainer9->TabStop = false;
			// 
			// lineShape11
			// 
			this->lineShape11->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape11->Name = L"lineShape9";
			this->lineShape11->X1 = 8;
			this->lineShape11->X2 = 304;
			this->lineShape11->Y1 = 30;
			this->lineShape11->Y2 = 30;
			// 
			// panel18
			// 
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Controls->Add(this->label3);
			this->panel18->Controls->Add(this->tableLayoutPanel3);
			this->panel18->Controls->Add(this->shapeContainer8);
			this->panel18->Location = System::Drawing::Point(105, 170);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(319, 173);
			this->panel18->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label3->Location = System::Drawing::Point(18, 6);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"yumo 支持中文/拼音/简拼输入";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 4;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				48.95105F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				51.04895F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				72)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				70)));
			this->tableLayoutPanel3->Controls->Add(this->button8, 2, 3);
			this->tableLayoutPanel3->Controls->Add(this->button11, 3, 3);
			this->tableLayoutPanel3->Controls->Add(this->button44, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->button45, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->button46, 3, 2);
			this->tableLayoutPanel3->Controls->Add(this->button47, 2, 2);
			this->tableLayoutPanel3->Controls->Add(this->button48, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->button49, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->button50, 3, 1);
			this->tableLayoutPanel3->Controls->Add(this->button51, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->button52, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->button53, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->button54, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->button55, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->button56, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->button57, 2, 1);
			this->tableLayoutPanel3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tableLayoutPanel3->Location = System::Drawing::Point(18, 34);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 4;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.98039F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.01961F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(281, 127);
			this->tableLayoutPanel3->TabIndex = 3;
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button8->Location = System::Drawing::Point(141, 98);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(64, 26);
			this->button8->TabIndex = 4;
			this->button8->Text = L"抚顺";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Mainmenu::button8_Click);
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button11->Location = System::Drawing::Point(213, 98);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(63, 26);
			this->button11->TabIndex = 4;
			this->button11->Text = L"湘潭";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Mainmenu::button11_Click);
			// 
			// button44
			// 
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button44->Location = System::Drawing::Point(71, 98);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(64, 26);
			this->button44->TabIndex = 4;
			this->button44->Text = L"通辽";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &Mainmenu::button3_Click);
			// 
			// button45
			// 
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button45->Location = System::Drawing::Point(3, 98);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(62, 26);
			this->button45->TabIndex = 4;
			this->button45->Text = L"南昌";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &Mainmenu::button45_Click);
			// 
			// button46
			// 
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button46->Location = System::Drawing::Point(213, 66);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(63, 26);
			this->button46->TabIndex = 4;
			this->button46->Text = L"杭州";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &Mainmenu::button46_Click);
			// 
			// button47
			// 
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button47->Location = System::Drawing::Point(141, 66);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(64, 26);
			this->button47->TabIndex = 4;
			this->button47->Text = L"辽中";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &Mainmenu::button47_Click);
			// 
			// button48
			// 
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button48->Location = System::Drawing::Point(71, 66);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(64, 26);
			this->button48->TabIndex = 4;
			this->button48->Text = L"通化";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &Mainmenu::button48_Click);
			// 
			// button49
			// 
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button49->Location = System::Drawing::Point(3, 66);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(62, 26);
			this->button49->TabIndex = 4;
			this->button49->Text = L"济南";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &Mainmenu::button49_Click);
			// 
			// button50
			// 
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button50->Location = System::Drawing::Point(213, 35);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(63, 25);
			this->button50->TabIndex = 4;
			this->button50->Text = L"湘潭";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &Mainmenu::button50_Click);
			// 
			// button51
			// 
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button51->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button51->Location = System::Drawing::Point(3, 35);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(62, 25);
			this->button51->TabIndex = 4;
			this->button51->Text = L"武汉";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &Mainmenu::button51_Click);
			// 
			// button52
			// 
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button52->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button52->Location = System::Drawing::Point(141, 3);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(64, 26);
			this->button52->TabIndex = 4;
			this->button52->Text = L"天津";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &Mainmenu::button52_Click);
			// 
			// button53
			// 
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button53->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button53->Location = System::Drawing::Point(71, 3);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(64, 26);
			this->button53->TabIndex = 4;
			this->button53->Text = L"大连";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &Mainmenu::button53_Click);
			// 
			// button54
			// 
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button54->Location = System::Drawing::Point(3, 3);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(62, 26);
			this->button54->TabIndex = 0;
			this->button54->Text = L"沈阳";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &Mainmenu::button54_Click);
			// 
			// button55
			// 
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button55->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button55->Location = System::Drawing::Point(213, 3);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(63, 26);
			this->button55->TabIndex = 20;
			this->button55->Text = L"上海";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &Mainmenu::button55_Click);
			// 
			// button56
			// 
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button56->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button56->Location = System::Drawing::Point(71, 35);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(64, 25);
			this->button56->TabIndex = 4;
			this->button56->Text = L"福州";
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &Mainmenu::button56_Click);
			// 
			// button57
			// 
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button57->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button57->Location = System::Drawing::Point(141, 35);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(64, 25);
			this->button57->TabIndex = 4;
			this->button57->Text = L"长春";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &Mainmenu::button57_Click);
			// 
			// shapeContainer8
			// 
			this->shapeContainer8->Location = System::Drawing::Point(0, 0);
			this->shapeContainer8->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer8->Name = L"shapeContainer8";
			this->shapeContainer8->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->lineShape10});
			this->shapeContainer8->Size = System::Drawing::Size(317, 171);
			this->shapeContainer8->TabIndex = 2;
			this->shapeContainer8->TabStop = false;
			// 
			// lineShape10
			// 
			this->lineShape10->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape10->Name = L"lineShape9";
			this->lineShape10->X1 = 8;
			this->lineShape10->X2 = 304;
			this->lineShape10->Y1 = 27;
			this->lineShape10->Y2 = 27;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"东方航空", L"南方航空", L"中国航空", L"辽宁航空"});
			this->comboBox3->Location = System::Drawing::Point(105, 34);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(243, 29);
			this->comboBox3->TabIndex = 17;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Mainmenu::Search_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(105, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(244, 29);
			this->textBox2->TabIndex = 16;
			this->textBox2->Click += gcnew System::EventHandler(this, &Mainmenu::PanelShow3);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(105, 139);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(244, 29);
			this->textBox3->TabIndex = 15;
			this->textBox3->Click += gcnew System::EventHandler(this, &Mainmenu::PanelShow4);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->AllowDrop = true;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->dateTimePicker1->Location = System::Drawing::Point(107, 197);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker1->Size = System::Drawing::Size(242, 29);
			this->dateTimePicker1->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label10->Location = System::Drawing::Point(26, 35);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 19);
			this->label10->TabIndex = 11;
			this->label10->Text = L"航空公司";
			// 
			// button74
			// 
			this->button74->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button74.BackgroundImage")));
			this->button74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button74->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button74->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button74->Location = System::Drawing::Point(354, 96);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(17, 53);
			this->button74->TabIndex = 9;
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &Mainmenu::button74_Click);
			// 
			// button75
			// 
			this->button75->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button75.BackgroundImage")));
			this->button75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button75->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button75->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button75->Location = System::Drawing::Point(108, 263);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(190, 33);
			this->button75->TabIndex = 8;
			this->button75->Text = L"修  改";
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &Mainmenu::RepaireButton_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label11->Location = System::Drawing::Point(26, 86);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 19);
			this->label11->TabIndex = 3;
			this->label11->Text = L"出发机站";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label17->Location = System::Drawing::Point(26, 197);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(65, 19);
			this->label17->TabIndex = 4;
			this->label17->Text = L"出发日期";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label21->Location = System::Drawing::Point(26, 140);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(65, 19);
			this->label21->TabIndex = 2;
			this->label21->Text = L"到达机站";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dateTimePicker4);
			this->tabPage3->Controls->Add(this->button16);
			this->tabPage3->Controls->Add(this->panel16);
			this->tabPage3->Controls->Add(this->listView1);
			this->tabPage3->Controls->Add(this->comboBox4);
			this->tabPage3->Controls->Add(this->button15);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->pictureBox2);
			this->tabPage3->Controls->Add(this->shapeContainer4);
			this->tabPage3->ForeColor = System::Drawing::SystemColors::GrayText;
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(632, 435);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"查询";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->dateTimePicker4->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker4->Location = System::Drawing::Point(291, 104);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(129, 23);
			this->dateTimePicker4->TabIndex = 14;
			// 
			// button16
			// 
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Location = System::Drawing::Point(502, 103);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(68, 24);
			this->button16->TabIndex = 13;
			this->button16->Text = L"退票";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Mainmenu::button16_Click);
			// 
			// panel16
			// 
			this->panel16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel16.BackgroundImage")));
			this->panel16->Location = System::Drawing::Point(30, 142);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(560, 32);
			this->panel16->TabIndex = 12;
			// 
			// listView1
			// 
			this->listView1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"listView1.BackgroundImage")));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader5, this->columnHeader6, 
				this->columnHeader7});
			this->listView1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::None;
			this->listView1->Location = System::Drawing::Point(30, 172);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(560, 238);
			this->listView1->TabIndex = 11;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Width = 90;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Width = 120;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Width = 100;
			// 
			// comboBox4
			// 
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"东方航空", L"中国航空", L"南方航空", L"辽宁航空"});
			this->comboBox4->Location = System::Drawing::Point(97, 106);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(129, 20);
			this->comboBox4->TabIndex = 10;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Mainmenu::comboBox4_SelectedIndexChanged);
			// 
			// button15
			// 
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(434, 103);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(62, 24);
			this->button15->TabIndex = 8;
			this->button15->Text = L"查询";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Mainmenu::button15_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label20->Location = System::Drawing::Point(232, 109);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(53, 12);
			this->label20->TabIndex = 4;
			this->label20->Text = L"出发时间";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(38, 109);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(53, 12);
			this->label19->TabIndex = 3;
			this->label19->Text = L"订票航空";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label18->Location = System::Drawing::Point(59, 62);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(395, 12);
			this->label18->TabIndex = 2;
			this->label18->Text = L"你可以查询最近一年的订单 如果你还想查询更多信息 请致电18702528610";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Location = System::Drawing::Point(40, 62);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(13, 14);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// shapeContainer4
			// 
			this->shapeContainer4->Location = System::Drawing::Point(3, 3);
			this->shapeContainer4->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer4->Name = L"shapeContainer4";
			this->shapeContainer4->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(4) {this->rectangleShape7, 
				this->rectangleShape6, this->rectangleShape5, this->rectangleShape4});
			this->shapeContainer4->Size = System::Drawing::Size(626, 429);
			this->shapeContainer4->TabIndex = 1;
			this->shapeContainer4->TabStop = false;
			// 
			// rectangleShape7
			// 
			this->rectangleShape7->BorderColor = System::Drawing::SystemColors::ScrollBar;
			this->rectangleShape7->Location = System::Drawing::Point(287, 100);
			this->rectangleShape7->Name = L"rectangleShape7";
			this->rectangleShape7->Size = System::Drawing::Size(129, 24);
			// 
			// rectangleShape6
			// 
			this->rectangleShape6->BorderColor = System::Drawing::SystemColors::ScrollBar;
			this->rectangleShape6->Location = System::Drawing::Point(92, 101);
			this->rectangleShape6->Name = L"rectangleShape6";
			this->rectangleShape6->Size = System::Drawing::Size(132, 23);
			// 
			// rectangleShape5
			// 
			this->rectangleShape5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->rectangleShape5->BorderColor = System::Drawing::SystemColors::ScrollBar;
			this->rectangleShape5->FillColor = System::Drawing::SystemColors::ButtonFace;
			this->rectangleShape5->FillGradientColor = System::Drawing::SystemColors::ControlDark;
			this->rectangleShape5->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->rectangleShape5->Location = System::Drawing::Point(27, 93);
			this->rectangleShape5->Name = L"rectangleShape5";
			this->rectangleShape5->Size = System::Drawing::Size(559, 36);
			// 
			// rectangleShape4
			// 
			this->rectangleShape4->BackColor = System::Drawing::Color::Black;
			this->rectangleShape4->BorderColor = System::Drawing::SystemColors::ScrollBar;
			this->rectangleShape4->Location = System::Drawing::Point(27, 51);
			this->rectangleShape4->Name = L"rectangleShape4";
			this->rectangleShape4->Size = System::Drawing::Size(561, 27);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->panel7);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(0);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(632, 435);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &Mainmenu::tabPage4_Click);
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->pictureBox1);
			this->panel7->Location = System::Drawing::Point(-4, 37);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(652, 402);
			this->panel7->TabIndex = 0;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mainmenu::panel7_Paint);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->Controls->Add(this->pictureBox3);
			this->panel8->Controls->Add(this->comboBox1);
			this->panel8->Controls->Add(this->dateTimePicker3);
			this->panel8->Controls->Add(this->label9);
			this->panel8->Controls->Add(this->radioButton2);
			this->panel8->Controls->Add(this->radioButton1);
			this->panel8->Controls->Add(this->button10);
			this->panel8->Controls->Add(this->textBox4);
			this->panel8->Controls->Add(this->label8);
			this->panel8->Controls->Add(this->label7);
			this->panel8->Controls->Add(this->label6);
			this->panel8->Controls->Add(this->label5);
			this->panel8->Controls->Add(this->label1);
			this->panel8->Controls->Add(this->shapeContainer5);
			this->panel8->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->panel8->ForeColor = System::Drawing::Color::Black;
			this->panel8->Location = System::Drawing::Point(44, 32);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(546, 340);
			this->panel8->TabIndex = 1;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(164, 225);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(14, 12);
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"南方航空", L"东方航空", L"中国航空", L"辽宁航空"});
			this->comboBox1->Location = System::Drawing::Point(154, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(231, 25);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Mainmenu::comboBox1_SelectedIndexChanged_1);
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CalendarFont = (gcnew System::Drawing::Font(L"微软雅黑", 5.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->dateTimePicker3->CalendarMonthBackground = System::Drawing::SystemColors::ControlText;
			this->dateTimePicker3->CalendarTitleBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dateTimePicker3->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlText;
			this->dateTimePicker3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker3->Location = System::Drawing::Point(154, 189);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(229, 26);
			this->dateTimePicker3->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(184, 223);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 17);
			this->label9->TabIndex = 13;
			this->label9->Text = L"请确保号码的正确";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(243, 97);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(62, 21);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"手机号";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(155, 97);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 21);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"身份证";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DodgerBlue;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(155, 280);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(101, 32);
			this->button10->TabIndex = 8;
			this->button10->Text = L"订  票";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Mainmenu::button10_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox4->Location = System::Drawing::Point(155, 139);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(229, 26);
			this->textBox4->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(53, 189);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 17);
			this->label8->TabIndex = 4;
			this->label8->Text = L"出发时间";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(53, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 17);
			this->label7->TabIndex = 3;
			this->label7->Text = L"凭证号码";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(53, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 17);
			this->label6->TabIndex = 2;
			this->label6->Text = L"凭证类型";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(53, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 17);
			this->label5->TabIndex = 1;
			this->label5->Text = L"航空公司";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(171, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"凭证件号/票号网上值机";
			// 
			// shapeContainer5
			// 
			this->shapeContainer5->Location = System::Drawing::Point(0, 0);
			this->shapeContainer5->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer5->Name = L"shapeContainer5";
			this->shapeContainer5->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->rectangleShape3});
			this->shapeContainer5->Size = System::Drawing::Size(546, 340);
			this->shapeContainer5->TabIndex = 14;
			this->shapeContainer5->TabStop = false;
			// 
			// rectangleShape3
			// 
			this->rectangleShape3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rectangleShape3.BackgroundImage")));
			this->rectangleShape3->BorderColor = System::Drawing::SystemColors::HotTrack;
			this->rectangleShape3->Location = System::Drawing::Point(155, 222);
			this->rectangleShape3->Name = L"rectangleShape3";
			this->rectangleShape3->Size = System::Drawing::Size(154, 19);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(34, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(566, 360);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->panel13);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(632, 435);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// panel13
			// 
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel13->Controls->Add(this->panel12);
			this->panel13->Location = System::Drawing::Point(32, 33);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(568, 396);
			this->panel13->TabIndex = 3;
			// 
			// panel12
			// 
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->Controls->Add(this->panel20);
			this->panel12->Controls->Add(this->panel19);
			this->panel12->Controls->Add(this->comboBox2);
			this->panel12->Controls->Add(this->textBox8);
			this->panel12->Controls->Add(this->textBox9);
			this->panel12->Controls->Add(this->dateTimePicker2);
			this->panel12->Controls->Add(this->label12);
			this->panel12->Controls->Add(this->button12);
			this->panel12->Controls->Add(this->button13);
			this->panel12->Controls->Add(this->label13);
			this->panel12->Controls->Add(this->label14);
			this->panel12->Controls->Add(this->label15);
			this->panel12->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->panel12->Location = System::Drawing::Point(25, 40);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(526, 332);
			this->panel12->TabIndex = 2;
			this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mainmenu::panel12_Paint);
			// 
			// panel20
			// 
			this->panel20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel20.BackgroundImage")));
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Controls->Add(this->label23);
			this->panel20->Controls->Add(this->tableLayoutPanel6);
			this->panel20->Controls->Add(this->shapeContainer11);
			this->panel20->Location = System::Drawing::Point(105, 169);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(316, 178);
			this->panel20->TabIndex = 23;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label23->Location = System::Drawing::Point(15, 5);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(174, 17);
			this->label23->TabIndex = 4;
			this->label23->Text = L"yumo 支持中文/拼音/简拼输入";
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 4;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				71)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				70)));
			this->tableLayoutPanel6->Controls->Add(this->button92, 2, 3);
			this->tableLayoutPanel6->Controls->Add(this->button93, 3, 3);
			this->tableLayoutPanel6->Controls->Add(this->button94, 1, 3);
			this->tableLayoutPanel6->Controls->Add(this->button95, 0, 3);
			this->tableLayoutPanel6->Controls->Add(this->button96, 3, 2);
			this->tableLayoutPanel6->Controls->Add(this->button97, 2, 2);
			this->tableLayoutPanel6->Controls->Add(this->button98, 1, 2);
			this->tableLayoutPanel6->Controls->Add(this->button99, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->button100, 3, 1);
			this->tableLayoutPanel6->Controls->Add(this->button101, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->button103, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->button104, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->button106, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->button107, 2, 1);
			this->tableLayoutPanel6->Controls->Add(this->button105, 2, 0);
			this->tableLayoutPanel6->Controls->Add(this->button102, 3, 0);
			this->tableLayoutPanel6->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->tableLayoutPanel6->Location = System::Drawing::Point(16, 31);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 4;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.98039F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.01961F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(281, 127);
			this->tableLayoutPanel6->TabIndex = 3;
			// 
			// button92
			// 
			this->button92->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button92->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button92->Location = System::Drawing::Point(143, 98);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(65, 26);
			this->button92->TabIndex = 4;
			this->button92->Text = L"抚顺";
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &Mainmenu::button92_Click);
			// 
			// button93
			// 
			this->button93->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button93->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button93->Location = System::Drawing::Point(214, 98);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(64, 26);
			this->button93->TabIndex = 4;
			this->button93->Text = L"湘潭";
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &Mainmenu::button93_Click);
			// 
			// button94
			// 
			this->button94->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button94->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button94->Location = System::Drawing::Point(73, 98);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(64, 26);
			this->button94->TabIndex = 4;
			this->button94->Text = L"通辽";
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &Mainmenu::button94_Click);
			// 
			// button95
			// 
			this->button95->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button95->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button95->Location = System::Drawing::Point(3, 98);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(64, 26);
			this->button95->TabIndex = 4;
			this->button95->Text = L"南昌";
			this->button95->UseVisualStyleBackColor = true;
			this->button95->Click += gcnew System::EventHandler(this, &Mainmenu::button95_Click);
			// 
			// button96
			// 
			this->button96->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button96->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button96->Location = System::Drawing::Point(214, 66);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(64, 26);
			this->button96->TabIndex = 4;
			this->button96->Text = L"杭州";
			this->button96->UseVisualStyleBackColor = true;
			this->button96->Click += gcnew System::EventHandler(this, &Mainmenu::button96_Click);
			// 
			// button97
			// 
			this->button97->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button97->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button97->Location = System::Drawing::Point(143, 66);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(65, 26);
			this->button97->TabIndex = 4;
			this->button97->Text = L"辽中";
			this->button97->UseVisualStyleBackColor = true;
			this->button97->Click += gcnew System::EventHandler(this, &Mainmenu::button97_Click);
			// 
			// button98
			// 
			this->button98->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button98->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button98->Location = System::Drawing::Point(73, 66);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(64, 26);
			this->button98->TabIndex = 4;
			this->button98->Text = L"通化";
			this->button98->UseVisualStyleBackColor = true;
			this->button98->Click += gcnew System::EventHandler(this, &Mainmenu::button98_Click);
			// 
			// button99
			// 
			this->button99->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button99->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button99->Location = System::Drawing::Point(3, 66);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(64, 26);
			this->button99->TabIndex = 4;
			this->button99->Text = L"济南";
			this->button99->UseVisualStyleBackColor = true;
			this->button99->Click += gcnew System::EventHandler(this, &Mainmenu::button99_Click);
			// 
			// button100
			// 
			this->button100->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button100->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button100->Location = System::Drawing::Point(214, 35);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(64, 25);
			this->button100->TabIndex = 4;
			this->button100->Text = L"湘潭";
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &Mainmenu::button100_Click);
			// 
			// button101
			// 
			this->button101->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button101->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button101->Location = System::Drawing::Point(3, 35);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(64, 25);
			this->button101->TabIndex = 4;
			this->button101->Text = L"武汉";
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &Mainmenu::button101_Click);
			// 
			// button103
			// 
			this->button103->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button103->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button103->Location = System::Drawing::Point(73, 3);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(64, 26);
			this->button103->TabIndex = 4;
			this->button103->Text = L"大连";
			this->button103->UseVisualStyleBackColor = true;
			this->button103->Click += gcnew System::EventHandler(this, &Mainmenu::button103_Click);
			// 
			// button104
			// 
			this->button104->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button104->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button104->Location = System::Drawing::Point(3, 3);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(64, 26);
			this->button104->TabIndex = 0;
			this->button104->Text = L"沈阳";
			this->button104->UseVisualStyleBackColor = true;
			this->button104->Click += gcnew System::EventHandler(this, &Mainmenu::button104_Click);
			// 
			// button106
			// 
			this->button106->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button106->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button106->Location = System::Drawing::Point(73, 35);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(64, 25);
			this->button106->TabIndex = 4;
			this->button106->Text = L"福州";
			this->button106->UseVisualStyleBackColor = true;
			this->button106->Click += gcnew System::EventHandler(this, &Mainmenu::button106_Click);
			// 
			// button107
			// 
			this->button107->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button107->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button107->Location = System::Drawing::Point(143, 35);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(65, 25);
			this->button107->TabIndex = 4;
			this->button107->Text = L"长春";
			this->button107->UseVisualStyleBackColor = true;
			this->button107->Click += gcnew System::EventHandler(this, &Mainmenu::button107_Click);
			// 
			// button105
			// 
			this->button105->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button105->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button105->Location = System::Drawing::Point(143, 3);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(64, 26);
			this->button105->TabIndex = 20;
			this->button105->Text = L"上海";
			this->button105->UseVisualStyleBackColor = true;
			this->button105->Click += gcnew System::EventHandler(this, &Mainmenu::button105_Click);
			// 
			// button102
			// 
			this->button102->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button102->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button102->Location = System::Drawing::Point(214, 3);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(64, 26);
			this->button102->TabIndex = 4;
			this->button102->Text = L"天津";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &Mainmenu::button102_Click);
			// 
			// shapeContainer11
			// 
			this->shapeContainer11->Location = System::Drawing::Point(0, 0);
			this->shapeContainer11->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer11->Name = L"shapeContainer11";
			this->shapeContainer11->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->lineShape13});
			this->shapeContainer11->Size = System::Drawing::Size(314, 176);
			this->shapeContainer11->TabIndex = 2;
			this->shapeContainer11->TabStop = false;
			// 
			// lineShape13
			// 
			this->lineShape13->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape13->Name = L"lineShape9";
			this->lineShape13->X1 = 14;
			this->lineShape13->X2 = 296;
			this->lineShape13->Y1 = 25;
			this->lineShape13->Y2 = 25;
			// 
			// panel19
			// 
			this->panel19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel19.BackgroundImage")));
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Controls->Add(this->label22);
			this->panel19->Controls->Add(this->tableLayoutPanel5);
			this->panel19->Controls->Add(this->shapeContainer10);
			this->panel19->Location = System::Drawing::Point(105, 117);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(316, 184);
			this->panel19->TabIndex = 22;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label22->Location = System::Drawing::Point(12, 11);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(174, 17);
			this->label22->TabIndex = 4;
			this->label22->Text = L"yumo 支持中文/拼音/简拼输入";
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel5->ColumnCount = 4;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50.35971F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				49.64029F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				72)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				72)));
			this->tableLayoutPanel5->Controls->Add(this->button77, 2, 3);
			this->tableLayoutPanel5->Controls->Add(this->button76, 3, 3);
			this->tableLayoutPanel5->Controls->Add(this->button78, 1, 3);
			this->tableLayoutPanel5->Controls->Add(this->button79, 0, 3);
			this->tableLayoutPanel5->Controls->Add(this->button80, 3, 2);
			this->tableLayoutPanel5->Controls->Add(this->button81, 2, 2);
			this->tableLayoutPanel5->Controls->Add(this->button82, 1, 2);
			this->tableLayoutPanel5->Controls->Add(this->button83, 0, 2);
			this->tableLayoutPanel5->Controls->Add(this->button84, 3, 1);
			this->tableLayoutPanel5->Controls->Add(this->button86, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->button87, 2, 0);
			this->tableLayoutPanel5->Controls->Add(this->button88, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->button89, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->button90, 3, 0);
			this->tableLayoutPanel5->Controls->Add(this->button91, 1, 1);
			this->tableLayoutPanel5->Controls->Add(this->button85, 2, 1);
			this->tableLayoutPanel5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tableLayoutPanel5->Location = System::Drawing::Point(19, 42);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 4;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.98039F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.01961F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(281, 127);
			this->tableLayoutPanel5->TabIndex = 3;
			// 
			// button77
			// 
			this->button77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button77->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button77->Location = System::Drawing::Point(139, 98);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(66, 26);
			this->button77->TabIndex = 4;
			this->button77->Text = L"抚顺";
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Click += gcnew System::EventHandler(this, &Mainmenu::button77_Click);
			// 
			// button76
			// 
			this->button76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button76->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button76->Location = System::Drawing::Point(211, 98);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(64, 26);
			this->button76->TabIndex = 4;
			this->button76->Text = L"湘潭";
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &Mainmenu::button76_Click);
			// 
			// button78
			// 
			this->button78->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button78->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button78->Location = System::Drawing::Point(71, 98);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(62, 26);
			this->button78->TabIndex = 4;
			this->button78->Text = L"通辽";
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &Mainmenu::button78_Click);
			// 
			// button79
			// 
			this->button79->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button79->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button79->Location = System::Drawing::Point(3, 98);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(62, 26);
			this->button79->TabIndex = 4;
			this->button79->Text = L"南昌";
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &Mainmenu::button79_Click);
			// 
			// button80
			// 
			this->button80->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button80->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button80->Location = System::Drawing::Point(211, 66);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(64, 26);
			this->button80->TabIndex = 4;
			this->button80->Text = L"杭州";
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &Mainmenu::button80_Click);
			// 
			// button81
			// 
			this->button81->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button81->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button81->Location = System::Drawing::Point(139, 66);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(66, 26);
			this->button81->TabIndex = 4;
			this->button81->Text = L"辽中";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &Mainmenu::button81_Click);
			// 
			// button82
			// 
			this->button82->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button82->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button82->Location = System::Drawing::Point(71, 66);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(62, 26);
			this->button82->TabIndex = 4;
			this->button82->Text = L"通化";
			this->button82->UseVisualStyleBackColor = true;
			this->button82->Click += gcnew System::EventHandler(this, &Mainmenu::button82_Click);
			// 
			// button83
			// 
			this->button83->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button83->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button83->Location = System::Drawing::Point(3, 66);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(62, 26);
			this->button83->TabIndex = 4;
			this->button83->Text = L"济南";
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &Mainmenu::button83_Click);
			// 
			// button84
			// 
			this->button84->BackColor = System::Drawing::Color::Transparent;
			this->button84->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button84->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button84->Location = System::Drawing::Point(211, 35);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(64, 25);
			this->button84->TabIndex = 4;
			this->button84->Text = L"湘潭";
			this->button84->UseVisualStyleBackColor = false;
			this->button84->Click += gcnew System::EventHandler(this, &Mainmenu::button84_Click);
			// 
			// button86
			// 
			this->button86->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button86->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button86->Location = System::Drawing::Point(3, 35);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(62, 25);
			this->button86->TabIndex = 4;
			this->button86->Text = L"武汉";
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &Mainmenu::button86_Click);
			// 
			// button87
			// 
			this->button87->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button87->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button87->Location = System::Drawing::Point(139, 3);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(64, 26);
			this->button87->TabIndex = 4;
			this->button87->Text = L"天津";
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &Mainmenu::button87_Click);
			// 
			// button88
			// 
			this->button88->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button88->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button88->Location = System::Drawing::Point(71, 3);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(62, 26);
			this->button88->TabIndex = 4;
			this->button88->Text = L"大连";
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &Mainmenu::button88_Click);
			// 
			// button89
			// 
			this->button89->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button89->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button89->Location = System::Drawing::Point(3, 3);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(62, 26);
			this->button89->TabIndex = 0;
			this->button89->Text = L"沈阳";
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Click += gcnew System::EventHandler(this, &Mainmenu::button89_Click);
			// 
			// button90
			// 
			this->button90->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button90->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button90->Location = System::Drawing::Point(211, 3);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(64, 26);
			this->button90->TabIndex = 20;
			this->button90->Text = L"上海";
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &Mainmenu::button90_Click);
			// 
			// button91
			// 
			this->button91->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button91->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button91->Location = System::Drawing::Point(71, 35);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(62, 25);
			this->button91->TabIndex = 4;
			this->button91->Text = L"福州";
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &Mainmenu::button91_Click);
			// 
			// button85
			// 
			this->button85->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button85->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button85->Location = System::Drawing::Point(139, 35);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(64, 25);
			this->button85->TabIndex = 4;
			this->button85->Text = L"长春";
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &Mainmenu::button85_Click);
			// 
			// shapeContainer10
			// 
			this->shapeContainer10->Location = System::Drawing::Point(0, 0);
			this->shapeContainer10->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer10->Name = L"shapeContainer10";
			this->shapeContainer10->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->lineShape12});
			this->shapeContainer10->Size = System::Drawing::Size(314, 182);
			this->shapeContainer10->TabIndex = 2;
			this->shapeContainer10->TabStop = false;
			// 
			// lineShape12
			// 
			this->lineShape12->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape12->Name = L"lineShape9";
			this->lineShape12->X1 = 14;
			this->lineShape12->X2 = 299;
			this->lineShape12->Y1 = 30;
			this->lineShape12->Y2 = 30;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->comboBox2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"东方航空", L"南方航空", L"中国航空", L"辽宁航空"});
			this->comboBox2->Location = System::Drawing::Point(105, 34);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(243, 29);
			this->comboBox2->TabIndex = 17;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox8->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox8->Location = System::Drawing::Point(105, 86);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(244, 29);
			this->textBox8->TabIndex = 16;
			this->textBox8->Click += gcnew System::EventHandler(this, &Mainmenu::PanelShow1);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox9->Location = System::Drawing::Point(105, 139);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(244, 29);
			this->textBox9->TabIndex = 15;
			this->textBox9->Click += gcnew System::EventHandler(this, &Mainmenu::PanelShow2);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->AllowDrop = true;
			this->dateTimePicker2->CalendarForeColor = System::Drawing::SystemColors::ControlDark;
			this->dateTimePicker2->CalendarTitleForeColor = System::Drawing::SystemColors::ControlDark;
			this->dateTimePicker2->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlDark;
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->ImeMode = System::Windows::Forms::ImeMode::On;
			this->dateTimePicker2->Location = System::Drawing::Point(107, 197);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker2->Size = System::Drawing::Size(242, 29);
			this->dateTimePicker2->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label12->Location = System::Drawing::Point(26, 35);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 19);
			this->label12->TabIndex = 11;
			this->label12->Text = L"航空公司";
			// 
			// button12
			// 
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Location = System::Drawing::Point(354, 96);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(17, 53);
			this->button12->TabIndex = 9;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Mainmenu::button12_Click);
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->Location = System::Drawing::Point(108, 263);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(190, 33);
			this->button13->TabIndex = 8;
			this->button13->Text = L"录  入";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Mainmenu::button13_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label13->Location = System::Drawing::Point(26, 86);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(65, 19);
			this->label13->TabIndex = 3;
			this->label13->Text = L"出发机站";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label14->Location = System::Drawing::Point(26, 197);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 19);
			this->label14->TabIndex = 4;
			this->label14->Text = L"出发日期";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label15->Location = System::Drawing::Point(26, 140);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(65, 19);
			this->label15->TabIndex = 2;
			this->label15->Text = L"到达机站";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->button9);
			this->tabPage6->Controls->Add(this->panel6);
			this->tabPage6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(632, 435);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(231, 95);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(177, 42);
			this->button9->TabIndex = 2;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Mainmenu::button9_Click);
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel6->Location = System::Drawing::Point(10, 173);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(611, 259);
			this->panel6->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel3->Location = System::Drawing::Point(319, 16);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(106, 63);
			this->panel3->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->shapeContainer1);
			this->panel1->Location = System::Drawing::Point(12, 15);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(722, 181);
			this->panel1->TabIndex = 9;
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(4) {this->lineShape6, 
				this->lineShape5, this->lineShape4, this->lineShape2});
			this->shapeContainer1->Size = System::Drawing::Size(722, 181);
			this->shapeContainer1->TabIndex = 6;
			this->shapeContainer1->TabStop = false;
			// 
			// lineShape6
			// 
			this->lineShape6->Name = L"lineShape6";
			this->lineShape6->X1 = 54;
			this->lineShape6->X2 = 461;
			this->lineShape6->Y1 = 49;
			this->lineShape6->Y2 = 49;
			// 
			// lineShape5
			// 
			this->lineShape5->Name = L"lineShape5";
			this->lineShape5->X1 = 459;
			this->lineShape5->X2 = 692;
			this->lineShape5->Y1 = 49;
			this->lineShape5->Y2 = 49;
			// 
			// lineShape4
			// 
			this->lineShape4->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape4->Name = L"lineShape4";
			this->lineShape4->X1 = 691;
			this->lineShape4->X2 = 691;
			this->lineShape4->Y1 = 48;
			this->lineShape4->Y2 = 221;
			// 
			// lineShape2
			// 
			this->lineShape2->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape2->Name = L"lineShape2";
			this->lineShape2->X1 = 54;
			this->lineShape2->X2 = 54;
			this->lineShape2->Y1 = 49;
			this->lineShape2->Y2 = 209;
			// 
			// Mainmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(766, 638);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->shapeContainer3);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"Mainmenu";
			this->Text = L"Mainmenu";
			this->Load += gcnew System::EventHandler(this, &Mainmenu::Mainmenu_Load);
			this->panel2->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
////////////////////////////////////////////////////////////////////////////////////////////////////////





/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///应用功能实现区


//////////////////////////////////////
//主菜单Tabpage变换功能实现

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

					  tabControl1->SelectedIndex=0;
				 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			          tabControl1->SelectedIndex=3;

		        }

 private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  	      tabControl1->SelectedIndex=2;
				  }

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 	     tabControl1->SelectedIndex=4;
				   }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 		tabControl1->SelectedIndex=1;
				  }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 	    tabControl1->SelectedIndex=5;
				  }
////////////////////////////////////////






///////////////////////////////////////////////////////////////////////////////
/////////////////////////tabpage4


//添加信息到Manager信息库
 private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(!Directory::Exists("F:\\ManYumo"))
			  Directory::CreateDirectory("F:\\ManYumo");
			  FileStream ^wriFile=gcnew FileStream("F:\\ManYumo\\Manager.dat",FileMode::Append);
			  WriEmpFile= gcnew BinaryWriter(wriFile);

			  Manager^ r = gcnew Manager;
			  r->n_CompnayName = comboBox2->Text;
			  r->n_StartPlace = textBox8->Text;
			  r->n_Terminal = textBox9->Text;
			  r->n_Time =dateTimePicker2->Text;


			  WriEmpFile->Write( r->n_CompnayName);
			  WriEmpFile->Write(r->n_StartPlace);
			  WriEmpFile->Write(r->n_Terminal);
			  WriEmpFile->Write(r->n_Time);
			  WriEmpFile->Close();
			  g_Manager[g_ManagerCount++] = r;
			  MessageBox::Show("录入成功");

				  }


//城市下拉框出现
 private: System::Void PanelShow1(System::Object^  sender, System::EventArgs^  e) {
			  panel19->Show();
		  }
 private: System::Void PanelShow2(System::Object^  sender, System::EventArgs^  e) {
			  panel20->Show();
		  }


//panel19 城市下拉框消失
private: System::Void button91_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button91->Text;
			 panel19->Hide();
		 }
private: System::Void button90_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button90->Text;
			 panel19->Hide();
		 }
private: System::Void button89_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button89->Text;
			 panel19->Hide();
		 }
private: System::Void button88_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button88->Text;
			 panel19->Hide();
		 }
private: System::Void button87_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button87->Text;
			 panel19->Hide();
		 }
private: System::Void button86_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button86->Text;
			 panel19->Hide();
		 }
private: System::Void button85_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button85->Text;
			 panel19->Hide();
		 }
private: System::Void button84_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button84->Text;
			 panel19->Hide();
		 }
private: System::Void button83_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button83->Text;
			 panel19->Hide();
		 }
private: System::Void button82_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button82->Text;
			 panel19->Hide();
		 }
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button81->Text;
			 panel19->Hide();
		 }
private: System::Void button80_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button80->Text;
			 panel19->Hide();
		 }
private: System::Void button79_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button79->Text;
			 panel19->Hide();
		 }
private: System::Void button78_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button78->Text;
			 panel19->Hide();
		 }
private: System::Void button77_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button77->Text;
			 panel19->Hide();
		 }
private: System::Void button76_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Text=button76->Text;
			 panel19->Hide();
		 }



//panel20 城市下拉框消失
private: System::Void button92_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button92->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
			 panel20->Show();
			 }
		 }
private: System::Void button93_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button93->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button94_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button94->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button95_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button95->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button96_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button96->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button97_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button97->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button98_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button98->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button99_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button99->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button100_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button100->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button101_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button101->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button102->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button103_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button103->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button104_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button104->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button105_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button105->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button106_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button106->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }
private: System::Void button107_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox9->Text=button107->Text;
			 panel20->Hide();
			 if(textBox8->Text==textBox9->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel20->Show();
			 }
		 }

//目的地出发地内容交换
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 n_Replace=textBox9->Text;
		     textBox9->Text=textBox8->Text;
			 textBox8->Text=n_Replace;
				  }







/////////////////////////////////////////////////////////////////////////////// 
/////////////////////////tabpage5
		
//查询
private: System::Void Search_Click(System::Object^  sender, System::EventArgs^  e) {

		 FileStream ^readFile=gcnew FileStream("F:\\ManYumo\\Manager.dat",FileMode::Open);
		 readEmpFile=gcnew BinaryReader(readFile);    //创建BinaryReader流对象readStuFil
		 man=gcnew ArrayList();                       
		 //创建ArrayList类型的数组stu
		 while(readEmpFile->PeekChar()>=0)     //peekChar判断是否到达文件末尾，文末常用-1表示。
		 {

			 Manager ^s=gcnew Manager();
			 s->n_CompnayName=readEmpFile->ReadString();
			 s->n_StartPlace=readEmpFile->ReadString();
			 s->n_Terminal=readEmpFile->ReadString();
			 s->n_Time=readEmpFile->ReadString();
			 man->Add(s);                             
		 }
		 readEmpFile->Close();       

		 Manager^ r;
		 int n=1;
		 for each( r in man){
			 n++;
			 if(r->n_CompnayName==comboBox3->Text)
			 {		 
				 dateTimePicker1->Text=r->n_Time;
				 textBox2->Text=r->n_StartPlace;
				 textBox3->Text=r->n_Terminal;
				 comboBox3->Text=r->n_CompnayName;
				 break;     //退出循环
			 }
			 if(n>man->Count) MessageBox::Show("没有相关信息");
		 }
}


//修改
private: System::Void RepaireButton_Click(System::Object^  sender, System::EventArgs^  e) {

			 Manager ^q=gcnew Manager();
			 FileStream ^readFile=gcnew FileStream("F:\\ManYumo\\Manager.dat",FileMode::Open);
			 readEmpFile=gcnew BinaryReader(readFile);    //创建BinaryReader流对象readStuFil
			 man=gcnew ArrayList();  
             q->n_CompnayName=comboBox3->Text;
			 q->n_StartPlace=textBox2->Text;
			 q->n_Terminal=textBox3->Text;
			 q->n_Time=dateTimePicker1->Text;                     
			 while(readEmpFile->PeekChar()>=0)     //peekChar判断是否到达文件末尾，文末常用-1表示。
			 {

				 Manager ^s=gcnew Manager();
				 s->n_CompnayName=readEmpFile->ReadString();
				 s->n_StartPlace=readEmpFile->ReadString();
				 s->n_Terminal=readEmpFile->ReadString();
				 s->n_Time=readEmpFile->ReadString();
				 man->Add(s);                             
			 }
			 readEmpFile->Close();       

			 FileStream ^wriFile=gcnew FileStream("F:\\ManYumo\\Manager.dat",FileMode::Create);
			 WriEmpFile= gcnew BinaryWriter(wriFile);


			 Manager^ r;
			 int n=1;
			 for each( r in man){

				 if(r->n_CompnayName==comboBox3->Text)
				 {		 
					 r=q;
				 }
				 WriEmpFile->Write( r->n_CompnayName);
				 WriEmpFile->Write(r->n_StartPlace);
				 WriEmpFile->Write(r->n_Terminal);
				 WriEmpFile->Write(r->n_Time);
				 n++;
                 g_Manager[g_ManagerCount++] = r;
				 }
			 	WriEmpFile->Close();
				MessageBox::Show("修改成功");
}



//城市下拉框出现
 private: System::Void PanelShow3(System::Object^  sender, System::EventArgs^  e) {
			  panel17->Show();
		  }
 private: System::Void PanelShow4(System::Object^  sender, System::EventArgs^  e) {
			  panel18->Show();
		  }


		  //panel17 城市下拉框消失
private: System::Void button58_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button58->Text;
			 panel17->Hide();
		 }
private: System::Void button59_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button59->Text;
			 panel17->Hide();
		 }
private: System::Void button60_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button60->Text;
			 panel17->Hide();
		 }
private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button61->Text;
			 panel17->Hide();
		 }
private: System::Void button62_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button62->Text;
			 panel17->Hide();
		 }
private: System::Void button63_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button63->Text;
			 panel17->Hide();
		 }
private: System::Void button64_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button64->Text;
			 panel17->Hide();
		 }
private: System::Void button65_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button65->Text;
			 panel17->Hide();
		 }
private: System::Void button66_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button66->Text;
			 panel17->Hide();
		 }
private: System::Void button67_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button67->Text;
			 panel17->Hide();
		 }
private: System::Void button68_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button68->Text;
			 panel17->Hide();
		 }
private: System::Void button69_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button69->Text;
			 panel17->Hide();
		 }
private: System::Void button70_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button70->Text;
			 panel17->Hide();
		 }
private: System::Void button71_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button71->Text;
			 panel17->Hide();
		 }
private: System::Void button72_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button72->Text;
			 panel17->Hide();
		 }
private: System::Void button73_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text=button73->Text;
			 panel17->Hide();
		 }



		 //panel18 城市下拉框消失
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button44->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button45->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button46->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button47->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button48->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button49->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button50->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button51->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button52->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button53->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button54->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button57->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button55_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button55->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button56->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button8->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text=button11->Text;
			 panel18->Hide();
			 if(textBox3->Text==textBox2->Text)
			 {
				 MessageBox::Show("出发地与目的地不可以相同");
				 panel18->Show();
			 }
		 }

		 //目的地出发地内容交换
private: System::Void button74_Click(System::Object^  sender, System::EventArgs^  e) {
			 n_Replace=textBox2->Text;
			 textBox2->Text=textBox3->Text;
			 textBox3->Text=n_Replace;
		 }



/////////////////////////////////////////////////////////////////////////////// 
/////////////////////////tabpage1

//航班查询
private: System::Void SearbyNaButton_Click(System::Object^  sender, System::EventArgs^  e) {

			 FileStream ^readFile=gcnew FileStream("F:\\ManYumo\\Manager.dat",FileMode::Open);
			 readEmpFile=gcnew BinaryReader(readFile);    //创建BinaryReader流对象readStuFil
			 man=gcnew ArrayList();                       
			 //创建ArrayList类型的数组stu
			 while(readEmpFile->PeekChar()>=0)     //peekChar判断是否到达文件末尾，文末常用-1表示。
			 {

				 Manager ^s=gcnew Manager();
				 s->n_CompnayName=readEmpFile->ReadString();
				 s->n_StartPlace=readEmpFile->ReadString();
				 s->n_Terminal=readEmpFile->ReadString();
				 s->n_Time=readEmpFile->ReadString();
				 man->Add(s);                             
			 }
			 readEmpFile->Close();         

			 Manager^ q;
			 int n=1;
			 for each( q in man){
				 n++;


			 if(radioButton3->Checked)
			 {
				 if(q->n_CompnayName==textBox1->Text)
				 {		 

					 listView2->Items->Clear();
					 Manager^ r = gcnew Manager;
					 r=q;
					 ListViewItem^ item = gcnew ListViewItem( r->n_CompnayName, 1 );
					 item->SubItems->Add( r->n_StartPlace);
					 item->SubItems->Add( r->n_Terminal);
					 item->SubItems->Add( r->n_Time);

					 array<ListViewItem^>^temp1 = {item};
					 listView2->Items->AddRange( temp1 );
					 break;     //退出循环

				 }
				 if(n>man->Count) MessageBox::Show("无相关信息");
			 }
			 else
			 {
				 if(q->n_Time==textBox1->Text)
				 {		 

					 listView2->Items->Clear();
					 Manager^ r = gcnew Manager;
					 r=q;
					 ListViewItem^ item = gcnew ListViewItem( r->n_CompnayName, 1 );
					 item->SubItems->Add( r->n_StartPlace);
					 item->SubItems->Add( r->n_Terminal);
					 item->SubItems->Add( r->n_Time);

					 array<ListViewItem^>^temp1 = {item};
					 listView2->Items->AddRange( temp1 );
					 break;     //退出循环

				 }
				 if(n>man->Count) MessageBox::Show("无相关信息");
			 }

			 }
		 }


		 
		 
/////////////////////////////////////////////////////////////////////////////// 
/////////////////////////tabpage2

//添加信息到Customer信息库
 private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(!Directory::Exists("F:\\CusYumo"))
			  Directory::CreateDirectory("F:\\CusYumo");
			  FileStream ^wriFile=gcnew FileStream("F:\\CusYumo\\Customer.dat",FileMode::Append);
			  WriEmpFile= gcnew BinaryWriter(wriFile);
			  Customer^ q = gcnew Customer;
			  q->m_CompnayName= comboBox1->Text;
			  q->m_IDNumber= textBox4->Text;
			  q->m_Time=dateTimePicker3->Text;
			  WriEmpFile->Write(q->m_CompnayName);
			  WriEmpFile->Write(q->m_IDNumber);
			  WriEmpFile->Write(q->m_Time);
			  WriEmpFile->Close();
			  g_Customer[g_CustomerCount] = q;
			  MessageBox::Show("订票成功");

		  }


//判断是否有相应航班
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {

			 FileStream ^readFile=gcnew FileStream("F:\\ManYumo\\Manager.dat",FileMode::Open);
			 readEmpFile=gcnew BinaryReader(readFile);    //创建BinaryReader流对象readStuFil
			 man=gcnew ArrayList();                       
			 while(readEmpFile->PeekChar()>=0)     //peekChar判断是否到达文件末尾，文末常用-1表示。
			 {

				 Manager ^s=gcnew Manager();
				 s->n_CompnayName=readEmpFile->ReadString();
				 s->n_StartPlace=readEmpFile->ReadString();
				 s->n_Terminal=readEmpFile->ReadString();
				 s->n_Time=readEmpFile->ReadString();
				 man->Add(s);                             
			 }
			 readEmpFile->Close();       

			 Manager^ r;
			 int n=1;
			 for each( r in man){
				 n++;
				 if(r->n_CompnayName==comboBox1->Text)
				 {		 
					 dateTimePicker3->Text=r->n_Time;
					 break;     //退出循环
				 }
				 if(n>man->Count) 
					 MessageBox::Show("没有相关航班信息");
			 }

}



/////////////////////////////////////////////////////////////////////////////// 
/////////////////////////tabpage3

//检查订票信息
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 FileStream ^readFile=gcnew FileStream("F:\\CusYumo\\Customer.dat",FileMode::Open);
			 readEmpFile=gcnew BinaryReader(readFile);    //创建BinaryReader流对象readStuFil
			 cus=gcnew ArrayList();                     
			 while(readEmpFile->PeekChar()>=0)     //peekChar判断是否到达文件末尾，文末常用-1表示。
			 {

				 Customer ^s=gcnew Customer();
				 s->m_CompnayName=readEmpFile->ReadString();
				 s->m_IDNumber=readEmpFile->ReadString();
				 s->m_Time=readEmpFile->ReadString();
				 cus->Add(s);                             
			 }
			 readEmpFile->Close();       

			 Customer^ r;
			 int n=1;
			 for each( r in cus){
				 n++;
				 if(r->m_CompnayName==comboBox4->Text)
				 {		 
					 dateTimePicker4->Text=r->m_Time;
					 break;     //退出循环
				 }
				 if(n>cus->Count) 
					 MessageBox::Show("没有相关订票信息");
			 }

		 }



//显示订票信息
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {

		 FileStream ^readFile=gcnew FileStream("F:\\CusYumo\\Customer.dat",FileMode::Open);
		 readEmpFile=gcnew BinaryReader(readFile);    //创建BinaryReader流对象readStuFil
		 cus=gcnew ArrayList();                       
		 while(readEmpFile->PeekChar()>=0)     //peekChar判断是否到达文件末尾，文末常用-1表示。
		 {

			 Customer ^s=gcnew Customer();
			 s->m_CompnayName=readEmpFile->ReadString();
			 s->m_IDNumber=readEmpFile->ReadString();
			 s->m_Time=readEmpFile->ReadString();
			 cus->Add(s);                             
		 }
		 readEmpFile->Close();         
		 listView1->Items->Clear();
		 Customer^ q;
		 int n=1;
		 for each( q in cus){
				 if(q->m_CompnayName==comboBox4->Text)
				 {		 

					 Customer^ r = gcnew Customer;
					 r=q;
					 ListViewItem^ item = gcnew ListViewItem( r->m_CompnayName, 1 );
					 item->SubItems->Add( r->m_IDNumber);
					 item->SubItems->Add( r->m_Time);

					 array<ListViewItem^>^temp1 = {item};
					 listView1->Items->AddRange( temp1 );
					 //break;     //退出循环
					 ++n;
				 }


		 }				
		 if(n==1)
		 {MessageBox::Show("无相关订票信息");}
		 }



//删除订单
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {

			 FileStream ^readFile=gcnew FileStream("F:\\CusYumo\\Customer.dat",FileMode::Open);
			 readEmpFile=gcnew BinaryReader(readFile);    //创建BinaryReader流对象readStuFil
			 cus=gcnew ArrayList();                       
			 while(readEmpFile->PeekChar()>=0)     //peekChar判断是否到达文件末尾，文末常用-1表示。
			 {

				 Customer ^s=gcnew Customer();
				 s->m_CompnayName=readEmpFile->ReadString();
				 s->m_IDNumber=readEmpFile->ReadString();
				 s->m_Time=readEmpFile->ReadString();
				 cus->Add(s);                             
			 }
			 readEmpFile->Close();   

			 //重写文件
			 if(!Directory::Exists("F:\\CusYumo"))
				 Directory::CreateDirectory("F:\\CusYumo");
			 FileStream ^wriFile=gcnew FileStream("F:\\CusYumo\\Customer.dat",FileMode::Create);
			 WriEmpFile= gcnew BinaryWriter(wriFile);
			 Customer^ q;
			 for each( q in cus){
				 if(q->m_CompnayName!=comboBox4->Text)
				 {		 
					 WriEmpFile->Write(q->m_CompnayName);
					 WriEmpFile->Write(q->m_IDNumber);
					 WriEmpFile->Write(q->m_Time);
				 }

			 }
			 WriEmpFile->Close();
			 MessageBox::Show("订单取消");
			 listView1->Items->Clear();
		 }

//tabpage6
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 //this->Close();
			// this->Mainmenu->Close();
             Application::Exit();
		 }





 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void Mainmenu_Load(System::Object^  sender, System::EventArgs^  e) {
 }
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			// tabControl1->SelectedIndex=1;
			 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void tabPage1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 								//panel15->Hide();
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel9_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void panel7_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void panel10_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel5_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void dataRepeater1_CurrentItemIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel11_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void panel12_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }

};
}
