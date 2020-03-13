// nullptr is a keyword that can be used at all places where NULL is expected.
// Like NULL, nullptr is implicitly convertible and comparable to any pointer type.
// Unlike NULL, it is not implicitly convertible or comparable to integral types.

#include<iostream>
using namespace std;

int main()
{
    int *p = nullptr;
    // int n = nullptr; this operation was possible before c++11 when we will be using NULL.
    cout<<p<<" "<<(*p);
    //cout<<n;
    return 0;
}
