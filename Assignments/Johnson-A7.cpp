//**********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Seperate an integer value into smaller values and calculate their 
//              average in grade format. 
// Due Date:    9/23/2020
//**********************************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    int value;
    int p1, p2, p3, p4;// pairs
    int d1, d2, d3, d4, d5, d6, d7, d8;// digits
    double avg; // The example used a double
    char grade;

    cout << "Input: ";
    cin >> value;

    d8 = value % 10;// saves the last digit
    value = value / 10;// drops the last digit
    d7 = value % 10;
    value = value / 10;
    p4 = (d7 * 10) + d8;// pairs the seperated digits. 

    d6 = value % 10;
    value = value / 10;
    d5 = value % 10;
    value = value / 10;
    p3 = (d5 * 10) + d6;

    d4 = value % 10;
    value = value / 10;
    d3 = value % 10;
    value = value / 10;
    p2 = (d3 * 10) + d4;

    d2 = value % 10;
    value = value / 10;
    d1 = value % 10;
    value = value / 10;
    p1 = (d1 * 10) + d2;

    avg = double(p1 + p2 + p3 + p4) / 4.0;// calculates average 

    switch (int(avg))
    {
    case 90 ... 99:
        grade = 'A';
        break;

    case 80 ... 89:
        grade = 'B';
        break;
    
    case 70 ... 79:
        grade = 'C';
        break;

    case 60 ... 69:
        grade = 'D';
        break;
    
    case 00 ... 59:
        grade = 'F';
        break;

    default:
        cout << "Invalid input.";
        break;
    }

    // formatted like provided examples. 
    cout << "Output:\n\t\t" << p1 << "\n\t\t" << p2 << "\n\t\t" << p3 << "\n\t\t" << p4 << "\n\t\t";
    cout << setprecision(2) << fixed << "Avg: " << avg << "\n\t\t";
    cout << "Grade: " << grade << endl;

    return 0;
}