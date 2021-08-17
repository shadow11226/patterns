#include "CBaseHandler.hpp"
#include "iostream"

CBaseHandler::CBaseHandler()
   : mHandler()
{
}

void CBaseHandler::handleRequest(const SRequest& request)
{
   if(mHandler != nullptr)
   {
      mHandler->handleRequest(request);
   }
   else
   {
      std::cout << "unknown request " << request.mType << std::endl;
   }
}

void CBaseHandler::setHext(CBaseHandler* handler)
{
   mHandler = handler;
}