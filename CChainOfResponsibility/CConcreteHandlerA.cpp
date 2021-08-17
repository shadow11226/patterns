
#include "CConcreteHandlerA.hpp"
#include "iostream"

CConcreteHandlerA::CConcreteHandlerA(/* args */)
   : CBaseHandler()
{
}

CConcreteHandlerA::~CConcreteHandlerA()
{
}

void CConcreteHandlerA::handleRequest(const SRequest& request)
{
   if(request.mType == 1)
   {
      std::cout << "CConcreteHandlerA " << request.mType << std::endl;
   }
   else
   {
      CBaseHandler::handleRequest(request);
   }
}