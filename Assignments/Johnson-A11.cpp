//**********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Write a program to input and output files.
// Due Date:    10/09/2020
//**********************************************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    int input, avg;
    int count=0, sum=0;
    ifstream fileIn;

    fileIn.open("A11_in.txt");
    fileIn>>input;

    while(!fileIn.eof()){
        sum+=input;
        fileIn >> input;
        count++;
    }

    avg = double(sum)/count;

    ofstream fileOut;
    fileOut.open("A11_out.txt");
    fileOut << "Average: " << avg << endl;

    fileOut.close();
    fileIn.close();

    return 0;
}