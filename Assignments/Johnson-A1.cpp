//***********************************************************************************
// Name:    Mark Johnson
// Course:  CS 155 - Computer Science I
// Semester:    Fall 2020
// Assignment:  Type in the program and see what it will do
// Due Date:    8/25/20
// Compiling:   I compiled the program once. I did not receive any error messages.
//***********************************************************************************
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const string STARS="**************************";

int main(){
    string name, day;
    int date, year, month, y, c;
    int week;

    cout << "Please enter your name, with no spaces: ";
    cin >> name;
    cout << STARS << endl << "Hello " << name << ", I hope your are having a great day!" <<endl << STARS << endl;

    cout << "In what year were you born? ";
    cin >> year;
    cout << "In what month were you born (use 1-Jan, 2-Feb, etc)? ";
    cin >> month;
    cout << "In what day of the month were you born? ";
    cin >> date;

    if (month == 1){
        month = 13;
        year = year-1;
    }
    if (month == 2){
        month = 14;
        year = year-1;
    }

    y = year % 100;
    c = year / 100;
    week = int((date+floor((13*(month+1))/5.0)+y+floor(y/4.0)+floor(c/4)-(2*c)))%7;

    switch (week){
        case 1: day = "Sunday"; break;
        case 2: day = "Monday"; break;
        case 3: day = "Tuesday"; break;
        case 4: day = "Wednesday"; break;
        case 5: day = "Thursday"; break;
        case 6: day = "Friday"; break;
        case 7: day = "Saturday"; break;
        default: day = "ERROR";
    }
    cout << "You were born on a " << day << endl;
    return 0;
}
