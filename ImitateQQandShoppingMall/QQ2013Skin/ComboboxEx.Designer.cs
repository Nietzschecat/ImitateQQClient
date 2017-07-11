namespace QQ2013Skin
{
    partial class ComboboxEx
    {
        /// <summary> 
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary> 
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region 组件设计器生成的代码

        /// <summary> 
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.textBox = new System.Windows.Forms.TextBox();
            this.btn_icon = new QQ2013Skin.ButtonEx();
            this.SuspendLayout();
            // 
            // textBox
            // 
            this.textBox.Font = new System.Drawing.Font("微软雅黑", 10.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.textBox.Location = new System.Drawing.Point(1, 1);
            this.textBox.Name = "textBox";
            this.textBox.Size = new System.Drawing.Size(185, 26);
            this.textBox.TabIndex = 0;
            this.textBox.MouseDown += new System.Windows.Forms.MouseEventHandler(this.textBox_MouseDown);
            this.textBox.MouseLeave += new System.EventHandler(this.textBox_MouseLeave);
            this.textBox.MouseHover += new System.EventHandler(this.textBox_MouseHover);
            // 
            // btn_icon
            // 
            this.btn_icon.BackColor = System.Drawing.SystemColors.Window;
            this.btn_icon.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btn_icon.DownImage = global::QQ2013Skin.Properties.Resources.login_inputbtn_down;
            this.btn_icon.HoverImage = global::QQ2013Skin.Properties.Resources.login_inputbtn_highlight;
            this.btn_icon.Location = new System.Drawing.Point(162, 1);
            this.btn_icon.Margin = new System.Windows.Forms.Padding(0);
            this.btn_icon.MyFont = new System.Drawing.Font("微软雅黑", 9F);
            this.btn_icon.MySize = new System.Drawing.Size(0, 0);
            this.btn_icon.MyText = null;
            this.btn_icon.Name = "btn_icon";
            this.btn_icon.NormalImage = null;
            this.btn_icon.Size = new System.Drawing.Size(24, 24);
            this.btn_icon.TabIndex = 1;
            this.btn_icon.MouseLeave += new System.EventHandler(this.btn_icon_MouseLeave);
            this.btn_icon.MouseHover += new System.EventHandler(this.btn_icon_MouseHover);
            // 
            // ComboboxEx
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.btn_icon);
            this.Controls.Add(this.textBox);
            this.Name = "ComboboxEx";
            this.Size = new System.Drawing.Size(187, 28);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBox;
        private ButtonEx btn_icon;
    }
}
