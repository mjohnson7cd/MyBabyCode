/*
    Mark Johnson
    Project 4
    This program is designed to calculate a student's grade
    Due date: 10/20/2020
*/

#include <iostream>
using namespace std;
  
void printPrompt(int);

double average(); 

double weightedAverage(double, double, double, double);

void outputAverages(double, double, double, double, double);

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
