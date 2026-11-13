#include <iostream>
#include <string>
using namespace std;
class BankAccount {
    string holderName;
    double balance;
public:
    void setAccount(string name) {
        holderName = name;
        balance = 0;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        }
        else if (amount > 0) {
            balance -= amount;
        }
    }
    void showBalance() {
        cout << "Balance = " << balance << endl;
    }
};
int main() {
    BankAccount b;
    b.setAccount("Sana");
    b.deposit(500);
    b.withdraw(200);
    b.withdraw(1000);
    b.showBalance();
    return 0;
}
