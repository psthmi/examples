#include "Derived.h"
#include <iostream>

Derived::Derived()
{
    std::cout << "Derived Constructor" << std::endl;
    value3 = 0;
    value4 = 0;

}

Derived::Derived(int firstValue, int secondValue, int thirdValue, int fourthValue)
    :Base(firstValue, secondValue)
{
    std::cout << "Derived Class Parameterized Constructor" << std::endl;
    value3 = thirdValue;
    value4 = fourthValue;
}

Derived::Derived(int firstValue, int secondValue, int thirdValue)
    :Base(firstValue)
{
    std::cout << "Derived Class Parameterized Constructor with three parameters" << std::endl;
    value3 = secondValue;
    value4 = thirdValue;
}

void Derived::function1(int value)
{
    std::cout << "Derived function1 " << value << std::endl;
}

void Derived ::print()
{
    Base::print();
    std::cout << "Value 3     :" << value3 << std::endl;
    std::cout << "Value 4     :" << value4 << std::endl;
}


