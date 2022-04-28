#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"hangman_function.h"
#include<ctime>
using namespace std;
// string library[]= {"dog", "cat", "human"};

string choose_word(){
    vector<string>wordList;
    ifstream library("word.txt");
    string line;
    while (getline(library,line))
    {
         wordList.push_back(line);
    }
    srand(time( NULL));
    int i= wordList.size();
    string word= wordList.at(rand()%i);
    return word;
}


// string choose_word(){
//     string word = library[rand()% 3];
//     return word;
// }

bool guess = false;

void Guess( char letter, string word,string &guessed_word, int& wrong_guess,vector<char>& incorrect){   
    for(int i=0; i<word.length(); i++){
        if(letter== word[i]){
            guessed_word[i]=letter ;
            guess= true;
        }
    }
    if(guess){
        cout<<"\nCorrect\n";
    }else{
        cout<<"\nIncorrect\n ";
        incorrect.push_back(letter);
        wrong_guess++;
    }
    guess=false;

}

void end_game(string guessed_word, string word){
    if(guessed_word==word){
        cout<<"Congratulation! You are the winner!";
    }
    
}


