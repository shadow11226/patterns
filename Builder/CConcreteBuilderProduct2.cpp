#include "CConcreteBuilderProduct2.hpp"
#include "string"

CConcreteBuilderProduct2::CConcreteBuilderProduct2()
   : CAbstractBuilder()
{}

CConcreteBuilderProduct2::~CConcreteBuilderProduct2()
{}

void CConcreteBuilderProduct2::buildName()
{
   std::string name = "Product2";
   mProduct->setName(name);
}

void CConcreteBuilderProduct2::buildParent()
{
   std::string parent = "Parent2";
   mProduct->setParent(parent);
}