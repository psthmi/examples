#include "Base.h"
#include <iostream>

Base::Base()
{
    std::cout << "Base Constructor" << std::endl;
    value1 = 0;
    value2 = 0;
}

Base::Base(int firstValue)
{
    std::cout << "Base Class Parameterized Constructor with one parameter only" << std::endl;
    value1 = firstValue;
    value2 = 5;
}

Base::Base(int firstValue, int secondValue)
{
    std::cout << "Base Class Parameterized Constructor" << std::endl;
    value1 = firstValue;
    value2 = secondValue;
}


void Base::function1(int value)
{
    std::cout << "Base Function1" << value<< std::endl;
}

void Base::print()
{
    std::cout << "pint from Base" << std::endl;
    std::cout << "Value 1     :" << value1 << std::endl;
    std::cout << "Value 2     :" << value2 << std::endl;
}


void Base::print(int value)
{
    std::cout << "pint VALUE from Base" << value << std::endl;
}
