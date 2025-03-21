/* c++ fanction for record keeping in a library
Auther:David Kariuki
Reg No: BSCIT-05-0042/2024
Date:15/3/2025
Version 1
*/
#include <iostream>
using namespace std;

void calculateFine(int bookID, int dueDate, int returnDate) {
    int daysOverdue = returnDate - dueDate;
    int fineRate = 0;
    int fineAmount = 0;
    
    if (daysOverdue > 0) {
        if (daysOverdue <= 7) {
            fineRate = 20;
        } else if (daysOverdue <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }
        fineAmount = daysOverdue * fineRate;
    }
    
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << (daysOverdue > 0 ? daysOverdue : 0) << endl;
    cout << "Fine Rate: Ksh. " << fineRate << " per day" << endl;
    cout << "Total Fine Amount: Ksh. " << fineAmount << endl;
}

int main() {
    int bookID, dueDate, returnDate;
    
    cout << "Enter Book ID: ";
    cin >> bookID;
    
    cout << "Enter Due Date (as an integer): ";
    cin >> dueDate;
    
    cout << "Enter Return Date (as an integer): ";
    cin >> returnDate;
    
    calculateFine(bookID, dueDate, returnDate);
    
    return 0;
}
