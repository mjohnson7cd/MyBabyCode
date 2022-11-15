#include <iostream>
using namespace std;

int main() {
    double degC, degF, temp;

    cout << "Enter temperature in Celsius: ";
    cin >> degC;

    temp=degC*9;
    temp=temp/5;
    degF=temp+32;

    cout << "Temperature in Celsius: " << degC << endl;
    cout << "Temperature in Fahrenheit: " << degF << endl;

    return 0;
}