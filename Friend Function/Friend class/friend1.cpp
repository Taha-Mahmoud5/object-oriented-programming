#include <iostream>
#include <string>
using namespace std;

class myclass{
private:
   int a , b;
public:
   myclass(int i , int j){
      a = i;
      b = j;
   }
   friend int sum(myclass ob);
};

int sum(myclass ob){
   return ob.a + ob.b;
}

int main(){
   myclass a1(10 , 20);
   cout<<sum(a1);
   return 0;
}