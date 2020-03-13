// Constructor eligible for implicit conversion are called Converting Constructor.
// If we want to restrict implicit conversion we use word explicit.

#include<iostream>
using namespace std;

class Box{
private:
    int x;
public:
    explicit Box(int a)  // explicit word wont allow implicit conversions.
    {
        x=a;
    }
    void show()
    {
        cout<<x;
    }
};
int main()
{
    Box b='a';         // trying to pass char to int which is possible in case of implicit conversion.
    b.show();
    return 0;
}
