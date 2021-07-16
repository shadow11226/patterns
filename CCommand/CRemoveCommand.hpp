#ifndef CREMOVECOMMAND_HPP
#define CREMOVECOMMAND_HPP

#include "ICommand.hpp"
#include "string"

class CRemoveCommand : public ICommand
{
public:
   CRemoveCommand(int line, const string& str);
   ~CRemoveCommand();

   void execute() override;

   void unexecute() override;

private:
   int mLine;
   string mStr;
};


#endif