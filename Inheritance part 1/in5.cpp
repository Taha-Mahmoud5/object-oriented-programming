#include <iostream>
#include <string>
using namespace std;

// constructor and destroctur
// operator=() member
// friends
// بيتوارسوا بدون ماشوفهم

class A{
private:
    int i;

public:
    A(){
        cout << "A : Empty cnostructor\n";
    }
    A(int a){
        cout << "A : Paramaterize cnostructor " << a << "\n";
    }
};

class B : public A{
public:
    B(){
        "B : Empty cnostructor\n";
    }
    B(int a){
        cout << "B : Paramaterize cnostructor " << a << "\n";
    }
};

class C : public A{
public:
    C(int a, int b) : A(b){ // لتوارث paramaterize constructor
        cout << "C : Paramaterize cnostructor " << a << " " << b << "\n";
    }
};

int main(){
    B a1(5);
    C a2(10, 15);
    return 0;
}
