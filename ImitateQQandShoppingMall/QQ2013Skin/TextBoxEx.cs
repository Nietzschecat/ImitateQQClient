using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Diagnostics;

namespace QQ2013Skin
{

    public partial class TextBoxEx : UserControl
    {
        public TextBoxEx()
        {
            InitializeComponent();
        }
        #region 成员属性
        [Description("编辑框右边的图标")]
        public Image Icon
        {
            set;
            get;
        }
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
        #endregion
        private void MyTextBox_Load(object sender, EventArgs e)
        {
            if (Icon != null)
            {
                this.btn_icon.BackgroundImage = Icon;
            }
        }

        #region 鼠标消息

        private void textBox_MouseHover(object sender, EventArgs e)
        {
            if (this.HoverImage != null)
            {
                this.BackgroundImage = HoverImage;
            }
        }

        private void textBox_MouseDown(object sender, MouseEventArgs e)
        {
            if (this.DownImage != null)
            {
                this.BackgroundImage = DownImage;
            }
        }

        private void textBox_MouseLeave(object sender, EventArgs e)
        {
            //foreach (Control c in this.Controls)//遍历控件
            //{
            //    if (c.Capture)//判断是否有焦点
            //    {
            //        MessageBox.Show(c.Name);
            //        return;
            //    }
            //}
            //Trace.WriteLine();
            Point point = this.btn_icon.PointToClient(Control.MousePosition);
            if (!this.btn_icon.ClientRectangle.Contains(point))
            {
                this.BackgroundImage = NormalImage;
            }

        }

        private void btn_icon_MouseDown(object sender, MouseEventArgs e)
        {
            // textBox_MouseDown(sender, e);
        }

        private void btn_icon_MouseHover(object sender, EventArgs e)
        {
            textBox_MouseHover(sender, e);
        }

        private void btn_icon_MouseLeave(object sender, EventArgs e)
        {
            Point point = this.textBox.PointToClient(Control.MousePosition);
            if (!this.textBox.ClientRectangle.Contains(point))
            {
                this.BackgroundImage = NormalImage;
            }
        }
        #endregion
    }
}
