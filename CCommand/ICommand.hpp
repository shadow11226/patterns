#ifndef ICommand_HPP
#define ICommand_HPP

#include "CDocument.hpp"

class ICommand
{
public:

   ICommand(/* args */)
   {}

   virtual ~ICommand()
   {}

   virtual void execute() = 0;

   virtual void unexecute() = 0;

   void setDocument(CDocument* doc)
   {
      mDoc = doc;
   }

protected:

   CDocument* mDoc;
};

#endif