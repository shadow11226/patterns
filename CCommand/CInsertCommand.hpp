#ifndef CConcreteCommand_HPP
#define CConcreteCommand_HPP

#include "ICommand.hpp"
#include "string"

class CInsertCommand : public ICommand
{
public:

   CInsertCommand(int line, const string& str);
   ~CInsertCommand();

   void execute() override;

   void unexecute() override;

private:

   int mLine;
   string mStr;
};



#endif