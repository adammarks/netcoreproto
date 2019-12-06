using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CSharp
{
   public partial class AboutForm : Form
   {
      public AboutForm()
      {
         InitializeComponent();
      }

      public void SetNumber( int Number )
      {
         textBox1.Text = Number.ToString();
      }

      private void label1_Click( object sender, EventArgs e )
      {

      }
   }
}
