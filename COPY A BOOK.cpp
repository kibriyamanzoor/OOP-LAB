#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title;
    int price;
    Book(string t, int p) {
        title = t;
        price = p;
    }
    void show() {
        cout << title << " - Rs " << price << endl;
    }
};
int main() {
    Book b1("C++ Basics", 450);
    Book b2 = b1;
    b1.show();
    b2.show();
    return 0;
}
