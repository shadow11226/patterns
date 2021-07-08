#ifndef ICommand_HPP
#define ICommand_HPP

class ICommand
{
public:

   ICommand(/* args */)
   {}

   virtual ~ICommand()
   {}

   virtual void execute() = 0;

private:
   /* data */
};

#endif