//**********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Write a program that generates non-repeating random numbers between 
//              10 and 100.
// Due Date:    11/04/2020
//**********************************************************************************
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void randomNumber(int a[], int size);
void printArray(int a[], int size);

int main(){

    int size = 20;
    int arr[20]={0};

    randomNumber(arr, size);
    printArray(arr, size);

    return 0;
}


void randomNumber(int a[], int size){
    srand(time(0));
    int numbers[101]={0};// 0 indicates the number has not been used
    int c = 0;
    int temp;
    while (c < size) {
        temp = rand() % (100+1-10)+10;// inclusive of 10 and 100
        if (numbers[temp] == 0 ) {
               numbers[temp] = 1;// 1 indicates the number has been used
               a[c++] = temp;
            }
    }
}

void printArray(int a[], int size){
    for (int c=0; c<size; c++){
        cout << "Array position " << c << ": " << a[c] << endl;
    }
}