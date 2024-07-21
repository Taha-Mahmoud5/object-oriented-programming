#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Student{
   static int count;
   char name[20];
   int first, second, final, total, ID;
public:
   static void print(){
      cout << "Students constructed: " << count << endl;
   }
   
   Student(){ // constructor
      strcpy(name, "No name");
      ID = 0;
      first = second = final = 0;
      count++;
      print();
   }
}; // end of class

int Student::count = 0;

int main(){
   Student::print();
   cout << "\nConstruct 2 objects\n";
   Student S1, S2;
   cout << "\nConstruct 3 objects\n";
   Student St[3];
   return 0;
} // end of main