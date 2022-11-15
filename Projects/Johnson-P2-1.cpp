/*
    Mark Johnson
    Project 2
    This program is designed to convert one date format to another. 
    Due date: 09/29/2020
*/
#include <iostream>
using namespace std;

int main(){

    int ISO;// ISO 8601 date
    int year, month, day; 
    int d1, d2, d3, d4, d5, d6, d7, d8;// each digit of ISO
    int length = 1;// length of ISO. Default minimum is 1

    cout << "Enter the ISO 8601 formatted date: ";
    cin >> ISO;

    length = to_string(ISO).length();

    if (length==8){

        d8 = ISO % 10;// saves the value of the last digit. 
        ISO = ISO / 10;// drops the last digit of ISO
        d7 = ISO % 10;
        ISO = ISO / 10;
        day = (d7*10)+d8;// saves the two values and drops any leading zeros. 

        d6 = ISO % 10;
        ISO = ISO / 10;
        d5 = ISO % 10;
        ISO = ISO / 10;
        month = (d5*10)+d6;

        d4 = ISO % 10;
        ISO = ISO / 10;
        d3 = ISO % 10;
        ISO = ISO / 10;
        d2 = ISO % 10;
        ISO = ISO / 10;
        d1 = ISO % 10;
        ISO = ISO / 10;
        year = (d1*1000)+(d2*100)+(d3*10)+d4;// years have more digits.

        if (month>0 && month<=12){

            if (day>0 && day<=31){

                if (year>=1000 && year<=9999){
                     
                    cout << month << "/" << day << "/" << year << endl;// will only execute if all all values are appropriate.

                } else {
                    cout << "Invalid Year." << endl;
                } 

            } else {
                cout << "Invalid Day." << endl;
            }

        } else {
            cout << "Invalid Month." << endl;
        }
    
    } else {
        cout <<"Invalid Length." << endl;
    }
    
    return 0;

}