#include <iostream>
#include <string>
using namespace std;

class B;
class A{
private:
   int w1 , h1;
public:
   int area(){
      return(w1 * h1);
   }
   void convert(B);
   //لو عاوز التاني يبقى له اكسس على دااستدعي فريند
};

class B{
private:
   int side;  
public:
   void set(int x){
   side = x;
   }
   friend class A;
};

void A::convert(B d){
   w1 = d.side;
   h1 = d.side;
}

int main(){
   A rec;
   B sqr;
   sqr.set(4);
   rec.convert(sqr);
   cout<<rec.area()<<"\n";
   return 0;
}
