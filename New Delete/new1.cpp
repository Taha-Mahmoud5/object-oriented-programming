#include <iostream>
#include <string>
using namespace std;
//pointer
//مؤشر يشير لعنوان المتغير
//يرمز للعنوان ب & 
int main(){
   int var1 = 11;
   int var2 = 22;
   cout << &var1 << endl;
   cout << &var2 << endl<< endl;

   int *ptr;
   void *pt;
   //int = must linked with variable int
   pt = &var1;
   ptr = &var2;
   *ptr = 5000;
   //اي تغيير على البوينتر ينعكس على المتغير والعكس صحيح
   cout << ptr << endl;
   cout << &var2 << endl;
   cout << *ptr << endl;
   cout << var2 << endl;
}