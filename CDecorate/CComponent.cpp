#include "CComponent.hpp"
#include "iostream"

using namespace std;

CComponent::CComponent(/* args */)
    : IInterface()
{
}

CComponent::~CComponent()
{
}

void CComponent::printText(const char* str)
{
   cout << str;
}
