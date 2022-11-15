//**********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Write a program that prints a 4x3 array with the values in each row
//              appearing to be reversed. 
// Due Date:    11/16/2020
//**********************************************************************************
#include <iostream>
using namespace std;

void revPrintArray(int a[][3], int r, int c);

int main(){
    int a[4][3]={0};

    cout << "Enter array values from left to right and top to bottom: "<< endl;

    for(int r=0;r<4;r++){
        for(int c=0;c<3;c++){
            cin>>a[r][c];
        }
    }

    revPrintArray(a, 4, 3);

    return 0;
}

void revPrintArray(int a[][3], int rows, int columns){
    cout << "Reverse of array: " << endl;
    for (int r=0; r<rows; r++){
        for (int c=columns-1; c>=0; c--){
            cout<< a[r][c]<<" ";
        }
        cout << endl;
    }
}
