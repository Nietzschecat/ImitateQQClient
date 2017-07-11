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

    public partial class MovePanel : Panel
    {
        public MovePanel()
        {
            InitializeComponent();
        }
        private bool moveFlag = false;//窗体是否移动
        private Point currentPoint;//记录窗体的位置
        private void MovePanel_MouseDown(object sender, MouseEventArgs e)
        {
            currentPoint = new Point();
            Trace.WriteLine(e.Location);
            if (e.Button == MouseButtons.Left)
            {
                currentPoint = new Point(MousePosition.X, MousePosition.Y);
                currentPoint = this.Parent.PointToClient(currentPoint);
               // Trace.WriteLine(currentPoint);
                moveFlag = true;//开始移动
            }
        }

        private void MovePanel_MouseUp(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)//按下的是鼠标左键
            {
                moveFlag = false;//停止移动
            }
        }
        private Point PointSubtraction(Point pt1, Point pt2)
        {
            Point point = new Point();
            point.X = pt1.X - pt2.X;
            point.Y = pt1.Y - pt2.Y;
            return point;
        }
        private void MovePanel_MouseMove(object sender, MouseEventArgs e)
        {
            if (moveFlag)
            {
                Point mousePos = Control.MousePosition;
                Point offset = PointSubtraction(Control.MousePosition, currentPoint);
                //offset.X = Control.MousePosition.X - currentPoint.X;
                //offset.Y = Control.MousePosition.Y - currentPoint.Y;
                mousePos.Offset(-currentPoint.X, -currentPoint.Y);
                Point p = this.Parent.Location;
                p.Offset(offset);
                this.Parent.Location = mousePos;//= PointSubtraction(p, offset);
                //Trace.WriteLine(mousePos);
                //moveFlag = false;//停止移动
            }
        }
    }
}
