#include<iostream>
using namespace std;

class A final
{
public:
    A(){cout<<"This is Final class.";}
};
class B:public A  // cannot derive from final base A.
{};

int main()
{
    B b;
    return 0;
}
