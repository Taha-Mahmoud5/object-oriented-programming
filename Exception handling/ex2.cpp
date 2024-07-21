#include <iostream>
#include <cstring>
using namespace std;

int main(){
   try{
      int num;
      cout<<"5 + 7 = ";
      cin >> num;
      if(num != 12)
      throw "error\n";

      cout<<"right answer "<<"\n";
   }
   catch(const char *c){//array of char
      cerr<<c;
   }
   
   return 0;
}