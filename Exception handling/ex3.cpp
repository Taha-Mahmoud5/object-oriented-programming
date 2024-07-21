#include <iostream>
#include <cstring>
using namespace std;

int main(){
   try{
      int num[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
      int index;
      cin>>index;
      if(index < 0)
      throw "error\n";
      if(index >= 10)
      throw index;

      for (int i = 0; i <= index; i++){
         cout<<num[i]<<" ";
      }
      
   }
   catch(int c){
      cout<<"index "<<c<<"\n";
   }

   catch(const char *str){//array of char
      cout<<"exception "<<str<<"\n";
   }
   
   return 0;
}