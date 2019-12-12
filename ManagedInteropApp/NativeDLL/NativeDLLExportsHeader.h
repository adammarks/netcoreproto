#pragma once


// Provide the storage class specifier (extern for an .exe file, null
// for DLL) and the __declspec specifier (dllimport for .an .exe file,
// dllexport for DLL).
// You must define EXP_STL when compiling the DLL.
// You can now use this header file in both the .exe file and DLL - a
// much safer means of using common declarations than two different
// header files.
// See http://support2.microsoft.com/default.aspx?scid=KB;EN-US;168958

#ifdef NATIVEDLL_EXPORTS
#    define NATIVEDLLDECLSPECIFIER __declspec(dllexport)
#    define NATIVEDLLEXPIMP_TEMPLATE
#else
#    define NATIVEDLLDECLSPECIFIER __declspec(dllimport)
#    define NATIVEDLLEXPIMP_TEMPLATE extern
#endif
