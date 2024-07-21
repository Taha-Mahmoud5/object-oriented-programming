#include <iostream>
#include <cstring>
using namespace std;
class phone{
private:
   char name[20];
   char model[20];
   int price;

public:
   phone(){
      cout<<"object created\n";
   }
   phone(const char n[], const char m[], int p){
      strcpy(name, n);
      strcpy(model, m);
   }
   void print();
   ~phone();
};
void phone::print(){
   cout << "name = " << name << "\n";
   cout << "model = " << model << "\n";
}

phone::~phone(){
   cout <<"object has been destroyed\n";
}

int main(){
phone a1("samsung" , "a10" , 10) , a2;
a1.print();
   return 0;
}
