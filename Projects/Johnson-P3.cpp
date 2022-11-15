/*
    Mark Johnson
    Project 3
    This program is designed to determine the winners of a series of elections.
    Due date: 10/13/2020
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countVotes(int, int);// sorts and counts votes.
double votePercent(int,int);// percentage of popular vote
int compare(int, int);// tells you which is bigger, 1 or 2 returned.

int main(){

    int temp=0;
    int counter=0;
    int num[9];
    num[1]=num[2]=num[3]=num[4]=num[5]=num[6]=num[7]=num[8]=0;

    string names[]={"/", 
    "Cedric Diggory", 
    "Harry Potter", 
    "Hermione Granger", 
    "Vincent Crabbe", 
    "Luna Lovegood", 
    "Susan Bones", 
    "Draco Malfoy", 
    "Neville Longbottom"};

    string elect[]={"/", // added blank values to position 0 and all even positions
    "Presidential Election Winner:", "/",// this will be necessary for the 'for' loop
    "Vice Presidential Election Winner:", "/", 
    "Secretary Election Winner:", "/", 
    "Treasurer Election Winner:"};

    ifstream inFile;

    inFile.open("votes1.txt");// FILE

    while (!inFile.eof()){
        inFile>>temp;
        counter++;
        switch (countVotes(counter, temp))
        {
            case 1:
                num[1]++;
                break;
            case 2:
                num[2]++;
                break;
            case 3:
                num[3]++;
                break;
            case 4:
                num[4]++;
                break;
            case 5:
                num[5]++;
                break;
            case 6:
                num[6]++;
                break;
            case 7:
                num[7]++;
                break;
            case 8:
                num[8]++;
                break;
            default:
                cout <<"Error: counting votes"<<endl;
                break;
        }
    }
    
   for (int i=1; i<9; i+=2){// will run 4 time. every other value is the start of a new election. 
        if (compare(num[i], num[i+1]) == 1 && i%2 != 0){// runs if first candidate listed won (only odd iterations)
            cout << elect[i] << endl;
            cout << names[i];// these are separated to avoid compiler warnings
            cout  << " - " << num[i] << " votes - WINNER (" << votePercent(num[i], num[i+1]) << "%)\n";
            cout << names[i+1];
            cout << " - " << num[i+1] << " votes - (" << votePercent(num[i+1], num[i]) << "%)\n\n"; 
        }else if(compare(num[i], num[i+1]) == 2 && i%2 != 0){// runs if the second candidate listed won (only odd iterations)
            cout << elect[i] << endl;
            cout << names[i+1];
            cout << " - " << num[i+1] << " votes - WINNER (" << votePercent(num[i+1], num[i]) << "%)\n";
            cout << names[i];
            cout << " - " << num[i] << " votes - (" << votePercent(num[i], num[i+1]) << "%)\n\n";
        }
    }
    inFile.close();
    return 0;
}

int countVotes(int c, int t){// counter and temp
    if (c%4==1){// will return a value that represents a count for each candidate 
        if (t==1){
            return 1;
        }else{
            return 2;
        }
    }else if(c%4==2){
        if (t==3){
            return 3;
        }else{
            return 4;
        }
    }else if(c%4==3){
        if (t==5){
            return 5;
        }else{
            return 6;
        };
    }else{
        if (t==7){
            return 7;
        }else{
            return 8;
        }
    }
}

double votePercent(int v, int t){// votes and total 
    double percent=0;
    percent = (double)v / (double)(v+t);
    percent *= 100;
    return percent;
}

int compare(int f, int s){// first and second values
    if (f>s){
        return 1;// returns 1 if the first candidate is the winner
    }else{
        return 2;// return 2 if the second candidate is the winner. 
    }
}