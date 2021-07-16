#include "CInsertCommand.hpp"

CInsertCommand::CInsertCommand(int line, const string& str)
: ICommand()
, mLine(line)
, mStr(str)
{
}

CInsertCommand::~CInsertCommand()
{
}

void CInsertCommand::execute()
{
   mDoc->insert(mLine, mStr);
}

void CInsertCommand::unexecute()
{
   mDoc->remove(mLine);
}