#include <iostream>
using namespace std;
class Length {
    int metres;
public:
    Length(int m) {
        metres = m;
    }
    Length add(Length other) {
        Length result(metres + other.metres);
        return result;
    }
    void display() {
        cout << metres << " metres" << endl;
    }
};
int main() {
    Length l1(120);
    Length l2(80);
    Length l3 = l1.add(l2);
    l3.display();
    return 0;
}
