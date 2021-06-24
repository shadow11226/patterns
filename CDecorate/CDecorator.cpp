#include "CDecorator.hpp"
#include "iostream"

CDecorator::CDecorator()
   : IInterface()
   , mComponent()
{
}

CDecorator::CDecorator(std::shared_ptr<IInterface> component)
   : IInterface()
   , mComponent(component)
{
}

CDecorator::~CDecorator()
{
}

void CDecorator::printText(const char* str)
{
   if(nullptr != mComponent)
   {
      mComponent->printText(str);
      std::cout << std::endl;
   }
}