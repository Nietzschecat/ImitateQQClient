using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace QQ2013Skin
{

    [DefaultEvent("Click")]
    public partial class ButtonEx : UserControl
    {
        public ButtonEx()
        {
            InitializeComponent();
        }
        #region 成员属性

        [Description("正常时的图片")]
        public Image NormalImage
        {
            set;
            get;
        }

        [Description("鼠标悬浮时的图片")]
        public Image HoverImage
        {
            set;
            get;
        }

        [Description("鼠标按下时的图片")]
        public Image DownImage
        {
            set;
            get;
        }

        [Description("与控件关联的文本")]
        public String MyText
        {
            set;
            get;
        }

        [Description("用于显示控件中文本的字体")]
        public Font MyFont
        {
            set;
            get;
        }

        public Size MySize
        {
            set;
            get;
        }
        #endregion
        protected override void OnCreateControl()
        {
            base.OnCreateControl();
            if (this.NormalImage != null)
            {
                this.BackgroundImage = NormalImage;
            }
        }
        #region 鼠标消息
        
        protected override void OnMouseHover(EventArgs e)
        {
            base.OnMouseHover(e);
            if (this.HoverImage != null)
            {
                this.BackgroundImage = HoverImage;
            }
        }

        protected override void OnMouseLeave(EventArgs e)
        {
            base.OnMouseLeave(e);
            if (this.NormalImage != null)
            {
                this.BackgroundImage = NormalImage;
            }
        }

        protected override void OnMouseDown(MouseEventArgs e)
        {
            base.OnMouseDown(e);
            if (this.DownImage != null)
            {
                this.BackgroundImage = DownImage;
            }
        }
        #endregion
       
        private void InitializeComponent()
        {
            this.SuspendLayout();
            // 
            // MyButton
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Transparent;
            this.BackgroundImage = global::QQ2013Skin.Properties.Resources.button_login_normal;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.DoubleBuffered = true;
            this.Margin = new System.Windows.Forms.Padding(0);
            this.Name = "MyButton";
            this.Size = new System.Drawing.Size(162, 32);
            this.Load += new System.EventHandler(this.MyButton_Load);
            this.ResumeLayout(false);
        }

        protected override void OnPaint(PaintEventArgs e)
        {
            base.OnPaint(e);
            SizeF sizeF = e.Graphics.MeasureString(this.MyText, this.MyFont);
            e.Graphics.DrawString(this.MyText, this.MyFont, Brushes.Black, new Point((this.Width - (int)sizeF.Width) / 2, (this.Height - (int)sizeF.Height) / 2));
        }
        private void MyButton_Load(object sender, EventArgs e)
        {
            //this.MyText = "登      录";
            this.MyFont = new Font("微软雅黑", 9);
            //HoverImage = global::QQ2013Skin.Properties.Resources.button_login_hover;
            //NormalImage = global::QQ2013Skin.Properties.Resources.button_login_normal;
            //DownImage = global::QQ2013Skin.Properties.Resources.button_login_down;
            this.BackgroundImage = NormalImage;
            if (MySize.Width <= 0)
            {
                if (this.BackgroundImage != null)
                {
                    if (HoverImage != null && HoverImage.Size.Width > this.BackgroundImage.Width)
                    {
                        this.Size = HoverImage.Size;
                    }
                    else
                    {
                        this.Size = BackgroundImage.Size;
                    }

                }
            }
            else
            {
                this.Size = MySize;
            }
            
        }
    }
   
}
