#include "CCompositeText.hpp"

void CCompositeText::add(const IPtr& text)
{
   mList.push_back(text);
}

void CCompositeText::remove(const IPtr& text)
{
   mList.remove(text);
}

void CCompositeText::print()
{
   for (auto& ptr: mList)
   {
      ptr->print();
   }
}