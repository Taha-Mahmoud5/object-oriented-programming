//inheretance
//تنفيذ مفهوم 
//reyouzabilate
//base class --> derived class
//super class -- sub class
//member private can access from the same class
//member prtected can access from the derived class and at the same class
//member public can access from any where

#include <iostream>
#include <string>
using namespace std;

class stud{
protected:
   int w , h;
public:
void set(int a, int b){
   w = a;
   h = b;
}
};
class rec : public stud{
   public:
   int area(){
      return (w * h);
   }
};

class tre : public stud{
   public:
   int area(){
      return (w * h / 2);
   }
};

int main(){
   rec r;
   tre t;
   r.set(4 , 5);
   t.set(4 , 5);
   cout<<r.area()<<"\n";
   cout<<t.area()<<"\n";
   return 0;
}
//stud :: w --> protected access
//rec :: w --> protected access
//stud :: set() --> public access
//rec :: set()--> public access