#include <iostream>
#include <string>
using namespace std;

class time{
private:
   int h, m, s;

public:
   void print()const{
      cout << "the time = " << h << " : " << m << s << "\n";
   }
   time(int i , int j , int k){
      h = i;
      m = j;
      s = k;
   }
};

int main(){
const time noon(12 , 0 , 0);
// عند تعريف اوبجكت كونست لا يستدعي الا الفانكشن الكونست مثلها 
//اما عند تعريف اوبجكت ليس كونست يصل لجميع الدوال كونست او غير كونست
noon.print();
   return 0;
}