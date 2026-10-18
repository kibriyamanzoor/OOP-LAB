#include <iostream>
using namespace std;
int main() {
    int marks[5];
    int total = 0, fail = 0;
    float percentage;
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];

        if (marks[i] < 40)
            fail++;
    }
    percentage = total / 5.0;
    if (fail > 1) {
        cout << "Repeat Year";
    }
    else {
        if (percentage >= 90)
            cout << "Grade A";
        else if (percentage >= 80)
            cout << "Grade B";
        else if (percentage >= 70)
            cout << "Grade C";
        else if (percentage >= 60)
            cout << "Grade D";
        else
            cout << "Grade F";
    }
    return 0;
}