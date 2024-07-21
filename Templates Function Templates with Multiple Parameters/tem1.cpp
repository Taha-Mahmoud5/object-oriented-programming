#include <iostream>
#include <cstring>
using namespace std;

template<class t>
t sum1(t x , t y){
   return x + y;
}

template<class t1 , class t2>
t2 sum2(t1 x , t2 y){
   return x + y;
}

int main(){
   int a = 5, b = 5;
   double x = 5.5 , y = 5.5;
   cout<<sum1(a , b)<<'\n';
   cout<<sum2(a , y)<<'\n';
   return 0;
}
