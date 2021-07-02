#include "CAbstractBuilder.hpp"

void CAbstractBuilder::createProduct()
{
   mProduct.reset(new CProduct());
}

std::shared_ptr<CProduct> CAbstractBuilder::getProduct()
{
   return mProduct;
}

CAbstractBuilder::CAbstractBuilder(/* args */)
   : mProduct()
{
}

CAbstractBuilder::~CAbstractBuilder()
{
}
