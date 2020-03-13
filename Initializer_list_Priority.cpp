#include<iostream>
using namespace std;

class Rectangle{
private:
    int x;
    float y;
public:
    Rectangle(int a, double b):x{a},y{b}{cout<<"Regular Constructor is provoked.";}
    Rectangle(const initializer_list<int> &v)  // Initializer_list is getting priority over regular constructor.
    {
        x=*(v.begin());
        y=*(v.begin()+1);
        cout<<"Constructor with initializer_list is provoked.";
    }

};

int main()
{
    Rectangle r{2,3.5};
    return 0;
}
