#include <iostream>
#include <string>
using namespace std;

class binary{
   int x , y;
   public:
   binary(int a = 0, int b = 0){
      x = a;
      y = b;
   }
   void print(){
      cout<<x<<" "<<y<<"\n";
   }

   binary operator+(binary c2){
      binary c3;
      c3.x = x + c2.x;
      c3.y = y + c2.y;
      return c3;
   }
   
      binary operator+(int c2){
      binary c3;
      c3.x = x + c2;
      c3.y = y + c2;
      return c3;
   }
   friend binary operator+(int n , binary c1);
};
   binary operator+(int n , binary c2){
   binary c3;
   c3.x = n + c2.x;
   c3.y = n + c2.y;
   return c3;
   }

int main(){
   binary c1(4 , 4), c2(5 , 5), c3;
   c3 = c1 + c2;// c3 = c1.operator+(c2)
   c3.print();

   c3 = c1 + 10;// c3 = c1.operator+(10)
   c3.print();

   c3 = 10 + c2; // c3 = operator+(10 , c2)
   c3.print();

   return 0;
}
