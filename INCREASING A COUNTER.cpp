#include <iostream>
using namespace std;
class Counter {
public:
    int value;
    Counter() {
        value = 0;
    }
};
void increase(Counter &c) {
    c.value++;
}
int main() {
    Counter c;
    increase(c);
    increase(c);
    increase(c);
    cout << "Value = " << c.value << endl;
    return 0;
}
