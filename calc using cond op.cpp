#include <iostream>
using namespace std;
int main() {
    float a, b, result;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;
    if (op == '/' && b == 0) {
        cout << "Division by zero is not possible.";
    }
    else if (op == '%') {
        int x = (int)a;
        int y = (int)b;

        if (y == 0)
            cout << "Division by zero is not possible.";
        else
            cout << "Result = " << x % y;
    }
    else {
        result = (op == '+') ? a + b :
                 (op == '-') ? a - b :
                 (op == '*') ? a * b :
                 (op == '/') ? a / b : 0;

        if (op == '+' || op == '-' || op == '*' || op == '/')
            cout << "Result = " << result;
        else
            cout << "Invalid operator.";
    }
    return 0;
}