#include<iostream>
using namespace std;

enum colour{
    Red,Blue,Green,Orange
};

enum fruit{
    Apple,Cherry,Grapes,Banana
};

int main()
{
    colour dm = Orange;
    fruit sm = Banana;
    cout<<dm<<endl;   // It will print numbers instead of colour.
    if(dm==sm)
    {
        cout<<"Both are Same.";
    }
    if(dm==Orange)
    {
        cout<<"Both are Same.";
    }
    return 0;
}
