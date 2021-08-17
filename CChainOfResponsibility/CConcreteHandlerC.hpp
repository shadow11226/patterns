#include "CBaseHandler.hpp"

class CConcreteHandlerC : public CBaseHandler
{
public:
   CConcreteHandlerC(/* args */);
   ~CConcreteHandlerC();

   void handleRequest(const SRequest& request);
};