//**********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Create a program that informs a cashier how much change is needed 
//              to complete a transaction.
// Due Date:    9/09/20
//**********************************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double TPP, CG;// 'total purchasing price' and 'cash given' respectively 

    cout <<"Enter the total: $";
    cin >> TPP;

    cout << "Enter the amount of cash given: $";
    cin >> CG;

    cout << setprecision(2) << fixed; 

    if (CG >= TPP){//runs when  there is more cash than total or exact change
        cout << "Change due: $" << CG-TPP << endl;
    }
    if (TPP > CG){//runs when ther is more total than cash
        cout << "Insufficient funds." << endl;
    }

    return 0;

}