
#include "CConcreteBuilderProduct1.hpp"
#include "string"

CConcreteBuilderProduct1::CConcreteBuilderProduct1()
   : CAbstractBuilder()
{}

CConcreteBuilderProduct1::~CConcreteBuilderProduct1()
{}

void CConcreteBuilderProduct1::buildName()
{
   std::string name = "Product1";
   mProduct->setName(name);
}

void CConcreteBuilderProduct1::buildParent()
{
   std::string parent = "Parent1";
   mProduct->setParent(parent);

}