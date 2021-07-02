#include "iostream"
#include "CDirector.hpp"
#include "CProduct.hpp"
#include "CAbstractBuilder.hpp"
#include "CConcreteBuilderProduct1.hpp"
#include "CConcreteBuilderProduct2.hpp"
#include "memory"

using namespace std;

int main()
{
   cout << "working" << endl;

   CConcreteBuilderProduct1 builder1;
   builder1.createProduct();
   builder1.buildParent();
   builder1.buildName();
   
   CConcreteBuilderProduct2 builder2;
   builder2.createProduct();
   builder2.buildParent();
   builder2.buildName();

   CDirector director;

   {
   director.setBuilder(&builder1);
   std::shared_ptr<CProduct> product = director.getProduct();
   product->print();
   }

   {
   director.setBuilder(&builder2);
   std::shared_ptr<CProduct> product = director.getProduct();
   product->print();
   }

   cin.get();
   return 0;
}  