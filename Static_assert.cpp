// Static assertions are a way to check if a condition is true
// when the code is compiled.
// If it is not, the compiler is required to issue an error message and stop the compiling process.
// The condition that needs to be checked is a constant expression.
#include<iostream>
using namespace std;

//#if!defined(k)
//#error "k not defined".
//#endif
//int main()
//{
//    //cout<<k;
//    return 0;
//}
 int main()
 {
     const int k = 20;
     static_assert(k>2,"k is 2");  // static_assert(constant expression, string literal)
     static_assert(k<2,"k is 2");  // k>2 or k<2 is constant expression.
     return 0;
 }
