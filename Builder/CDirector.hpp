#ifndef CDIRECTOR_HPP
#define CDIRECTOR_HPP

#include "CAbstractBuilder.hpp"
#include "CProduct.hpp"
#include "memory"

class CDirector
{
public:
   CDirector(/* args */);
   ~CDirector();

   void setBuilder(CAbstractBuilder* builder);

   std::shared_ptr<CProduct> getProduct();

private:
   CAbstractBuilder* mBuilder;
};

#endif