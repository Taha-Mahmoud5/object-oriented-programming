#include <iostream>
#include <string>
using namespace std;

class A
{
private:
    int i;

protected:
    int j;

public:
    int k;
};

class B : public A
{ // كل حاجه هتتورس زي الكلاس A من حيث برايفت وبابلك وبروتكتد
    int x;

public:
    int y;
    int get_i()
    {
        //  return i;
    }
    int get_j()
    {
        return j;
    }
};

int main()
{
    B ob;
    // ob.i = 5; //cannt access private member declared in class A
    // ob.j = 10;//cannt access private member declared in class A
    ob.k = 15;
    // ob.x = 20;//cannt access private member declared in class B
    ob.y = 20;
    return 0;
}
