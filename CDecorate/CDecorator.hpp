#ifndef CDECORATOR_HPP
#define  CDECORATOR_HPP

#include "IInterface.hpp"
#include "memory"

class CDecorator : public IInterface
{
public:
   CDecorator();
   CDecorator(std::shared_ptr<IInterface> component);
   ~CDecorator();

   void printText(const char* str) override;

private:

   std::shared_ptr<IInterface> mComponent;
};

#endif