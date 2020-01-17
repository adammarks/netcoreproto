#include "stdafx.h"
#include "ICPPCLIUnmanaged.h"
#include "CPPCLIInterop.h"
#include "..\InteropLibrary\NativeClass.h"

ICPPCLIUnmanaged* ICPPCLIUnmanaged::CreateObject()
{
	NativeClass test;
	auto result = test.Test(1, 2, 3);

   return new CPPCLIInterop();
}