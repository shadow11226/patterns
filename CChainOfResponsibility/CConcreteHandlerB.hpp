#include "CBaseHandler.hpp"

class CConcreteHandlerB : public CBaseHandler
{
public:
   CConcreteHandlerB(/* args */);
   ~CConcreteHandlerB();

   void handleRequest(const SRequest& request);
};

