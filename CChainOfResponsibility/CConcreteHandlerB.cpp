#include "CConcreteHandlerB.hpp"
#include "iostream"

CConcreteHandlerB::CConcreteHandlerB(/* args */)
 : CBaseHandler()
{
}

CConcreteHandlerB::~CConcreteHandlerB()
{
}

void CConcreteHandlerB::handleRequest(const SRequest& request)
{
   if(request.mType == 2)
   {
      std::cout << "CConcreteHandlerB " << request.mType << std::endl;
   }
   else
   {
      CBaseHandler::handleRequest(request);
   }
}