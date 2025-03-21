/* c++ fanction computing the BMI 
Auther:David Kariuki
Reg No: BSCIT-05-0042/2024
Date:15/3/2025
Version 1
*/
#include <iostream>
using namespace std;

void calculateBMI(float weight, float height) {
    float bmi = weight / (height * height);
    string category;
    
    if (bmi < 18.5) {
        category = "Underweight";
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        category = "Normal weight";
    } else if (bmi >= 25 && bmi <= 29.9) {
        category = "Overweight";
    } else {
        category = "Obesity";
    }
    
    cout << "Your BMI is: " << bmi << endl;
    cout << "Category: " << category << endl;
}

int main() {
    float weight, height;
    
    cout << "Enter your weight (kg): ";
    cin >> weight;
    
    cout << "Enter your height (m): ";
    cin >> height;
    
    if (height <= 0) {
        cout << "Invalid height input. Height must be greater than zero." << endl;
        return 1;
    }
    
    calculateBMI(weight, height);
    
    return 0;
}
