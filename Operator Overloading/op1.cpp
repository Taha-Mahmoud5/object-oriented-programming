#include <iostream>
#include <string>
using namespace std;

class rec{
private:
   float w , h;
public:
   rec(float a = 0, float b = 0){
      w = a;
      h = b;
   }
   void get(){
   cin>>w>>h;
   }
   void show(){
      cout<<w<<"   "<<h<<"\n";
   }
   void add(rec x , rec y){
   w = x.w + y.w;
   h = x.h + y.h;
   }
   // rec add(rec y){
   // rec z;
   // z.w = w + y.w;
   // z.h = h + y.h;
   // return  z;
   //}

   // rec operator+(rec y){ 
   //or operator- or operator* or operator/
   // rec z;
   // z.w = w + y.w;
   // z.h = h + y.h;
   // return  z;
   //}
};


int main(){
   rec a1 , a2(5.5 , 5.5) , a3;
   a1.get();
   a3.add(a1 , a2);
   //a3 = a1.add(a2);
   //a3 = a1 + a2;
   //==
   //a3 = a1.operator+(a2); كيف ينفذ الكومبيلر
   a3.show();
   return 0;
}
