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

   bool operator!(){
   return (x == 0 && y == 0);
   }
};

int main(){
   unary a1(5 , 5);
   if(!a1){//a1(0 , 0) only
      cout<<"True\n";
   }
   else{
      cout<<"False\n";
   }
   return 0;
}
