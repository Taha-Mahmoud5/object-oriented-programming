#include <iostream>
#include <string>
using namespace std;

class num{
   int number;
   public:
      num(){
         number = 0;
      }
      num(int x){
         number = x;
      }
      num(const num &ob){
         number = ob.number;
      }

      int get(){
         return number;
      }
      
      operator int (){
         return int(number);
      }
};

int main(){
   num ob1 , ob2(20);
   int x = 10;
   ob1 = x;
   cout<<ob1.get()<<"\n";

   x = ob2;//operator int
   cout<<x<<"\n";
   
   return 0;
}
