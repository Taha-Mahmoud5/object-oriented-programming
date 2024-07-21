#include <iostream>
#include <cstring>
using namespace std;

template <class t>
class number{
   t one , two;
   public:
   number(t a , t b){
      one = a;
      two = b;
   }
   t max();
};

template <class t>
t number<t>::max(){
   return one > two ? one : two ;
}

int main(){
   number<double>ob(10.5 , 20.5);
   cout << ob.max();
   return 0;
}
