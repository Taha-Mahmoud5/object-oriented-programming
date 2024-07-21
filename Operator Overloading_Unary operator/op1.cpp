#include <iostream>
#include <string>
using namespace std;

class unary{
private:
   int x , y;
public:
   unary(){};
   unary(int i , int j){
      x = i;
      y = j;
   }
   void show(){
      cout<<x<<" "<<y<<"\n";
   }

   unary operator++(){
      x++;
      y++;
      return *this;
      //يرجع محتوى الفانكشن
   }
   unary operator++(int){
   unary t;
   t = *this;
   x++;
   y++;
   return t;
   }
};

int main(){
   unary a1(10 , 10) , a2;
   a1++;
   a2 = ++a1;
   a2 = a1++;
   //المفروض يضيف الاول فالتاني ثم يذيد الاول
   a1.show();
   a2.show();
   return 0;
}
