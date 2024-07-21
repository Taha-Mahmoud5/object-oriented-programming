#include <iostream>
#include <cstring>
using namespace std;

template <class t1, class t2>
t1 sum(t1 x, t2 y)
{
   return x < y ? x : y;
}

int main()
{
   int a = 10;
   double b = 7.55;
   cout <<sum<double , int>(b, a) << '\n';
   //اعتبر ان a double
   return 0;
}
