#include "CConcreteAdapter.hpp"

CConcreteAdapter::CConcreteAdapter()
   : mAdaptee()
{
}

void CConcreteAdapter::operation()
{
   mAdaptee.adapteeOperation();
}
