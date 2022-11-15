/*

    Sentinel controlled structures.

    Write a program that asks the user for character, one at a time.
    Ask  the user if they wish to continue: Y or N.
    If they wish to continue, ask for the next charter
    Otherwise, end program

*/

#include <iostream>
using namespace std;

int main(){

    char ch, kill = 'y';

    while (kill == 'Y' || kill == 'y'){

        cout << "Enter a character: ";
        cin >>  ch;

        cout <<"Do you wish to continue? (Y or N): ";
        cin >> kill;

    }
    return 0;
}
