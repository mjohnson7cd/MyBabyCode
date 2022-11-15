#include <iostream>
using namespace std;

void printGrade(char lg){// letter grade
    switch (lg) 
    {
    case 'A':
        cout << "Great Work!" << endl;
        break;
    case 'B':
        cout << "Good job." << endl;
        break;
    case 'C':
        cout << "Passing." << endl;
        break;
    case 'D':
        cout << "Not good." << endl;
        break;
    case 'F':
        cout << "Failing!" << endl;
        break;
    default:
        cout << "Not a grade." << endl;
        break;
    }
}

int main(){

    char grade='E';
    
    while (grade != 'Z'){
        cout << "Enter uppercase letter grade ('Z' to quit): ";
        cin >> grade;
        printGrade(grade);// calls the function for each input
    }

    return 0;

}