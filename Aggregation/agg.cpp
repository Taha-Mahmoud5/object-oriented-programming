#include <iostream>
using namespace std;

// تعريف كلاس الكتاب
class Book {
public:
    void print() {
        cout << "This is a book " << endl;
    }
};

// تعريف كلاس المكتبة
class Library {
private:
    Book book; // التجميع: المكتبة تحتوي على كائن كتاب
public:
    Book x;
    void displayBook() {
        book.print();
    }
};

int main() {
    // إنشاء كائن مكتبة
    Library library;
    // عرض الكتاب الموجود في المكتبة
    library.displayBook();

    library.x.print();
    return 0;
}
