#include <iostream>
#include <string>
using namespace std;

class dis{
   int feet;
   int inches;
   public:
      dis(){
         feet = 0;
         inches = 0;
      }
      dis(int f , int i){
         feet = f;
         inches = i;
      }

   friend istream &operator>>(istream &input , dis &x){
      input>>x.feet>>x.inches;
      }

   friend ostream &operator<<(ostream &output , dis &x){
      output<<x.feet<<" "<<x.inches;
      return output;
      }
};

int main(){
   dis a1(5 , 10), a2(5 , 10) , a3;
   cin >> a3;
   cout << a3;
   return 0;
}
