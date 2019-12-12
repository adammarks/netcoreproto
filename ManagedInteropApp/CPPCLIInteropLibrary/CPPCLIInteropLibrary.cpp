#include "pch.h"

#include "CPPCLIInteropLibrary.h"
#include "..\\NativeDLL\NativeCalc.h"

using namespace CPPCLIInteropLibrary;

int Class1::Calculate(int a, int b) 
{ 
   auto nativeCalc = new NativeCalc();
   return nativeCalc->CalcNative(a, b);

   //return a + b; 
}



