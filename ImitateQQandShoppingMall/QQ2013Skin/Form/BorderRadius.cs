using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Drawing.Drawing2D;
using System.Diagnostics;

namespace QQ2013Skin
{
    public partial class BorderRadius : Form
    {
        public BorderRadius()
        {
            InitializeComponent();
        }
        protected override void OnPaint(PaintEventArgs e)
        {
            base.OnPaint(e);
            GraphicsPath oPath = new GraphicsPath();
            int x = 0;
            int y = 0;
            int w = Width;
            int h = Height;
            int a = 8;
            Graphics g = CreateGraphics();
            oPath.AddArc(x, y, a, a, 180, 90);
            oPath.AddArc(w - a, y, a, a, 270, 90);
            oPath.AddArc(w - a, h - a, a, a, 0, 90);
            oPath.AddArc(x, h - a, a, a, 90, 90);
            oPath.CloseAllFigures();
            Region = new Region(oPath);
            Pen pen = new Pen(Color.Black, 5);
           // e.Graphics.DrawLine(pen, 0, a / 2, 0, this.Height - a);
            //e.Graphics.DrawArc(pen, 0, 0, a, a, 180, 90);
            //e.Graphics.DrawArc(pen, w - a, y, a, a, 270, 90);
            //e.Graphics.DrawArc(pen, w - a / 2, h - a / 2, a / 2, a / 2, 0, 90);
            //e.Graphics.DrawArc(pen, x, h - a, a, a, 90, 90);
        }
        private bool moveFlag = false;//窗体是否移动
        private Point formPoint;//记录窗体的位置
        private void panel_border_MouseDown(object sender, MouseEventArgs e)
        {
            formPoint = new Point();
            Trace.WriteLine(e.Location);
            if (e.Button == MouseButtons.Left)
            {
                formPoint = new Point(-e.X, -e.Y);
                Trace.WriteLine(formPoint);
                moveFlag = true;//开始移动
            }
        }

        private void panel_border_MouseUp(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)//按下的是鼠标左键
            {
                moveFlag = false;//停止移动
            }
        }
        
        private void panel_border_MouseMove(object sender, MouseEventArgs e)
        {
            if (moveFlag)
            {
                Point mousePos = Control.MousePosition;
                mousePos.Offset(formPoint);
                this.Location = mousePos;
                Trace.WriteLine(mousePos);
            }
            
        }

        private void btn_close_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void btn_min_Click(object sender, EventArgs e)
        {
            this.WindowState = FormWindowState.Minimized;
        }
        protected override void WndProc(ref Message m)
        {

            if (m.Msg == 0x0014) // 禁掉清除背景消息

                return;

            base.WndProc(ref m);

        }
    }
}
