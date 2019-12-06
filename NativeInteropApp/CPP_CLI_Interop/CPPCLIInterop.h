#pragma once

#include "ICPPCLIUnmanaged.h"
#include <msclr/auto_gcroot.h>

using namespace System::Windows::Forms;
using namespace CSharp;

class CPPCLIInterop : public ICPPCLIUnmanaged
{
public:
   CPPCLIInterop();
   ~CPPCLIInterop();

   virtual void Show();
   virtual void Hide();
   virtual void SetNumber( int Number );

private:
   msclr::auto_gcroot<AboutForm^> pForm1;
};