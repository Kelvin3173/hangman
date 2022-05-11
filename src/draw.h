#ifndef DRAW_H
#define DRAW_H

#include <vector>
#include <string>
using namespace std;
void display(int wrong_guess);
void display_status(vector<char>incorrect, string guessed_word);

void help(string word, string& guessed_word);

#endif