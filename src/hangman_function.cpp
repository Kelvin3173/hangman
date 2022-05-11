#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"hangman_function.h"
#include<ctime>
using namespace std;


string getLowerCaseString(const string &s){
    string res=s;
    int size= s.size();
    for(int i=0; i<size; i++)
        res[i]= tolower(s[i]);
        return res;
}

string choose_word(string topic){
    vector<string>wordList;
    string word;
    string path = topic + ".txt";
    ifstream library(path);
    string line;
    while (getline(library,line))
    {
        wordList.push_back(line);
    }
    library.close();

    if(wordList.size()>0){
        srand(time( NULL));
        int i= wordList.size();
        word=getLowerCaseString( wordList.at(rand()%i));
        return word;
    }
    else{
        return "";
    }

}


bool guess = false;

void Guess( string letter, string word,string &guessed_word, int& wrong_guess,vector<char>& incorrect){ 
    if(letter == word) {
        guessed_word = word;
        guess = true;
    }  
    else {
        for(int i=0; i<word.length(); i++){
            if(letter[0] == word[i]){
                guessed_word[i] = letter[0] ;
                guess= true;
            }
        }
    }
    if(guess){
        cout<<"\nCorrect\n";
    }else{
        cout<<"\nIncorrect\n ";
        for(int i = 0; i < letter.size(); i++) {
            incorrect.push_back(letter[i]);
        }
        wrong_guess++;
    }
    guess=false;

}

void end_game(string guessed_word, string word, time_t time_started){
    if(guessed_word==word){
        cout<<"Congratulation! You are the winner!\n";
        cout << "Complete time: " << complete_time(time_started)<< "s";
    }
    
}

time_t complete_time(time_t time_started)
{
    return time(0) - time_started;
}


