#ifndef CCOMPONENT_HPP
#define CCOMPONENT_HPP

#include "IInterface.hpp"

class CComponent: public IInterface
{
private:
    /* data */
public:
    CComponent(/* args */);
    ~CComponent();

    void printText(const char* str) override;
};

#endif