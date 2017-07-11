namespace QQ2013Skin
{
    partial class BorderRadius
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(BorderRadius));
            this.btn_set = new QQ2013Skin.ButtonEx();
            this.btn_close = new QQ2013Skin.ButtonEx();
            this.btn_min = new QQ2013Skin.ButtonEx();
            this.SuspendLayout();
            // 
            // btn_set
            // 
            this.btn_set.BackColor = System.Drawing.Color.Transparent;
            this.btn_set.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btn_set.DownImage = global::QQ2013Skin.Properties.Resources.btn_set_press;
            this.btn_set.HoverImage = global::QQ2013Skin.Properties.Resources.btn_set_hover;
            this.btn_set.Location = new System.Drawing.Point(270, -1);
            this.btn_set.Margin = new System.Windows.Forms.Padding(0);
            this.btn_set.MyFont = new System.Drawing.Font("微软雅黑", 9F);
            this.btn_set.MySize = new System.Drawing.Size(0, 0);
            this.btn_set.MyText = null;
            this.btn_set.Name = "btn_set";
            //this.btn_set.NormalImage = global::QQ2013Skin.Properties.Resources.btn_set_normal;
            this.btn_set.Size = new System.Drawing.Size(28, 20);
            this.btn_set.TabIndex = 3;
            // 
            // btn_close
            // 
            this.btn_close.BackColor = System.Drawing.Color.Transparent;
            this.btn_close.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btn_close.DownImage = ((System.Drawing.Image)(resources.GetObject("btn_close.DownImage")));
            this.btn_close.HoverImage = ((System.Drawing.Image)(resources.GetObject("btn_close.HoverImage")));
            this.btn_close.Location = new System.Drawing.Point(329, -1);
            this.btn_close.Margin = new System.Windows.Forms.Padding(0);
            this.btn_close.MyFont = new System.Drawing.Font("微软雅黑", 9F);
            this.btn_close.MySize = new System.Drawing.Size(0, 0);
            this.btn_close.MyText = null;
            this.btn_close.Name = "btn_close";
           // this.btn_close.NormalImage = ((System.Drawing.Image)(resources.GetObject("btn_close.NormalImage")));
            this.btn_close.Size = new System.Drawing.Size(39, 20);
            this.btn_close.TabIndex = 1;
            this.btn_close.Click += new System.EventHandler(this.btn_close_Click);
            // 
            // btn_min
            // 
            this.btn_min.BackColor = System.Drawing.Color.Transparent;
            this.btn_min.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btn_min.DownImage = global::QQ2013Skin.Properties.Resources.btn_mini_down;
            this.btn_min.HoverImage = global::QQ2013Skin.Properties.Resources.btn_mini_highlight;
            this.btn_min.Location = new System.Drawing.Point(298, -1);
            this.btn_min.Margin = new System.Windows.Forms.Padding(0);
            this.btn_min.MyFont = new System.Drawing.Font("微软雅黑", 9F);
            this.btn_min.MySize = new System.Drawing.Size(0, 0);
            this.btn_min.MyText = null;
            this.btn_min.Name = "btn_min";
            //this.btn_min.NormalImage = global::QQ2013Skin.Properties.Resources.btn_mini_normal;
            this.btn_min.Size = new System.Drawing.Size(28, 20);
            this.btn_min.TabIndex = 2;
            this.btn_min.Click += new System.EventHandler(this.btn_min_Click);
            // 
            // BorderRadius
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(377, 310);
            this.Controls.Add(this.btn_set);
            this.Controls.Add(this.btn_close);
            this.Controls.Add(this.btn_min);
            this.DoubleBuffered = true;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "BorderRadius";
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Show;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "BorderRadius";
            this.ResumeLayout(false);

        }

        #endregion

        public ButtonEx btn_close;
        public ButtonEx btn_min;
        public ButtonEx btn_set;


    }
}