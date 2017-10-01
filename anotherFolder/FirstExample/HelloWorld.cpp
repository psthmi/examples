#include "HelloWorld.h"
#include <iostream>


using namespace std;


void HelloWorld::print()
{
    cout << "Hello  World From Class HelloWorld again" << endl;
}

void HelloWorld::print(int value)
{
    cout << "calling overloaded print function with value " << value << endl;
}
