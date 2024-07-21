#include <iostream>
#include <cstring>
using namespace std;
// اي شئ داخل الكلاس ميمبر
class student{
private:
   char name[20];
   int id;

public:
   student(){
      cout << "object created\n";
   }
   ~student(){
      cout << "object has been destroyed\n";
   }
   void set(const char n[], int i){
      strcpy(name, n);
      id = i;
   }
   void print(){
      cout << name << " " << id << "\n";
   }
};
void f(student s){ // non member
   student s1;
   s1 = s;
   s.set("islam", 2033);
   s.print();
   s1.print();
}
int main(){
   student a1, a2;
   a1.set("ahmed", 1111);
   a2.set("ali", 2222);
   cout << "go to function\n";
   f(a1);
   cout << "back from function\n";
   a2.print();
   return 0;
}
