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
virtual int area() = 0;
void printarea(){
   cout<<this->area()<<"\n";
   //this->area() mean 
   //p1->area();
   //p2->area();
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
   pol *p1 , *p2 ;
   p1 = &a1;//early  binding
   p2 = &a2;

   p1->set(5 , 5);
   p2->set(10 , 10);

   p1->printarea();
   p2->printarea();

   pol *p[2] = {&a1 , &a2};
   for (size_t i = 0; i < 2; i++){
      cout<<p[i]->area()<<"\t";
      //late binding
      //p[0]->area()
      p[i]->printarea();
      //p[0]->area()
   }
   
   return 0;
}
