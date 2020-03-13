// Having more than one constructor in class is overlapping.
// Calling another constructor in constructor is constructor chaining or constructor delegating.

#include<iostream>
using namespace std;

class Sample
{
public:
    int a=0;
    Sample()
    {
        cout<<"Task 1.";
        a=5;
    }
    Sample(int i):Sample()  // constructor delegating
    {
        Sample();        // constructor delegating
        a=i;
        cout<<"Task 2.";
    }
    void show()
    {
        cout<<endl<<a;
    }
};
int main()
{
    Sample s;
    s.show();
    return 0;
}
