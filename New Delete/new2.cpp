#include <iostream>
using namespace std;

int main(){
   // Declare a pointer variable
   int *p;

   // Allocate memory for an integer on the heap
   p = new int;

   // Assign a value to the dynamically allocated integer
   *p = 10;

   // Print the address of the dynamically allocated memory
   cout << p << endl;//عنوان المساحه المحجوزه
   cout << &p << endl;//عنوان البوينتر نفسه
   cout << *p << endl << endl;//قيمه المساحه المحجوزه

   // Deallocate the dynamically allocated memory
   delete p;
   cout << p << endl;
   cout << &p << endl;
   cout << *p << endl << endl;
   
   //===================================================
   //===================================================

   int *p1, *p2;

   p1 = new int;
   *p1 = 10;

   cout << &p1 << endl; // location of the pointer
   cout << "Memory location " << p1 << "\n";
   cout << "contains " << *p1 << endl << endl;

   p2 = new int;
   *p2 = 20;

   cout << &p2 << endl; // location of the pointer
   cout << "Memory location " << p2 << "\n"
        << "contains " << *p2 << endl;

   // Deallocate the dynamically allocated memory
   delete p1;
   delete p2;

   return 0;
}