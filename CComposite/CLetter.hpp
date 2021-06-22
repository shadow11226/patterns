#pragma once

#include "IText.hpp"

class CLetter :
   public IText
{
public:

   CLetter(char symbol)
      : mSymbol(symbol)
   {
   }

   void print() override;

private:
   char mSymbol;
};

