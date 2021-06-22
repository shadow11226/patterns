
#include "CCompositeText.hpp"
#include "CLetter.hpp"
#include "IText.hpp"

int main()
{
   CCompositeText sentence;

   IText::IPtr lSpace(new CLetter(' '));
   IText::IPtr lExcl(new CLetter('!'));
   IText::IPtr lComma(new CLetter(','));
   IText::IPtr lNewLine(new CLetter('\n'));
   IText::IPtr lH(new CLetter('H')); // letter 'H'
   IText::IPtr le(new CLetter('e')); // letter 'e'
   IText::IPtr ll(new CLetter('l')); // letter 'l'
   IText::IPtr lo(new CLetter('o')); // letter 'o'
   IText::IPtr lW(new CLetter('W')); // letter 'W'
   IText::IPtr lr(new CLetter('r')); // letter 'r'
   IText::IPtr ld(new CLetter('d')); // letter 'd'
   IText::IPtr li(new CLetter('i')); // letter 'i'


   IText::IPtr wHello(new CCompositeText);
   wHello->add(lH);
   wHello->add(le);
   wHello->add(ll);
   wHello->add(ll);
   wHello->add(lo);

   IText::IPtr wWorld(new CCompositeText); // word "World"
   wWorld->add(lW);
   wWorld->add(lo);
   wWorld->add(lr);
   wWorld->add(ll);
   wWorld->add(ld);

   sentence.add(wHello);
   sentence.add(lComma);
   sentence.add(lSpace);
   sentence.add(wWorld);
   sentence.add(lExcl);
   sentence.add(lNewLine);

   sentence.print();  // prints "Hello, World!\n"

   return 0;
}