#include <iostream>
using namespace std;

int main(){
    const int size = 10;
    double val[size]={0};
    double sum=0, avg=0;

    cout << "Enter 10 values." << endl;

    for (int i=0; i<size; i++){
        cin >> val[i];
    }

    for (int k=0; k<size; k++){
        sum+=val[k];
    }

    avg=sum/size;

    for (int w=0; w<size; w++){
        cout << "Value " << w+1 <<  " is " << val[w] << endl;
    }

    cout << "Average: " << avg << endl;

    return 0;
}
