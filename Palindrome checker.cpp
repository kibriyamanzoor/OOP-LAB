#include <iostream>
using namespace std;
int main() {
    int start, end;
    cout << "Enter range: ";
    cin >> start >> end;
    cout << "Palindrome numbers: ";
    for (int n = start; n <= end; n++) {
        int temp = n;
        int reverse = 0;
        while (temp != 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }
        if (n == reverse)
            cout << n << " ";
    }
    return 0;
}