#include <iostream>
#include <cstring>
using namespace std;

int main(){
   int num;
   try{
      cin >> num;
      if(num < 0)
      throw "error";
      
      cout<<"the num is "<<num<<"\n";
   }
   catch(const char *c){//array of char
      cerr<<c<<" wrong value\n";
   }
   
   return 0;
}