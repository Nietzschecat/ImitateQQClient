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
    public partial class CheckBoxEx : UserControl
    {
        public CheckBoxEx()
        {
            InitializeComponent();
        }
        public bool Checked
        {
            set;
            get;
        }

        public string LText
        {
            set;
            get;
        }
        private void btn_check_Click(object sender, EventArgs e)
        {
            this.btn_tick_check.Visible = true;
            flag = true;
            this.btn_tick_check.BringToFront();
        }

        private void CheckBoxEx_Load(object sender, EventArgs e)
        {
            Checked = false;
            label.Text = this.LText;
            if (Checked)
            {
                this.btn_check.Visible = false;
                this.btn_check.BringToFront();
            }
            else
            {
                this.btn_tick_check.Visible = false;
                this.btn_tick_check.BringToFront();
            }
        }

        private void btn_tick_check_Click(object sender, EventArgs e)
        {
            this.btn_check.Visible = true;
            this.btn_check.BringToFront();
        }

        private void label_Click(object sender, EventArgs e)
        {

        }
    }
}
