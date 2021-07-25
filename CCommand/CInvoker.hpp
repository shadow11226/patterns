#ifndef CInvoker_HPP
#define CInvoker_HPP

#include "ICommand.hpp"
#include "CDocument.hpp"
#include "vector"
class CInvoker
{
public:

   CInvoker(/* args */);

   ~CInvoker();

   void insert(int line, const string& str);

   void undo();

   void show();

private:
   
   vector<ICommand*> mDoneDocument;
   CDocument mDoc;
   ICommand* mCommand;
};


#endif