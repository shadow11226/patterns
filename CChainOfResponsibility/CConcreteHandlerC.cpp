#include "CConcreteHandlerC.hpp"
#include "iostream"

CConcreteHandlerC::CConcreteHandlerC(/* args */)
: CBaseHandler()
{
}

CConcreteHandlerC::~CConcreteHandlerC()
{
}

void CConcreteHandlerC::handleRequest(const SRequest& request)
{
   if(request.mType == 3)
   {
      std::cout << "CConcreteHandlerC " << request.mType << std::endl;
   }
   else
   {
      CBaseHandler::handleRequest(request);
   }
}