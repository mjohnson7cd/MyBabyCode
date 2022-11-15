/*
    Mark Johnson
    Project 1
    This program is designed to provide a neatly formatted invoice for a local cinema
    Due date: 09/08/2020
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){

    string movie;//movie title
    int adultTickets, childTickets;//number of tickets sold for adults and children
    double gross, distributor, net;//gross revenue, distributor amount, and net profit respectively
    double adultPrice=7.50;//sets adult ticket price
    double childPrice=4.75;//sets child ticket price

    cout << "What is the name of the movie? ";
    getline(cin, movie);

    cout << "How many adult tickets sold? ";
    cin >> adultTickets;

    cout <<"How many children tickets sold? ";
    cin >> childTickets;

    gross=(adultTickets*adultPrice)+(childTickets*childPrice);// calculates gross box office revenue

    distributor=gross*0.8;// calculates the distributor's share

    net=gross*0.2;// calculates the cinema's share

    cout << setprecision(2) << fixed << endl;// rounds to 2 decimal places and always displays 2 decimal places

    cout << "Movie Name: "<< setw(23) << right << movie << endl;// neatly aligns movie title to match the rest of the output
    cout << "Gross Box Office Revenue: $" << setw(8) << gross << endl;// neatly aligns the output 
    cout << "Distributor Amount:       $" << setw(8) << distributor << endl;
    cout << "Net Profit:               $" << setw(8) << net << endl;

    return 0;
}