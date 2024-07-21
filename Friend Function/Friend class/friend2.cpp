#include <iostream>
#include <string>
using namespace std;

class rec{
private:
   int a , b;
   friend rec dup(rec r);
public:
void set(int , int);
int area(){
   return (a * b);
}
};

void rec::set(int x ,int y){
   a = x;
   b = y;
   }

rec dup(rec r){
      rec t;
      t.a = r.a * 2;
      t.b = r.b * 2;
      return t;
   }

int main(){
rec a1 , a2;
a1.set(5 , 5);
cout<<a1.area()<<"\n";
a2 = dup(a1);
cout<<a2.area()<<"\n";
   return 0;
}