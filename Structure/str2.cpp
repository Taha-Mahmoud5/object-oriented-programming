#include <iostream>
#include <string>
using namespace std;
//انشاء انواع مختلفه من البيانات
//نوصل للعنصر عن طريق اسمه وليس الاندكس
//لانقارن استراكتشر مع اخر
//نقارن الداتا المتشابهه للستراكتشر عادي
struct Distance{
   int feet;
   float inches;
};
Distance add_distance(Distance d1, Distance d2){
   Distance result;
   result.feet = d1.feet + d2.feet;
   result.inches = d1.inches + d2.inches;
   return result;
}

int main(){
   Distance x, y, z;
   cout << "Enter feet value \n";
   cin >> x.feet >> y.feet;
   cout << "Enter inches value \n";
   cin >> x.inches >> y.inches;
   z = add_distance(x, y);
   cout << "z.feet = " << z.feet << " z.inches = " << z.inches << endl;

   return 0;
}