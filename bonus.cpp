/* c++ fanction computing bonus of employees in a company
Auther:David Kariuki
Reg No: BSCIT-05-0042/2024
Date:15/3/2025
Version 1
*/
#include <iostream>
using namespace std;

int main() {
    double salary, bonus;
    int years;
    
    cout<< "enter salary:";
    cin>>salary;
    cout<<"enter years:";
    cin>>years;
    
    if (years >10){
        bonus = salary*0.12;
    }
    else if (years >=6 && years<=10){
        bonus = salary*0.1;
    }
    else {
        bonus = salary*0.08;
    }
    cout<< "your net bonus amount is:" <<bonus<<endl;
    
    return 0;
}