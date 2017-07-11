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

    public partial class PictureBoxEx : UserControl
    {
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

        public Image Image
        {
            set;
            get;
        }
        #endregion
        public PictureBoxEx()
        {
            InitializeComponent();
        }
        #region 鼠标消息
        private void pictureBox_MouseLeave(object sender, EventArgs e)
        {
            this.pictureBox.BackgroundImage = defaultImg;
        }

        private void pictureBox_MouseHover(object sender, EventArgs e)
        {
            if (this.HoverImage != null)
            {
                this.pictureBox.BackgroundImage = HoverImage;
            }
        }
      
        private void pictureBox_MouseDown(object sender, MouseEventArgs e)
        {
            if (this.DownImage != null)
            {
                this.pictureBox.BackgroundImage = DownImage;
            }
        }
       
        #endregion
        private Image defaultImg;
        private void MyPicture_Load(object sender, EventArgs e)
        {
            if (this.pictureBox.BackgroundImage != null)
            {
                if (HoverImage != null && HoverImage.Size.Width > this.pictureBox.BackgroundImage.Width)
                {
                    this.Size = HoverImage.Size;
                }
                else
                {
                    this.Size = this.pictureBox.BackgroundImage.Size;
                }

            }
            if (Image != null)
            {
                this.pictureBox.Image = Image;
            }
            defaultImg = this.pictureBox.BackgroundImage;
        }

       

       
    }
}
