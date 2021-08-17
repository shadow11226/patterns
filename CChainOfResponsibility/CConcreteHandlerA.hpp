#ifndef CCONCRETEHANDLER_HPP
#define CCONCRETEHANDLER_HPP

#include "CBaseHandler.hpp"

class CConcreteHandlerA : public CBaseHandler
{
public:
   CConcreteHandlerA(/* args */);
   ~CConcreteHandlerA();

   void handleRequest(const SRequest& request) override;
};

#endif