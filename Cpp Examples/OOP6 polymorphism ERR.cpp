#include<iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0; //it can't be equal to a number.
};
 
class Derived : public Base { };
 
int main(void)
{
    Derived q; // there is an error.!!!!!!! (Compile err: Derived is abstract)
    return 0;
}

