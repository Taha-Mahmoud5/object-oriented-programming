#include <iostream>
#include <string>
using namespace std;
void f(){
   static int x = 0;
   x++;
   cout << x << endl;
}

int main(){
   f();
   f();
   f();
   return 0;
}