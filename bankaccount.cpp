#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string customerName;
    double balance;

public:
    BankAccount(int acc, string name, double bal) {
        accountNumber = acc;
        customerName = name;
        balance = bal;
    }

    friend void compareBalance(BankAccount, BankAccount);
};

void compareBalance(BankAccount a, BankAccount b) {
    if (a.balance > b.balance) {
        cout << "Account Holder with Higher Balance: " << a.customerName << endl;
        cout << "Balance: " << a.balance << endl;
    }
    else if (b.balance > a.balance) {
        cout << "Account Holder with Higher Balance: " << b.customerName << endl;
        cout << "Balance: " << b.balance << endl;
    }
    else {
        cout << "Both accounts have the same balance." << endl;
    }
}

int main() {
    BankAccount account1(101, "Shyamu", 50000);
    BankAccount account2(102, "Ramu", 65000);

    compareBalance(account1, account2);

    return 0;
}