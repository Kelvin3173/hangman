#ifndef HANGMAN_H
#define HANGMAN_H

#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

string choose_word(string topic);
void Guess(string letter, string word,string &guessed_word, int& wrong_guess,vector<char> &incorrect);
void display(int wrong_guess);
void display_status(vector<char> incorrect, string guessed_word);
void help(string word, string &guessed_word);
void end_game(string guessed_word, string word, time_t time_started);
time_t complete_time(time_t time_started);

#endif