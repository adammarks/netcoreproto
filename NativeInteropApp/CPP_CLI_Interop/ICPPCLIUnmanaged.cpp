#include "stdafx.h"
#include "ICPPCLIUnmanaged.h"
#include "CPPCLIInterop.h"

ICPPCLIUnmanaged* ICPPCLIUnmanaged::CreateObject()
{
   return new CPPCLIInterop();
}