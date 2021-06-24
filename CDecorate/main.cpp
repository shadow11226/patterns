#include "iostream"

#include "CDecorator.hpp"
#include "CComponent.hpp"
#include "memory"

int main()
{
    CComponent component;
    component.printText("program");
    component.printText("is");
    component.printText("working");

    std::cout << std::endl;

    std::shared_ptr<IInterface> ptr(&component);
    CDecorator decorator(ptr);
    decorator.printText("program");
    decorator.printText("is");
    decorator.printText("working");

    std::cin.get();
    return 0;
}
