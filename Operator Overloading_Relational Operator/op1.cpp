#include <iostream>
#include <string>
using namespace std;

class relarional{
private:
   int x, y , z;

public:
   relarional(){
   x = y = z = 0;
   }
   relarional(int i , int j , int k){
      x = i;
      y = j;
      z = k;
   }
   int operator==(relarional c){
   return x == c.x && y == c.y && z == c.z;
   }

   // int operator<=(relarional c){
   // return x <= c.x && y <= c.y && z <= c.z;
   // }
   //وهكذا بكل العمليات المشابهه
};

int main(){
   relarional a(10 , 10 , 10) , b(10 , 10 , 10);
   if(a == b){//a.operator(b)
      cout<<"Equal\n";
   }
   else{
      cout<<"Not equal\n";
   }
   return 0;
}
