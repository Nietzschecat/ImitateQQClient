namespace QQ2013Skin
{
    partial class Login
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.TextBox textBox1;
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Login));
            this.movePanel = new QQ2013Skin.MovePanel();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.checkBoxEx1 = new QQ2013Skin.CheckBoxEx();
            this.myButton5 = new QQ2013Skin.ButtonEx();
            this.panel_head = new System.Windows.Forms.Panel();
            this.mpb_status = new QQ2013Skin.PictureBoxEx();
            textBox1 = new System.Windows.Forms.TextBox();
            this.movePanel.SuspendLayout();
            this.panel_head.SuspendLayout();
            this.SuspendLayout();
            // 
            // btn_close
            // 
            this.btn_close.BackgroundImage = null;
            this.btn_close.Location = new System.Drawing.Point(402, -1);
            this.btn_close.Size = new System.Drawing.Size(29, 26);
            this.btn_close.Click += new System.EventHandler(this.btn_close_Click);
            // 
            // btn_min
            // 
            this.btn_min.BackgroundImage = null;
            this.btn_min.Location = new System.Drawing.Point(-1, -1);
            this.btn_min.Size = new System.Drawing.Size(26, 26);
            // 
            // btn_set
            // 
            this.btn_set.BackgroundImage = null;
            this.btn_set.HoverImage = null;
            this.btn_set.Location = new System.Drawing.Point(191, -1);
            this.btn_set.Size = new System.Drawing.Size(32, 26);
            // 
            // textBox1
            // 
            textBox1.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            textBox1.BorderStyle = System.Windows.Forms.BorderStyle.None;
            textBox1.Font = new System.Drawing.Font("宋体", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            textBox1.Location = new System.Drawing.Point(147, 262);
            textBox1.Name = "textBox1";
            textBox1.Size = new System.Drawing.Size(165, 22);
            textBox1.TabIndex = 17;
            textBox1.UseSystemPasswordChar = true;
            // 
            // movePanel
            // 
            this.movePanel.BackColor = System.Drawing.Color.Transparent;
            this.movePanel.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.movePanel.Controls.Add(textBox1);
            this.movePanel.Controls.Add(this.comboBox1);
            this.movePanel.Controls.Add(this.checkBoxEx1);
            this.movePanel.Controls.Add(this.myButton5);
            this.movePanel.Controls.Add(this.panel_head);
            this.movePanel.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.movePanel.ForeColor = System.Drawing.Color.Transparent;
            this.movePanel.Location = new System.Drawing.Point(-1, -1);
            this.movePanel.Name = "movePanel";
            this.movePanel.Size = new System.Drawing.Size(432, 335);
            this.movePanel.TabIndex = 3;
            this.movePanel.Paint += new System.Windows.Forms.PaintEventHandler(this.movePanel_Paint);
            // 
            // comboBox1
            // 
            this.comboBox1.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.comboBox1.Font = new System.Drawing.Font("宋体", 10.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.comboBox1.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(147, 225);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(165, 22);
            this.comboBox1.Sorted = true;
            this.comboBox1.TabIndex = 16;
            this.comboBox1.SelectedIndexChanged += new System.EventHandler(this.comboBox1_SelectedIndexChanged);
            // 
            // checkBoxEx1
            // 
            this.checkBoxEx1.Checked = false;
            this.checkBoxEx1.Font = new System.Drawing.Font("宋体", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.checkBoxEx1.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.checkBoxEx1.Location = new System.Drawing.Point(331, 266);
            this.checkBoxEx1.LText = "管理员";
            this.checkBoxEx1.Name = "checkBoxEx1";
            this.checkBoxEx1.Size = new System.Drawing.Size(88, 22);
            this.checkBoxEx1.TabIndex = 12;
            this.checkBoxEx1.Load += new System.EventHandler(this.checkBoxEx1_Load);
            // 
            // myButton5
            // 
            this.myButton5.BackColor = System.Drawing.Color.Transparent;
            this.myButton5.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("myButton5.BackgroundImage")));
            this.myButton5.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.myButton5.DownImage = global::QQ2013Skin.Properties.Resources.corner_right_normal_down;
            this.myButton5.HoverImage = global::QQ2013Skin.Properties.Resources.corner_right_hover;
            this.myButton5.Location = new System.Drawing.Point(350, 225);
            this.myButton5.Margin = new System.Windows.Forms.Padding(0);
            this.myButton5.MyFont = new System.Drawing.Font("微软雅黑", 9F);
            this.myButton5.MySize = new System.Drawing.Size(0, 0);
            this.myButton5.MyText = null;
            this.myButton5.Name = "myButton5";
            this.myButton5.NormalImage = ((System.Drawing.Image)(resources.GetObject("myButton5.NormalImage")));
            this.myButton5.Size = new System.Drawing.Size(38, 38);
            this.myButton5.TabIndex = 9;
            this.myButton5.Click += new System.EventHandler(this.myButton5_Click);
            // 
            // panel_head
            // 
            this.panel_head.BackgroundImage = global::QQ2013Skin.Properties.Resources.r;
            this.panel_head.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.panel_head.Controls.Add(this.mpb_status);
            this.panel_head.Location = new System.Drawing.Point(45, 217);
            this.panel_head.Name = "panel_head";
            this.panel_head.Size = new System.Drawing.Size(82, 78);
            this.panel_head.TabIndex = 7;
            // 
            // mpb_status
            // 
            this.mpb_status.BackColor = System.Drawing.Color.Transparent;
            this.mpb_status.DownImage = ((System.Drawing.Image)(resources.GetObject("mpb_status.DownImage")));
            this.mpb_status.HoverImage = null;
            this.mpb_status.Image = ((System.Drawing.Image)(resources.GetObject("mpb_status.Image")));
            this.mpb_status.Location = new System.Drawing.Point(69, 65);
            this.mpb_status.Name = "mpb_status";
            this.mpb_status.NormalImage = null;
            this.mpb_status.Size = new System.Drawing.Size(13, 13);
            this.mpb_status.TabIndex = 5;
            // 
            // Login
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.ClientSize = new System.Drawing.Size(430, 332);
            this.ControlBox = false;
            this.Controls.Add(this.movePanel);
            this.Name = "Login";
            this.Text = "Login";
            this.Load += new System.EventHandler(this.Login_Load);
            this.Controls.SetChildIndex(this.btn_set, 0);
            this.Controls.SetChildIndex(this.movePanel, 0);
            this.Controls.SetChildIndex(this.btn_close, 0);
            this.Controls.SetChildIndex(this.btn_min, 0);
            this.movePanel.ResumeLayout(false);
            this.movePanel.PerformLayout();
            this.panel_head.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private MovePanel movePanel;
        private  PictureBoxEx mpb_status;
        private System.Windows.Forms.Panel panel_head;
        private ButtonEx myButton5;
        private CheckBoxEx checkBoxEx1;
        private System.Windows.Forms.ComboBox comboBox1;


    }
}