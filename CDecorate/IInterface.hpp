#ifndef IINTERFACE_HPP
#define IINTERFACE_HPP

class IInterface
{
private:
    /* data */
public:
    IInterface(/* args */)
    {}
    virtual ~IInterface()
    {}

    virtual void printText(const char* str) = 0;
};

#endif