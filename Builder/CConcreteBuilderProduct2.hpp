#ifndef CCONCRETEBUILDERPRODUCT2_HPP
#define CCONCRETEBUILDERPRODUCT2_HPP

#include "CAbstractBuilder.hpp"

class CConcreteBuilderProduct2 : public CAbstractBuilder
{
public:
   CConcreteBuilderProduct2(/* args */);
   ~CConcreteBuilderProduct2();

   void buildName() override;
   void buildParent() override;

private:

};

#endif