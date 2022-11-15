/*
    Mark Johnson
    Project 4B
    This program is designed to calculate a student's grade
    Due date: 11/03/2020
*/

#include <iostream>
using namespace std;
  
void printPrompt(int);

double average(); 

double weightedAverage(double, double, double, double);

void outputAverages(double, double, double, double, double);

void outputFinalNeeded (double);

void gradePossible (double);

int main(){
   double quizAvg, assignAvg, examAvg, projAvg, currentGrade;      
   int count = 1;
   while (count<=4){
      printPrompt(count);
      switch(count){
         case 1:
         //1 - getting the quiz grades 
            quizAvg = average();
            break;
         case 2:
         //2 - getting the assignment grades
            assignAvg = average();
            break;
         case 3:
         //3 - getting exam grades
            examAvg = average();
            break;
         case 4:
         //4 - getting project grades
            projAvg = average();
            break;
      }
      count++;
   }
   
   //get the current grade, based on the different averages and their weights.
    currentGrade = weightedAverage(quizAvg, assignAvg, examAvg, projAvg);
    outputAverages(currentGrade, quizAvg, assignAvg, examAvg, projAvg);

    outputFinalNeeded (currentGrade);

    return 0;
}


void printPrompt(int c){// count
    switch (c)
    {
    case 1:
        cout << "Enter your quiz grades (-1 to end input):" << endl;
        break;
    case 2:
        cout << "Enter your assignment grades (-1 to end input):" << endl;
        break;
    case 3:
        cout << "Enter your exam grades (-1 to end input):" << endl;
        break;
    case 4:
        cout << "Enter your project grades (-1 to end input):" << endl;
        break;
    default:
        cout << "Error: prompt function" << endl;
        break;
    }

}

double average(){
    double sum = 0, temp = 0;
    int count = 0;
    while (temp != -1){
        cin >> temp;
        if (temp != -1){
            sum += temp;
            count++;
        }
    }
    return sum/(double)count;
}

double weightedAverage(double q, double a, double e, double p){// quiz, assignment, exam, and project averages
    double temp, wa = 0;// weighted average
    temp = ((q*.05) + (a*.15) + (e*.3) + (p*.3));// average multiplied by weight
    return wa = (temp/80)*100;// will divide by 80 because of missing exam.
}

void outputAverages(double cg, double q, double a, double e, double p){// current grade. quiz, assignment, exam, and project averages
    cout << "Your quiz average: " << q << endl;
    cout << "Your assignment average: " << a << endl;
    cout << "Your exam average: " << e << endl;
    cout << "Your project average: " << p << endl;
    cout << "Your current grade in this course is: " << cg << endl;
}

void outputFinalNeeded (double wa){
    double temp=(wa/100)*80;// should be equal to the 'temp' variable from weightedAverage function
    double f1, f2, f3, f4;// final scenario 1, 2, etc.
    f1=(92.5-temp)/.2;// Used algebra to solve for the missing value based on the desired score.
    f2=(82.5-temp)/.2;
    f3=(72.5-temp)/.2;
    f4=(62.5-temp)/.2;

    cout << "To make a 92.5 in this class you would need to make a: " << f1 << endl;
    gradePossible(f1);
    cout << "To make a 82.5 in this class you would need to make a: " << f2 << endl;
    gradePossible(f2);
    cout << "To make a 72.5 in this class you would need to make a: " << f3 << endl;
    gradePossible(f3);
    cout << "To make a 62.5 in this class you would need to make a: " << f4 << endl;
    gradePossible(f4);
}

void gradePossible(double final){
    if (final>100){
        cout << "It is impossible to earn that grade." << endl;
    } else if (final<=0){
        cout << "You have already earned that grade." << endl;
    }
}