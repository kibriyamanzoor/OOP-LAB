#include <iostream>
using namespace std;
class Lamp {
public:
    Lamp() {
        cout << "Lamp ON" << endl;
    }
    ~Lamp() {
        cout << "Lamp OFF" << endl;
    }
};
int main() {
    Lamp l;
    cout << "Reading a book" << endl;
    return 0;
}
