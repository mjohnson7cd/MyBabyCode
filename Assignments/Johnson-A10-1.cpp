//**********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Have user input several integer values. Print how many values are
//              between 50 and 75/
// Due Date:    9/30/2020
//**********************************************************************************

#include <iostream>
using namespace std;

int main(){

    int next = 1;
    int count = 0;

    while (next != -1){

        cout << "Enter a value, -1 to stop: ";
        cin >> next;

        if (next >=50 && next <= 75){
            count++;
        }

    cout << "\nThere are " << count << " number(s) between 50 and 75." << endl;

    }
    return 0;
}
