/* c++ fanction displaying loan eligibility
Auther:David Kariuki
Reg No: BSCIT-05-0042/2024
Date:15/3/2025
Version 1
*/
#include <iostream>
using namespace std;

void checkLoanEligibility(int age, double income) {
    if (age >= 21 && income >= 21000) {
        cout << "Congratulations! You qualify for a loan." << endl;
    } else {
        cout << "Unfortunately, we are unable to offer you a loan at this time." << endl;
    }
}

int main() {
    int age;
    double income;
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your annual income: ";
    cin >> income;
    
    checkLoanEligibility(age, income);
    
    return 0;
}
