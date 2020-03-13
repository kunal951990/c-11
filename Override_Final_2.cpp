#include<iostream>
using namespace std;

class A
{
public:
    virtual void fun() final // made this method not available for override.
    {
        cout<<"This is Final class.";
    }
};
class B:public A
{
public:
    void fun()         // cannot override
    {
        cout<<"Trying to override final method.";
    }
};

int main()
{
    B b;
    b.fun();
    return 0;
}

