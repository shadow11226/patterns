#include "CRemoveCommand.hpp"

CRemoveCommand::CRemoveCommand(int line, const string& str)
: ICommand()
, mLine(line)
, mStr(str)
{
}

CRemoveCommand::~CRemoveCommand()
{
}

void CRemoveCommand::execute()
{
   mDoc->remove(mLine);
}

void CRemoveCommand::unexecute()
{
   mDoc->insert(mLine, mStr);
}