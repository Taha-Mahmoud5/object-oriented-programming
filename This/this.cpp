#include <iostream>
#include <string>
using namespace std;

class stud{
private:
   float w , h;
public:
   void address(){
      cout<<this<<"\n";
      //بوينتر يؤشر على الابجكت الذي استدعى الاقتران
   }
};


int main(){
   stud a , b , c;
   a.address();
   b.address();
   c.address();
   return 0;
}
