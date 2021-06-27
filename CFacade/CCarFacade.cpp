
#include "CCarFacade.hpp"
#include "iostream"

void CCarFacade::operation()
{
   std::cout << "operation:" << std::endl;
   mCarIgnition.operation();
   mCarBuster.operation();
   mCarStart.operation();
   mCarMove.operation();
}

CCarFacade::CCarFacade()
:  mCarBuster()
   , mCarStart()
   , mCarMove()
   , mCarIgnition()
{
}

CCarFacade::~CCarFacade()
{
}