#include <iostream>
#include <string>
using namespace std;

class B;
class A{
private:
   int w1 , h1;
public:
   void set(int a ,int b){
      w1 = a;
      h1 = b;
   }
   friend int sum(A i , B j);
};

class B{
private:
   int w2 , h2;  
public:
   B(int a = 0 ,int b = 0){ // إضافة بناء افتراضي
      w2 = a;
      h2 = b;
   }
   friend int sum(A i , B j);
};

int sum(A i , B j){
   return i.w1 + j.w2;
}

int main(){
   A objA;
   objA.set(4, 4); // استدعاء الدالة set لتعيين القيم
   B objB(5, 10); // استدعاء البناء الذي تمت إضافته
   cout << "Sum: " << sum(objA, objB) << endl;
   return 0;
}
