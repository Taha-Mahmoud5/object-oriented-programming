#include <iostream>
#include <cstring>
using namespace std;
template <class t>
class number{
   public:
   number(t x){
      cout<< x <<" is not char "<<"\n";
   }
};
template <>
class number<double>{
   public:
   number(double y){
      cout<<y<<" is a double"<<"\n";
   }
};
//Template specialization
template <>
class number<char>{
   public:
   number(char x){
      cout<< x <<" is a char "<<"\n";
   }
};

int main(){
   number<int>ob1(5);
   number<double>ob2(10.55);
   number<char>ob3('A');
   return 0;
}