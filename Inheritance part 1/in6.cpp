#include <iostream>
#include <cstring>
using namespace std;

// constructor and destroctur
// operator=() member
// friends
//بيتوارسوا بدون ماشوفهم

class A{
private:
   char name[20];
   protected:
   void set_n(const char s[]){
      strcpy(name , s);
   }
   void print_n(){
      cout<<name<<" ";
   }
};

class B {
private:
int id;
protected:
   void set_i(int i){
      id = i;
   }
   void print_i(){
      cout<<id<<"\n";
   }
};

class C : public A , public B{
public:
C(const char n[] , int id){
   set_n(n);
   set_i(id);
}
void print(){
   print_n();
   print_i();
}
};

int main(){
   C x("Islam" , 2033);
   x.print();
   return 0;
}
