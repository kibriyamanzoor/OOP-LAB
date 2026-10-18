#include <iostream>
using namespace std;
int main() {
    int n, digit;
    int sum = 0, product = 1;
    cout << "Enter an integer: ";
    cin >> n;
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        product *= digit;
        n = n / 10;
    }
    cout << "Sum of digits = " << sum << endl;
    cout << "Product of digits = " << product;
    return 0;
}