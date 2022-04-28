#ifndef HANGMAN_H
#define HANGMAN_H

#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

string choose_word();
void Guess(char letter, string word,string &guessed_word, int& wrong_guess,vector<char> &incorrect);
void display(int wrong_guess);
void display_status(vector<char> incorrect, string guessed_word);
void end_game(string guessed_word, string word);

#endif