#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class Student{
   char name[20];
   int ID;
public:
   Student(){ // empty constructor
      cout << "empty\n";
      strcpy(name, "No name");
      ID = 0;
   }
   Student(const char n[], int id){ // constructor overloading
      cout << "parameterize\n";
      strcpy(name, n);
      ID = id;
   }
   void print(void){
      cout << name << "\t" << ID << endl;
   }
};

int main(){
   Student S1("Ali", 123), S2("Ahmad", 456) , *p;
   Student arr[3];
   p = arr;
   //Student arr[3] = {Student("islam" , 5),Student("mo" , 10) ,Student("am" , 20)};
   //Student arr[3] = {S1 , S2};
   for (int i = 0; i < 3; i++){
      arr[i].print();
   }

   cout<<"\n";

   for (int i = 0; i < 3; i++){
      (p + i)->print();
      //p++->print();
   }
   
   for (int i = 0; i < 3; i++){
      cout<<(p + i)<<"\n";
      //p++;
   }
   return 0;
}