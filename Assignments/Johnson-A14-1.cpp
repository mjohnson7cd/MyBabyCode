//**********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Array Practice
// Due Date:    10/29/2020
//**********************************************************************************
#include <iostream>
using namespace std;

int main(){
    const int size = 5;
    double val[size]={0}, avg, sum=0;

    cout << "Enter 5 double values" << endl;

    for (int c1=0; c1<size; c1++){
        cin >> val[c1];
    }

    for (int c2=0; c2<size; c2++){
        sum+=val[c2];
    }
    avg = sum/size;


    for (int c3=4; c3>=0; c3--){
        cout << "Value " << c3+1 << " is: " << val[c3] << endl;
    }

    cout << "Average: " <<avg << endl;

    return 0;
}
