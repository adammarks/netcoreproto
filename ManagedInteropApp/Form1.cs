﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using CPPCLIInteropLibrary;

namespace ManagedInteropApp
{
   public partial class Form1 : Form
   {
      public Form1()
      {
         InitializeComponent();
      }

      private void button1_Click(object sender, EventArgs e)
      {
         var calc = new Class1();
         textBox1.Text = calc.Calculate(3, 4).ToString();
      }
   }
}
