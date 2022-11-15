//**********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Create a program that uses arithmatic operators with floating point 
//              values.
// Due Date:    8/31/20
//**********************************************************************************
#include <iostream>
//#include <cmath>

using namespace std;



int main(){
    double num1, num2;

    cout << "Enter two numbers." << endl;
    cin >> num1 >> num2;
    cout << "\nnum1: " << num1 << "\nnum2: " << num2 << endl;

    cout << "\nSum: " << num1+num2 << endl;
    cout << "Difference: " << num1-num2 << endl;
    cout << "Product: " << num1*num2 << endl;
    cout << "Quotient: " << num1/num2 << endl;
    cout << "Remainder of first value divided by 2: " << static_cast<int>(num1) % 2 << endl;
    //cout << "Remainder of first value divided by 2: " << fmod(num1, 2) << endl;
    cout << "The average of the two values is : " << (num1+num2)/2 << endl << endl;

    return 0;
}