#include <iostream>
#include <string>
using namespace std;

class A{
private:
   int i;
protected:
int x;
public:
   int j , k; 
   void seti(int x){
      i = x;
   }
   int geti(){
         return i;
   } 
   
};

class B : private A{ //تعتبر توارث private لاي حاجه موجوده في A
   public:
   using A::j;   //make j public again
   using A::seti;//make seti() public again
   using A::geti;//make geti() public again
   //A::i;  //illegal 
   using A::x;
   int a;
};

int main(){
   B ob;
   //ob.i = 15;//cannot access public member declared in class A
   ob.j = 20;
   //ob.k = 25;//ما حولتها لببلك
   ob.a = 30;
   ob.x = 10;
   ob.seti(10);
   cout<<ob.geti()<<" ";
   cout<<ob.j<<" "<<ob.a<<"\n";
   return 0;
}
