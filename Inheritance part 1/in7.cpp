#include <iostream>
#include <cstring>
using namespace std;

class person {
private:
    string name;
    string address;
    int age;

public:
    person(string n, string d, int a) {
        name = n;
        address = d;
        age = a;
    }

    string get_name() {
        return name;
    }

    string get_address() {
        return address;
    }

    int get_age() {
        return age;
    }

    virtual void print() {
        cout << name << " " << address << " " << age << "\n";
    }
};

class student : public person {
private:
    float grade;
public:
    student(string x, string ad, int a, float g) : person(x, ad, a) {
        grade = g;
    }

    void print(){
        person::print();
        cout<< "Grade: " << grade << endl;
    }
};

int main() {
    person p1("Islam", "Cairo", 50);
    p1.print();

    student s1("Ali", "New York", 20, 88.55);
    s1.print();

    return 0;
}
