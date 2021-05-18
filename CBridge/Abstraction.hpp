#pragma once

#include "IInterfaceImpl.hpp"

class Abstraction
{
public:

   explicit Abstraction(IInterfaceImpl* impl) : mImpl(impl)
   {
   }

   virtual ~Abstraction()
   {
   }

   void operation()
   {
      mImpl->operation();
   }

protected:

   IInterfaceImpl* mImpl;
};