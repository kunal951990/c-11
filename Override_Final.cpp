#include<iostream>
using namespace std;

class Student
{
public:
    virtual void show()
    {
        cout<<"Student Class.";
    }
};
class Teacher:public Student
{
public:
    void show(int i) override     // override will check whether the function is present in above class or not.
    {
        cout<<"Child Class.";
    }
};
int main()
{
    Teacher t;
    t.show();
    return 0;
}
