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

   unary operator-(){
   x = -x;
   y = -y;
   return *this;
   }
};

int main(){
   unary a1(5 , 5);
   -a1;
   a1.show();
   return 0;
}
