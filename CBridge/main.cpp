#include "Abstraction.hpp"
#include "IInterfaceImpl.hpp"
#include "CConcreteEssenceFirst.hpp"
#include "CConcreteEssenceSecond.hpp"

#include "iostream"

int main()
{
   CConcreteEssenceFirst* imFirst = new CConcreteEssenceFirst();
   CConcreteEssenceSecond* imSecond = new CConcreteEssenceSecond();

   Abstraction* absFirst = new Abstraction(imFirst);
   Abstraction* absSecond = new Abstraction(imSecond);

   Abstraction* abs[2] = { absFirst, absSecond };

   for (int i = 0; i < 2; ++i)
   {
      abs[i]->operation();
   }

   std::cin.get();
   return 0;
}