#include <iostream>
#include <string>
using namespace std;

class unary{
private:
   int x , y;
public:
   unary(int i , int j){
      x = i;
      y = j;
   }
   void show(){
      cout<<x<<" "<<y<<"\n";
   }

   unary operator+=(unary z){
   x += z.x;
   y += z.y;
   return *this;
   }
   // unary operator-=(unary z){
   // x -= z.x;
   // y -= z.y;
   // return *this;
   // }
};

int main(){
   unary a1(5 , 5) , a2(10 , 10);
   a1 += a2;//a1.operator+=(a2)
   //a1 -= a2;//a1.operator+=(a2)
   a1.show();
   return 0;
}
