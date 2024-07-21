#include <iostream>
#include <cstring>
using namespace std;
//Destructor
//نفس اسم الكلاس وقبله  ~
//لا ياخذ باراميتر ولا يؤجع قيمه ولا حتى void نوع واحد بس يعني
//الكلاس لا يحتوي الا على destructor واحد بس
//يمسح الاوبجكت دينامك من الميموري
//يدمر الاوبجكت من الاسفل للاعلى
// يتم استدعاءه عند قفل الرايت بريس في اي سكوب
//الديفولت للكلاس انه برايفت على عكس الاستراكت
class Rectancle{
private:
   int w , h;
public:
   // Rectancle(int a , int b):w(a),h(b){
   //    cout<<"a rectangle has been created\n";
   // }
   Rectancle():w(1),h(1){
      cout<<"w = "<<w<<"     "<<"h = "<<h<<"\n";
   }
   Rectancle(int a , int b){
      w = a;
      h = b;
      cout<<"a rectangle has been created\n";
      Rectancle ob;
      
   }
   ~Rectancle(){
      cout << w << " " << h << " a rectangle has been destroyed\n\n";
   }
};


int main(){
   Rectancle a1(10 , 10) , a2(5 , 5);
   return 0;
}
