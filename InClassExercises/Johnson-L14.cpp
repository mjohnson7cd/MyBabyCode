#include <iostream>
#include <cmath>
using namespace std;


int power (int a, int b){
    int temp;
    temp = pow(a,b);
    return temp;
}


int main (){
    int a=2;
    int b=3;

    cout << a << " raised to the " << b << " power is " << power(a,b) << endl;


    return 0;

}
