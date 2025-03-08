/*
c++ function with array
Auther:Daviid Kariuki
Reg No:BSCIT-05-0042/2024
Date:06/03/2025
Version 1
*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Setter for accountHolder 
    string setAccountHolder(string name) {
        accountHolder = name;
        return accountHolder;
    }

    // Getter for accountHolder
    string getAccountHolder() {
        return accountHolder;
    }

    // Setter for balance
    double setBalance(double amount) {
        if (amount >= 0) { 
            balance = amount;
        } else {
            cout << "Invalid balance!" << endl;
        }
        return balance;
    }

    // Getter for balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount;

    cout << "Setting account holder: " << myAccount.setAccountHolder("David") << endl;
    cout << "Setting balance: ksh " << myAccount.setBalance(5000) << endl;

    cout << "Account Holder: " << myAccount.getAccountHolder() << endl;
    cout << "Balance: ksh " << myAccount.getBalance() << endl;

    return 0;
}