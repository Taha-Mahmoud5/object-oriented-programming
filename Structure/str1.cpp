#include <iostream>
#include <cstring>
using namespace std;
struct car{
string name;
string color;
int speed;
int model;
}a2;//يمكن تعريف الستراكت هنا هكذا

int main(){
car a1 = {"kia" , "Red" , 250 , 96};
//initial value must on the same line;                          
a1.name = "Ferrari";
a2 = {"kia" , "Red" , 250 , 96};
cout<<a1.speed;
   return 0;
}
