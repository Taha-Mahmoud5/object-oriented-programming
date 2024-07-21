#include <iostream>
#include <cstring>
#include <string>
using namespace std;
// define how many objects are created
class Student{
   static int count;
   char name[20];
   int first, second, final, total, ID;

public:
   Student(){ // constructor
      strcpy(name, "No name");
      ID = 0;
      first = second = final = 0;
      // int count = 0;
      count++;
      cout << "Numbers of students constructed: " << count << endl;
   }
}; // end of class

int Student::count = 0;

int main(){
   cout << "\nConstruct 2 objects\n";
   Student S1, S2 , S3;
   cout << "\nConstruct 3 objects\n";
   Student St[3];
   return 0;
} // end of main