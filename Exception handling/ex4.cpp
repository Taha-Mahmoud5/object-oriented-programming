#include <iostream>
#include <cstring>
using namespace std;

class ex{
   int arr[100];
   public:
   ex(){
      for (int i = 0; i < 100; i++){
         arr[i] = i;
      }
   }
   int get(int x){
      if(x >= 100){
         throw xbig();
      }
      else if(x < 0){
         throw xsmall();
      }
      else{
         return arr[x];
      }
   }

   class xbig {
      public:
      xbig() {};
      void big(){
         cout<<"big\n";
      }
   };
   class xsmall {
      public:
      xsmall() {};
      void small(){
         cout<<"small\n";
      }
   };
};

int main(){
   int i = 0;
   ex a;
   try{
      cin>>i;
      cout<<"the element "<<a.get(i)<<"\n";
   }
   catch(ex::xsmall s){
      s.small();
   }
   catch(ex::xbig r){
      r.big();
   }
   return 0;
}