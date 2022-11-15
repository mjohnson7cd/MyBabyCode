//**********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Create a program that accepts 5 positive integers and determines 
//              the first and second largest values. 
// Due Date:    9/14/20
//**********************************************************************************
#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3, num4, num5;
    int L1, L2;// largest value and second largest value respectively

    cout <<"Enter 5 positive non-zero integer values." << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    if (num1 < num2){ // saves the largest of the two into 'L1' and second largest to 'L2'
        L1 = num2;
        L2 = num1;
    } else {
        L1 = num1;
        L2 = num2;
    }


    if (L1 < num3){        // checks to see if the current number is the largest number so far
        L2 = L1;           // if so, overwrites 'L2' with 'L1' value
        L1 = num3;         // overwrites 'L1' with the current number
    } else if (L2 < num3){ // checks to see if the current number the second largest number so far
        L2 = num3;         // if so, the value overwrites 'L2'
    }


    if (L1 < num4){
        L2 = L1;
        L1 = num4;
    } else if (L2 < num4){
        L2 = num4;
    }


    if (L1 < num5){
        L2 = L1;
        L1 = num5;
    } else if (L2 < num5){
        L2 = num5;
    }

    cout <<"The largest number is: " << L1 << endl;
    cout <<"The second largest number is: " << L2 << endl;

    return 0;
}