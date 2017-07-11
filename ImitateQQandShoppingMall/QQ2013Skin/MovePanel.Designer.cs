namespace QQ2013Skin
{
    partial class MovePanel
    {
        /// <summary> 
        /// 必需的设计器变量。
        /// </summary>
        public System.ComponentModel.IContainer components = null;

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
            this.SuspendLayout();
            // 
            // MovePanel
            // 
            //this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            //this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.Name = "MovePanel";
            this.Size = new System.Drawing.Size(148, 148);
            this.MouseDown += new System.Windows.Forms.MouseEventHandler(this.MovePanel_MouseDown);
            this.MouseMove += new System.Windows.Forms.MouseEventHandler(this.MovePanel_MouseMove);
            this.MouseUp += new System.Windows.Forms.MouseEventHandler(this.MovePanel_MouseUp);
            this.ResumeLayout(false);

        }

        #endregion
    }
}
