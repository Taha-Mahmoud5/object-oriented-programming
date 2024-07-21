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
virtual int area(){
   //تعني ان في نسخه من الاريا داخل الابناء
   return 0;
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
   pol a3;
   pol *p1 , *p2 , *p3;//polymorphism
   p1 = &a1;
   p2 = &a2;
   p3 = &a3;
   
   p1->set(5 , 5);
   p2->set(10 , 10);
   p3->set(20 , 20);

   cout<<p1->area()<<"\n";
   cout<<p2->area()<<"\n";
   cout<<p3->area()<<"\n";
   return 0;
}
