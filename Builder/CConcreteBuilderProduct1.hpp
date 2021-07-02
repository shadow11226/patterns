#ifndef CCONCRETEBUILDERPRODUCT1_HPP
#define CCONCRETEBUILDERPRODUCT1_HPP

#include "CAbstractBuilder.hpp"

class CConcreteBuilderProduct1 : public CAbstractBuilder
{
public:
   CConcreteBuilderProduct1(/* args */);
   ~CConcreteBuilderProduct1();

   void buildName() override;
   void buildParent() override;

private:

};

#endif