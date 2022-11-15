#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void minMax(string&, int&, int&);

int main(){
    string fileName = "A14.txt";
    int min, max;
    minMax(fileName, min, max);

    cout << "Min: " << min << endl;// I was unsure if you wanted any output to console
    cout << "Max: " << max << endl;// so I added it anyway.

    return 0;
}

void minMax(string& fn, int& min, int& max){
    int temp = 1;
    ifstream inFile;
    inFile.open(fn);
    while (!inFile.eof()){
        inFile >> temp;
        if (temp < min){
            min = temp;
        }
        if (temp > max){
            max = temp;
        }
    }
}