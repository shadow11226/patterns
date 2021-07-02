#ifndef CABSTRACTBUILDER_HPP
#define CABSTRACTBUILDER_HPP

#include "CProduct.hpp"
#include "memory"

class CAbstractBuilder
{
public:
   CAbstractBuilder(/* args */);
   ~CAbstractBuilder();

   void createProduct();
   std::shared_ptr<CProduct> getProduct();

   virtual void buildName() = 0;

   virtual void buildParent() = 0;

protected:
   std::shared_ptr<CProduct> mProduct;
};

#endif