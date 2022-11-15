//**********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Separate an integer value into smaller values and calculate their 
//              average in grade format. 
// Due Date:    9/28/2020
//**********************************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    int value;// 8 digit integer value
    int num, d1, d2;// number and digits
    int sum = 0;// sum  
    double avg; // The example used a double
    char grade; 

    cout << "Input: ";
    cin >> value;
    
    cout << "Output:\n\t\t";

    int count = 0;
    while (count < 8){

        d2 = value % 10;
        value = value / 10;

        if (count%2 == 0){
            d1 = value % 10;
            num = (d1*10) + d2;
            sum += num; // for calculating average 
            cout << num << "\n\t\t"; // formatting
            d1 = 0; // needs reset every other run
            d2 = 0;
        }
        count++;
    }

    avg = double(sum) / 4.0;// calculates average 

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

    cout << setprecision(2) << fixed << "Avg: " << avg << "\n\t\t";
    cout << "Grade: " << grade << endl;

    return 0;
}