
#include "CInvoker.hpp"
#include "CInsertCommand.hpp"
#include "CRemoveCommand.hpp"


CInvoker::CInvoker(/* args */)
: mDoneDocument()
, mDoc()
, mCommand()
{
}

CInvoker::~CInvoker()
{
}

void CInvoker::insert(int line, const string& str)
{
   mCommand = new CInsertCommand(line, str);
   mCommand->setDocument(&mDoc);
   mCommand->execute();
   mDoneDocument.push_back(mCommand);
}

void CInvoker::undo()
{
   if(mDoneDocument.empty())
   {
      cout<<"There is nothing undo\n";
   }
   else
   {
      mCommand = mDoneDocument.back();
      mDoneDocument.pop_back();
      mCommand->unexecute();
      delete mCommand;

   }
}

void CInvoker::show()
{
   mDoc.show();
}