#include <iostream>
using namespace std;
int main(){
   int arr[5] = {10, 20, 30, 40, 50};
   int *p;
   p = arr;
   //p = &arr[0]
   for (size_t i = 0; i < 5; i++){
      cout << *p << endl;
      p++;
   }
   return 0;
}