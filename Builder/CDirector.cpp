#include "CDirector.hpp"

void CDirector::setBuilder(CAbstractBuilder* builder)
{
   mBuilder = builder;
}

std::shared_ptr<CProduct> CDirector::getProduct()
{
   return mBuilder->getProduct();
}

CDirector::CDirector(/* args */)
   : mBuilder()
{
}

CDirector::~CDirector()
{
}
