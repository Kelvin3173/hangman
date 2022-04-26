#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
string choose_word(string word);
void Guess(char guess, string word,int wrong_guess,vector<char>incorrect);
void display(int wrong_guess);
void display_status(vector<char> incorrect, string guessed_word);
void end_game(string guessed_word, string word);