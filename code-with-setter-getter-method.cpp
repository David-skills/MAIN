/* c++ fanction with setter and getter method
Auther:David Kariuki
Reg No: BSCIT-05-0042/2024
Date:10/2/2025
Version 1
*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
    string accountHolder;
    double balance;

public:
// setter for accountHolder
void setData (string A) {
    accountHolder = A;
}
//getter for accountHolder
string getData() {
    return accountHolder;
}
//setter for balance
void setBalance(double Bal) {
    balance = Bal;
}
//getter for balance
double getBalance() {
    return balance;
}
};

int main(){
    BankAccount A1;// creating an instance of BankAccount
    A1.setData("David");
    cout<< "A is "<<A1.getData() <<endl;// fixed method call case
    
    A1.setBalance(2000);
    cout<<"balance is "<<A1.getBalance() <<endl;// fixed method call case
    return 0;
}

