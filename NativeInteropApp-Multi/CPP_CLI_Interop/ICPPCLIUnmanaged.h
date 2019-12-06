#pragma once

#include "Exports.h"

class CPPCLI_API ICPPCLIUnmanaged
{
public:
   static ICPPCLIUnmanaged* CreateObject();

   virtual void Show() = 0;
   virtual void Hide() = 0;
   virtual void SetNumber( int Number ) = 0;
};