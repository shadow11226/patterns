#pragma once

#include "CAdaptee.hpp"
#include "IAdapter.hpp"

class CConcreteAdapter :
   public IAdapter
{
public:

   CConcreteAdapter();

   void operation();

private:
   CAdaptee mAdaptee;
};

