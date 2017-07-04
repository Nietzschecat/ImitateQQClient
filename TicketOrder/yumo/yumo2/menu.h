#pragma once

namespace yumo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// menu 摘要
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripContainer^  toolStripContainer1;
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
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->toolStripContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(265, 172);
			this->toolStripContainer1->LeftToolStripPanelVisible = false;
			this->toolStripContainer1->Location = System::Drawing::Point(222, 89);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->RightToolStripPanelVisible = false;
			this->toolStripContainer1->Size = System::Drawing::Size(265, 197);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			this->toolStripContainer1->TopToolStripPanelVisible = false;
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 429);
			this->Controls->Add(this->toolStripContainer1);
			this->Name = L"menu";
			this->Text = L"menu";
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
