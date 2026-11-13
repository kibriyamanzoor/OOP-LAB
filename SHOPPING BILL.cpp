#include <iostream>
#include <string>
using namespace std;
class Product {
    string name;
    double price;
    int quantity;
public:
    void input() {
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;
    }
    double totalBill() {
        return price * quantity;
    }
    void display() {
        cout << "Item: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total bill = " << totalBill() << endl;
    }
};
int main() {
    Product p;
    p.input();
    p.display();
    return 0;
}
