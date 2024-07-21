#include <iostream>
#include <string>
using namespace std;

class A{
private:
   int i;
protected:
   int j;
public:
   int k;
};

class B : A{ //تعتبر توارث private لاي حاجه موجوده في A
   int x;
public:
   int y;
   int get_j(){
      return j;
   }
};

int main(){
   A ob;
   ob.k = 15;//cannot access public member declared in class A
   //ob.y = 20;
   //ob.get_j();
   return 0;
}
