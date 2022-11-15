#include <iostream>
#include <iomanip>
using namespace std;

const double KILO = 2.20462;
const int STONE = 14;
int main(){
    double k1,k2,k3,k4,k5;//kilo values
    double L1,L2,L3,L4,L5;//lbs values
    double s1,s2,s3,s4,s5;//stone values
    cout <<"Enter 5 double values in Kilograms: " <<endl;
    cin >>k1>>k2>>k3>>k4>>k5;

    L1=k1*KILO;
    L2=k2*KILO;
    L3=k3*KILO;
    L4=k4*KILO;
    L5=k5*KILO;

    s1=L1/STONE;
    s2=L2/STONE;
    s3=L3/STONE;
    s4=L4/STONE;
    s5=L5/STONE;

    cout<<setprecision(2)<<fixed;
    cout<<setw(15)<<"Weight(kg)"<<setw(15)<< "Weight(lbs)"<<setw(15)<<"Weight(st)"<<endl;
    cout<<setw(15)<<k1<<setw(15)<<L1<<setw(15)<<s1<<endl;
    cout<<setw(15)<<k2<<setw(15)<<L2<<setw(15)<<s2<<endl;
    cout<<setw(15)<<k3<<setw(15)<<L3<<setw(15)<<s3<<endl;
    cout<<setw(15)<<k4<<setw(15)<<L4<<setw(15)<<s4<<endl;
    cout<<setw(15)<<k5<<setw(15)<<L5<<setw(15)<<s5<<endl;

    return 0;
}
