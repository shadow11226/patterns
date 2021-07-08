#ifndef CInvoker_HPP
#define CInvoker_HPP

#include "ICommand.hpp"

class CInvoker
{
public:

   CInvoker(/* args */)
   {}

   ~CInvoker()
   {}

   virtual void execute() = 0;

private:
   /* data */
};


#endif