//   [](){} is syntax of lambda function.
#include<iostream>
using namespace std;

int main()
{
    int i;

    auto j = [](int k){cout<<k<<endl;};  // lambda function
    j(5);
    cout<<"..........................................."<<endl;

    auto l = [](int a, int b){return a*b;};   // lambda function
    cout<<l(5,6);
    cout<<"..........................................."<<endl;

    cout<< [](int a, int b){return a*b;}(3,4) <<endl;  // lambda function
    cout<<"..........................................."<<endl;

    cout<< [](int a)->int{return a*a;}(25) <<endl;  // explicit return type.

    return 0;
}
