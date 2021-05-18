#pragma once

#include "IInterfaceImpl.hpp"

class CConcreteEssenceFirst : public IInterfaceImpl
{
public:

   CConcreteEssenceFirst();

   void operation() override;
};

