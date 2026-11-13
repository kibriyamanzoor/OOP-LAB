#include <iostream>
#include <string>
using namespace std;
class Book {
    string title;
    double price;
public:
    Book() {
        title = "Unknown";
        price = 0;
    }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};
int main() {
    Book b;
    b.display();
    return 0;
}
