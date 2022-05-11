#include<iostream>
#include<string>
#include<vector>
#include"hangman_function.h"
#include "draw.h"
#include<fstream>
#include<ctime>
using namespace std;


int main(){
   
    string letter;
    int wrong_guess = 0;
    string need_help;

    string topics[] = {"sport", "country", "food"};
    string topic;
    cout<<"Topics: ";

    cout << topics[0];
    for(int i = 1; i < sizeof(topics)/sizeof(topics[0]); i++) {
        cout << ", " << topics[i];
    }
    cout << "\nChoose your topic: ";
    cin >> topic;
    
    string word = choose_word(topic);
    vector<char>incorrect;
    string guessed_word= string(word.length(),'-');
    for(int i = 0; i < word.length(); i++) {
        if(word[i] == ' ')
            guessed_word[i] = ' ';
    }

    int help_count = word.length() / 3;

    bool no = false;

    time_t time_started = time(0);
    
    while (guessed_word != word && wrong_guess<7)
    {      
        display(wrong_guess);

        cout << "You have " << help_count << " help left.\n";

        if(!no && help_count > 0) {

            cout<<"Do you need help(yes/no)? ";
            cin >> need_help;
            if(need_help == "yes") {
                help(word, guessed_word);
                help_count--;
               
            }
            else if(need_help == "no"){
                no = true;
            }
        }
        else{
            no = false;
            cout<<"Enter your guess: ";
            cin>>letter;
            Guess(letter, word, guessed_word, wrong_guess,incorrect);  
        }

        display_status(incorrect, guessed_word);   
        end_game(guessed_word, word, time_started);
    }

    if(guessed_word!=word){
        cout<<word;
        cout<<"\nLOOSER!";
    }

   
    return 0;
}