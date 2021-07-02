#ifndef CPRODUCT_HPP
#define CPRODUCT_HPP

#include "string"

class CProduct
{
public:
   CProduct(/* args */);
   ~CProduct();

   void setName(std::string str);

   void setParent(std::string str);

   void print();
   
private:

   std::string mName;
   std::string mParent;
};

#endif