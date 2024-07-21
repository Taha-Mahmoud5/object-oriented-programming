#include <iostream>
#include <cstring>
using namespace std;

class pol{
protected:
int width , height;
public:
void set(int a , int b){
   width = a; height = b;
}
};

class rec : public pol{
public:
int area(){
   return width * height;
}
};

class tri : public pol{
public:
int area(){
   return width * height / 2;
}
};

int main(){
   rec a1;
   tri a2;
   pol *p1 , *p2;//polymorphism
   p1 = &a1;
   p2 = &a2;
   p1->set(5 , 5);
   p2->set(10 , 10);
   cout<<a1.area()<<"\n";
   cout<<a2.area()<<"\n";
   //cout<<p1->area()<<"\n"; 
   //wrong لازم تكون موجوده نسخه من الفانكشن في الكلاس الاب
   return 0;
}
