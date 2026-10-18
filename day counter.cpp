#include <iostream>
using namespace std;
int main() {
    int day, month, year;
    cout << "Enter date (DD MM YYYY): ";
    cin >> day >> month >> year;
    bool leap = false;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                leap = true;
        }
        else
            leap = true;
    }
    int daysInMonth;
    if (month == 2) {
        if (leap)
            daysInMonth = 29;
        else
            daysInMonth = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    }
    else if (month >= 1 && month <= 12) {
        daysInMonth = 31;
    }
    else {
        daysInMonth = 0;
    }
    if (month < 1 || month > 12 || day < 1 || day > daysInMonth) {
        cout << "Invalid date.";
    }
    else {
        int y = year;
        int m = month;
        if (m < 3) {
            m += 12;
            y--;
        }
        int k = y % 100;
        int j = y / 100;
        int h = (day + (13 * (m + 1)) / 5 + k +
                 k / 4 + j / 4 + 5 * j) % 7;
        cout << "Valid date.\n";
        cout << "Day: ";
        switch (h) {
            case 0: cout << "Saturday"; break;
            case 1: cout << "Sunday"; break;
            case 2: cout << "Monday"; break;
            case 3: cout << "Tuesday"; break;
            case 4: cout << "Wednesday"; break;
            case 5: cout << "Thursday"; break;
            case 6: cout << "Friday"; break;
        }
    }
    return 0;
}