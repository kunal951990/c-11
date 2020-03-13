// default will redirect compiler to give default constructor.
#include<iostream>
using namespace std;

class Sample
{
public:
    Sample(int i){}
    Sample()=default;  // If we want compiler to give default constructor we use this syntax.
};
int main()
{
    Sample s;
    return 0;
}
