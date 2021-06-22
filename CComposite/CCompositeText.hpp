#pragma once

#include "IText.hpp"
#include "list"

class CCompositeText : public IText
{
public:
   CCompositeText()
   {}

   void add(const IPtr& text) override;

   void remove(const IPtr& text) override;

   void print() override;

private:

   std::list<IPtr> mList;
};

