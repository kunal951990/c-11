#include<iostream>
using namespace std;

int main()
{
    constexpr int a = 25;
    const int b = 30;
    int c;
    cout<<"Enter a number: ";
    cin>>c;
    const int d = c;
    // constexpr int d =c; // constexpr data should be known during compile time but not run time.
    cout<<"\n"<<c;
    return 0;
}
