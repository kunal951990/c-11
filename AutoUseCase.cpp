#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> a,b;
    vector <int> v={1,2,3,4,5};
    vector <int>:: iterator it=v.begin();


    while(it!=v.end())
    {
        cout<<(*it)<<" ";
        a.push_back(*it);
        ++it;
    }
    // vector <int>:: iterator t=a.begin();  Line 1
    auto t=a.begin();                      // Line 1 declaration can be replaced by Line 2 auto.
    while(t!=a.end())
    {
        cout<<(*t)<<" ";
        ++t;
    }
    return 0;
}
