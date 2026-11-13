#include <iostream>
using namespace std;
class Marks {
public:
    int value;
    void add(Marks a, Marks b) {
        value = a.value + b.value;
    }
};
int main() {
    Marks m1, m2, total;
    m1.value = 40;
    m2.value = 35;
    total.add(m1, m2);
    cout << "Total marks = " << total.value << endl;
    return 0;
}
