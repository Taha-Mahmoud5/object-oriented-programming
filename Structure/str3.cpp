#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

struct exam{
   float first;
   float second;
   float final;
   void f(){
      cout<<"Struct\n";
   }
};

class subject{
   char name[10];
   exam Exam;
public:
   subject(){
      strcpy(name, "no name");
      Exam = {0, 0, 0};//initial value must on the same line 
      Exam.first = 0;
      Exam.second = 0;
      Exam.final = 0;
   }
   
   subject(const char n[], float fa, float s, float fi){
      Exam.f();
      strcpy(name, n);
      Exam = {fa, s, fi};
   }

   float total(){
      return Exam.first + Exam.second + Exam.final;
   }

   void print(){
      cout  << "The subject = " << name << endl
            << "First Exam = " << Exam.first << endl
            << "Second Exam = " << Exam.second << endl
            << "Final Exam = " << Exam.final << endl
            << "The Total is = " << total() << endl;
   }
};

int main(){
   subject e("OOP", 25, 25, 25);
   e.print();
   return 0;
}