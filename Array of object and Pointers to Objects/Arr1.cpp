#include <iostream>
using namespace std;
int main(){
   int arr[5] = {10, 20, 30, 40, 50};

   // Printing the memory address of the array (address of the first element)
   cout << arr << endl;

   // Printing the value at the first element of the array
   cout << *arr << endl;

   // Printing the memory address of the second element of the array
   cout << arr + 1 << endl;

   // Printing the memory address of the last element of the array
   cout << arr + 4 << endl;

   // Printing the value at the last element of the array
   cout << *(arr + 4) << endl;

   for (size_t i = 0; i < 5; i++){
      cout << *(arr + i) << endl<< endl;
      //*(arr++) wrong b array constant pointer
   }
      cout << *(arr + 1) << endl<< endl;

   int a = 0;
   cout << a + 1<<" ";
   cout << a<<"\n";
   a = 0;
   cout << a++<<" ";
   cout << a<<"\n";
   return 0;
}