namespace QQ2013Skin
{
    partial class CheckBoxEx
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
            this.label = new System.Windows.Forms.Label();
            this.btn_tick_check = new QQ2013Skin.ButtonEx();
            this.btn_check = new QQ2013Skin.ButtonEx();
            this.SuspendLayout();
            // 
            // label
            // 
            this.label.AutoSize = true;
            this.label.Font = new System.Drawing.Font("幼圆", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label.ForeColor = System.Drawing.Color.LightSkyBlue;
            this.label.Location = new System.Drawing.Point(22, 6);
            this.label.Name = "label";
            this.label.Size = new System.Drawing.Size(44, 12);
            this.label.TabIndex = 1;
            this.label.Text = "管理员";
            this.label.Click += new System.EventHandler(this.label_Click);
            // 
            // btn_tick_check
            // 
            this.btn_tick_check.BackColor = System.Drawing.Color.Transparent;
            this.btn_tick_check.BackgroundImage = global::QQ2013Skin.Properties.Resources.checkbox_tick_highlight1;
            this.btn_tick_check.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btn_tick_check.DownImage = global::QQ2013Skin.Properties.Resources.checkbox_tick_pushed;
            this.btn_tick_check.HoverImage = global::QQ2013Skin.Properties.Resources.checkbox_tick_highlight;
            this.btn_tick_check.Location = new System.Drawing.Point(4, 3);
            this.btn_tick_check.Margin = new System.Windows.Forms.Padding(0);
            this.btn_tick_check.MyFont = new System.Drawing.Font("微软雅黑", 9F);
            this.btn_tick_check.MySize = new System.Drawing.Size(0, 0);
            this.btn_tick_check.MyText = null;
            this.btn_tick_check.Name = "btn_tick_check";
            this.btn_tick_check.NormalImage = global::QQ2013Skin.Properties.Resources.checkbox_tick_highlight1;
            this.btn_tick_check.Size = new System.Drawing.Size(15, 15);
            this.btn_tick_check.TabIndex = 2;
            this.btn_tick_check.Click += new System.EventHandler(this.btn_tick_check_Click);
            // 
            // btn_check
            // 
            this.btn_check.BackColor = System.Drawing.Color.Transparent;
            this.btn_check.BackgroundImage = global::QQ2013Skin.Properties.Resources.checkbox_normal1;
            this.btn_check.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btn_check.DownImage = global::QQ2013Skin.Properties.Resources.checkbox_pushed;
            this.btn_check.HoverImage = global::QQ2013Skin.Properties.Resources.checkbox_hightlight;
            this.btn_check.Location = new System.Drawing.Point(4, 3);
            this.btn_check.Margin = new System.Windows.Forms.Padding(0);
            this.btn_check.MyFont = new System.Drawing.Font("微软雅黑", 9F);
            this.btn_check.MySize = new System.Drawing.Size(0, 0);
            this.btn_check.MyText = null;
            this.btn_check.Name = "btn_check";
            this.btn_check.NormalImage = global::QQ2013Skin.Properties.Resources.checkbox_normal1;
            this.btn_check.Size = new System.Drawing.Size(15, 15);
            this.btn_check.TabIndex = 0;
            this.btn_check.Click += new System.EventHandler(this.btn_check_Click);
            // 
            // CheckBoxEx
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.btn_tick_check);
            this.Controls.Add(this.btn_check);
            this.Controls.Add(this.label);
            this.ForeColor = System.Drawing.SystemColors.ButtonShadow;
            this.Name = "CheckBoxEx";
            this.Size = new System.Drawing.Size(84, 22);
            this.Load += new System.EventHandler(this.CheckBoxEx_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private ButtonEx btn_check;
        private System.Windows.Forms.Label label;
        private ButtonEx btn_tick_check;
        private bool flag;

    }
}
