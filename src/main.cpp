#include<iostream>
#include<string>
#include<vector>
#include"hangman_function.h"
#include<fstream>

using namespace std;


int main(){
    char letter;
    int wrong_guess = 0;
    string word;
    choose_word(word);
    vector<char>incorrect;
    string guessed_word= string(word.length(),'-');
     bool guess= false;
    cout<<word<<guessed_word;
    while (guessed_word!= word && wrong_guess<7)
    {       
    display(wrong_guess);
    display_status(incorrect, guessed_word);
    cout<<"Enter your guess: \n";
    cin>>letter;
     
    Guess(letter, word, wrong_guess,incorrect);
    end_game(guessed_word, word);
    }
    
   
    return 0;
}





