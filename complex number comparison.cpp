#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float r1, i1, r2, i2;
    cout << "Enter real and imaginary parts of first number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary parts of second number: ";
    cin >> r2 >> i2;
    float m1 = sqrt(r1 * r1 + i1 * i1);
    float m2 = sqrt(r2 * r2 + i2 * i2);
    if (m1 > m2)
        cout << "First complex number has higher magnitude.";
    else if (m2 > m1)
        cout << "Second complex number has higher magnitude.";
    else
        cout << "Equal";
    return 0;
}