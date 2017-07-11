using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Drawing.Drawing2D;
using System.Runtime.InteropServices;
using System.Diagnostics;

namespace QQ2013Skin
{
    /// <summary>
    /// 编码日期：2013-11-08
    /// 编 码 人：许志恒
    /// 联系QQ：519872449  
    /// Email：yc_xzh@163.com  
    /// Blogs：http://blog.csdn.net/xzh1995
    /// </summary>
    public partial class Login : BorderRadius
    {
        #region 窗体边框阴影效果变量申明
        const int CS_DropSHADOW = 0x20000;
        const int GCL_STYLE = (-26);
        //声明Win32 API
        [DllImport("user32.dll", CharSet = CharSet.Auto)]
        public static extern int SetClassLong(IntPtr hwnd, int nIndex, int dwNewLong);
        [DllImport("user32.dll", CharSet = CharSet.Auto)]
        public static extern int GetClassLong(IntPtr hwnd, int nIndex);
        #endregion
        public Login()
        {
            InitializeComponent();
           // SetClassLong(this.Handle, GCL_STYLE, GetClassLong(this.Handle, GCL_STYLE) | CS_DropSHADOW); //API函数加载，实现窗体边框阴影效果
        }

        private void Login_Load(object sender, EventArgs e)
        {
            //this.pb_head.Controls.Add(this.mpb_status);
           // this.myButton1.Parent = this.pictureBox1;
            //for (int i = 0; i < 5; i++)
            //{
            //    myComboBox1.Items.Add(i);
            //}
            
        }
        
        GraphicsPath CreateRoundedRectanglePath(Rectangle rect, int cornerRadius)
        {
            GraphicsPath Rect = new GraphicsPath();
            Rect.AddArc(rect.X, rect.Y, cornerRadius * 2, cornerRadius * 2, 180, 90);
            Rect.AddArc(rect.X + rect.Width - cornerRadius * 2, rect.Y, cornerRadius * 2, cornerRadius * 2, 270, 90);
            Rect.AddArc(rect.X + rect.Width - cornerRadius * 2, rect.Y + rect.Height - cornerRadius * 2, cornerRadius * 2, cornerRadius * 2, 0, 90);
            Rect.CloseFigure();
            return Rect;
        }

        private void btn_close_Click(object sender, EventArgs e)
        {
            this.Close();
        }
        protected override void WndProc(ref Message m)
        {

            if (m.Msg == 0x0014) // 禁掉清除背景消息

                return;

            base.WndProc(ref m);

        }

  

        private void movePanel_Paint(object sender, PaintEventArgs e)
        {

        }

        private void checkBoxEx1_Load(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
        private void myButton5_Click(object sender, EventArgs e)
        {
            ChildForm2 f2 = new ChildForm2();
            ChildForm1 f3 = new ChildForm1();
            f2.Show();
            f3.Show();
        }
    }
}
