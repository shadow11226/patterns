#pragma once

#include <memory>

class IText
{
public:
   IText()
   {}

   ~IText()
   {}

   using IPtr = std::shared_ptr<IText>;

   virtual void add(const IPtr& ptr) {};

   virtual void remove(const IPtr& ptr) {};

   virtual void print() = 0;
};