#include "iostream"

#include "CBaseHandler.hpp"
#include "CConcreteHandlerA.hpp"
#include "CConcreteHandlerB.hpp"
#include "CConcreteHandlerC.hpp"

using namespace std;

int main()
{
   cout << "working Chain of responsiiblity" << endl;

  CBaseHandler* a = new CConcreteHandlerA();
  CBaseHandler* b = new CConcreteHandlerB();
   CBaseHandler* c = new CConcreteHandlerC();

   a->setHext(b);
   b->setHext(c);

   a->handleRequest(SRequest(1));
   b->handleRequest(SRequest(2));
   c->handleRequest(SRequest(3));

   return 0;
}