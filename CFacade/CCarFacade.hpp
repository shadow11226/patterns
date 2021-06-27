#ifndef CCARFACADE_HPP
#define CCARFACADE_HPP

#include "CCarBuster.cpp"
#include "CCarStart.cpp"
#include "CCarMove.cpp"
#include "CCarIgnition.cpp"

class CCarFacade
{
public:

   CCarFacade();
   ~CCarFacade();

   void operation();

private:

   CCarBuster mCarBuster;
   CCarStart mCarStart;
   CCarMove mCarMove;
   CCarIgnition mCarIgnition;
};


#endif