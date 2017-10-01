#ifndef BASE_H
#define BASE_H


class Base
{
public:
    Base();
    Base(int firstValue);
    Base(int firstValue, int secondValue);
public:
    virtual void function1(int);
    void print();
    void print(int value);

private:
    int value1;
    int value2;
};

#endif // BASE_H
