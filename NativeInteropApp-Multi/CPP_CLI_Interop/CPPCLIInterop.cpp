#include "stdafx.h"
#include "CPPCLIInterop.h"

using namespace System::Windows::Forms;
using namespace CSharp;

CPPCLIInterop::CPPCLIInterop()
{
   pForm1 = gcnew AboutForm();
//   pForm1->Text = "Test";

}

CPPCLIInterop::~CPPCLIInterop() 
{
}

void CPPCLIInterop::Show()
{

	auto obj = gcnew InteropClass();
	auto result = obj->Test(5, 6);


   pForm1->Show();
}

void CPPCLIInterop::SetNumber( int Number )
{
   pForm1->SetNumber( Number );
}


void CPPCLIInterop::Hide()
{
   pForm1->Hide();
}
