#include<iostream>
using namespace std;

class Box{
private:
    int x,y;
public:
    Box(int a,int b):x{a},y{b}{}
    void show()
    {
        cout<<x<<" "<<y;
    }
};
int main()
{
    Box b{2,4};
    b.show();
    return 0;
}
