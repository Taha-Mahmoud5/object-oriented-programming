#include <iostream>
#include <string>
using namespace std;

class stud{
private:
   int id;
public:
   void set(int id){
   this->id = id;
   //id = id تعني 
   //عطيت قيمه للايدي نفسه وليس البرايفت ايدي
   }
   void print(){
      cout<<id<<"\n";
   }
};


int main(){
   stud a1;
   a1.set(10);
   a1.print();
   return 0;
}
