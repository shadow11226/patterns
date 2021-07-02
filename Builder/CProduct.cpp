#include "CProduct.hpp"
#include "iostream"

CProduct::CProduct(/* args */)
   : mName("0")
   , mParent("0")
{
}

CProduct::~CProduct()
{
}

void CProduct::setName(std::string str)
{
   mName = str;
}

void CProduct::setParent(std::string str)
{
   mParent = str;
}

void CProduct::print()
{
   std::cout << std::endl;
   std::cout << "Name: " << mName.c_str() << std::endl;
   std::cout << "Parent: " << mParent.c_str() << std::endl;
}