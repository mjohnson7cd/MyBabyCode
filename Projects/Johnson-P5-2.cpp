/*
    Mark Johnson
    Project 4B
    This program is designed to run a game of hangman
    Due date: 11/10/2020
*/

#include<iostream>
#include<string>// string length function
#include<fstream>// files
#include <ctime>// time function
#include <cstdlib>// rand function
using namespace std;

const int MAX_WORDS = 100;
const int MAX_WORD_SIZE = 40;// 10 times the average word size
const int NUM_LETTERS  = 26;
const int MAX_GUESSES = 20;

void read_puzzles(string words[], int &wordCount);// reads in all available words from list, assigns words to array.
void display_puzzle(string word, bool guessed[]);// prints out correctly guessed letters and '_' for hidden letters.
bool found(string word, bool guessed[], char guess);// returns true value if guessed correctly and assigns true value to guessed array.
bool winner(bool guessed[], int letters);// determines if the player has won by returning true or false. 

int main(){
   string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   string words[MAX_WORDS];
   int wordNum=0,letters=0,misses=0,numWords=0;
   char guess;
   bool guessed[MAX_WORD_SIZE];

   read_puzzles(words,numWords);

   srand(time(0));// new set of random numbers every time the program runs
   wordNum=rand()%numWords;// selects a random index value within the possible range
   letters=words[wordNum].length();// stores the amount of letters in the word


    for(int i=0;i<letters;i++){
       guessed[i]=false;// no guesses so far
    }

    do{
        display_puzzle(words[wordNum],guessed);
        
        cout<<"Available: "<<alpha<<endl;

        cout<<"Guess: ";
        cin>>guess;
        guess=toupper(guess);// sets characters given by the user to uppercase


        for(int i=0;i<NUM_LETTERS;i++){
            if(alpha[i]==guess){
                alpha[i]=' ';
            }
        }

        if(!(found(words[wordNum],guessed,guess))){// if you do not guess a correct letter....
            misses++;// add one to misses
        }
        cout<<"Misses: "<<misses<<endl;

    } while (!winner(guessed,letters)&&(misses<MAX_GUESSES));

    if(misses==MAX_GUESSES){// you lose when you hit the max guesses
        cout<<"You lose. The word was: "<<words[wordNum]<<endl;
    } else {
        cout<<"You win. Nice job!"<<endl;
    }
   return 0;
}

void read_puzzles(string words[],int &wordCount){
    fstream inFile;// fstream object
    inFile.open("puzzles.txt");// Opens file. Random words generated by https://www.randomlists.com/random-words
    if (inFile.is_open()){// checks to see if file is open
        cout << endl << "********* FILE OPEN ********" << endl;
        while (wordCount<=MAX_WORDS && !inFile.eof()){// using the pass by reference variable rather than adding a new variable with a for loop
            inFile>>words[wordCount];// assigns words to string array
            wordCount++;// increments the wordCount
        }
    } else { 
        cout << "Error: 'puzzles.txt' remains unopened." << endl;
    }
    inFile.close();// closes file
}

void display_puzzle(string word, bool guessed[]){
   for(unsigned int c=0; c<word.length(); c++){// 'c' is not required to go above 250, avoids errors and warnings
       if(guessed[c]){// if letter was correctly guessed (has a value of true at the corresponding index)...
           cout<<word[c]<<" ";// print the letter
       } else {
           cout << "_ ";// place holder
       }
   }
   cout << endl << endl;
}

bool found(string word, bool guessed[], char guess){
   bool f=false;// found return variable

   for(unsigned int c=0; c<word.length(); c++){
       if(word[c]==guess){// if you guessed correctly...
           guessed[c]=true;// value at the same index in guessed array will be set to true
           f=true;// sets returning variable to true.
       }
   }

   if(f){// returns appropriate boolean value. 
       return true;
   } else {
       return false;
   }
}

bool winner(bool guessed[], int letters){// will only return true if all values stored in guessed are set to true
   for(int c=0; c<letters; c++){
       if(!guessed[c]){
           return false;
       }
   }
   return true;
}