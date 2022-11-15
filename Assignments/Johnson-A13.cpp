//**********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Write a program to find the greatest common denominator 
// Due Date:    10/19/2020
//**********************************************************************************
#include <iostream>
using namespace std;

void gcd(int, int, int&);

int main() {
    int num1, num2, result;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    gcd(num1, num2, result);

    cout << "The greatest common denominator of " << num1 << " and " << num2 << " is " << result << endl;
    return 0;
}

void gcd(int n1, int n2, int &result) {
    int temp;
    while (n2 != 0){
        temp = n1;
        n1 = n2;
        n2 = temp % n2;
    }
    result = n1;
}
