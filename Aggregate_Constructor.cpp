#include<iostream>
using namespace std;

class A{
public:
    int x,y;
    void show()
    {
        cout<<x<<" "<<y;
    }
};
int main()
{
    A a{2,3};  // Aggregate constructor is being called.
    a.show();
    return 0;
}
