#ifndef DERIVED_H
#define DERIVED_H


#include "Base.h"
#include <iostream>


class Derived : public Base
{
  public:
    Derived();
    Derived(int firstValue, int secondValue, int thirdValue);
    Derived(int firstValue, int secondValue, int thirdValue, int fourthValue);

public:
    virtual void function1(int);
    void function2(){}
    void print();

private:
    int value3;
    int value4;
};

#endif // DERIVED_H
