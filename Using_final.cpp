// default will redirect compiler to give default constructor.
#include<iostream>
using namespace std;

class Sample
{
public:
    Sample(int i){cout<<"Constructor is called.";}
    Sample(double)=delete;  // disabling double value to be passed.
    Sample operator =(const Sample&)=delete;  // disabling assignment operator function.
};
int main()
{
    Sample s(3);
    Sample k(5.2);  // if we want to disable double to be passed and to restrict upto integer, use delete.
    Sample m(6);
    k=s;  // assignment operator function is disabled.
    return 0;
}

