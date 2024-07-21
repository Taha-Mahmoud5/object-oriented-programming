#include <iostream>
#include <string>
using namespace std;

class arr{
   int a[3];
   public:
      arr(){
         for (int i = 0; i < 3; i++){
            a[i] = i + 2;
         }    
      }
   int &operator[](int in){
      return a[in];
   }
};

int main(){
   arr ob;
   cout<<ob[2]<<"\n";//ob.operator[](2)
   ob[2] = 20;//بواسطه &
   cout<<ob[2];
   return 0;
}
