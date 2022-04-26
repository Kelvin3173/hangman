#include<iostream>
#include<vector>
#include<string>
using namespace std;

    void display(int wrong_guess){
switch (wrong_guess)
{
case 0:
{
        cout<<  "   -------------    \n" ;
        cout<<  "   |                \n" ;
        cout<<  "   |                \n" ;
        cout<<  "   |                \n" ;
        cout<<  "   |                \n" ;
        cout<<  "   |     \n" ;
        cout<<  " -----   \n";
       
    break;
}
case 1:
{
        cout<<  "   -------------    \n" ;
        cout<<  "   |           |     \n" ;
        cout<<  "   |                \n" ;
        cout<<  "   |                \n" ;
        cout<<  "   |                \n" ;
        cout<<  "   |     \n" ;
        cout<<  " -----   \n";
        
    break;
}
case 2:
{
        cout<<  "   -------------    \n" ;
        cout<<  "   |           |    \n" ;
        cout<<  "   |           O    \n" ;
        cout<<  "   |                \n" ;
        cout<<  "   |                \n" ;
        cout<<  "   |     \n" ;
        cout<<  " -----   \n";
     
    break;
}
case 3:
{
        cout<<  "   -------------    \n" ;
        cout<<  "   |           |    \n" ;
        cout<<  "   |           O    \n" ;
        cout<<  "   |           |    \n" ;
        cout<<  "   |                \n" ;
        cout<<  "   |     \n" ;
        cout<<  " -----   \n";
       
    break;
}
case 4:
{
        cout<<  "   -------------    \n" ;
        cout<<  "   |           |     \n" ;
        cout<<  "   |           O     \n" ;
        cout<<  "   |          /|\\     \n" ;
        cout<<  "   |                \n" ;
        cout<<  "   |     \n" ;
        cout<<  " -----   \n";
       
    break;
}
    case 5:
    {
        cout<<  "   -------------    \n" ;
        cout<<  "   |           |     \n" ;
        cout<<  "   |           O     \n" ;
        cout<<  "   |          /|\\     \n" ;
        cout<<  "   |          /     \n" ;
        cout<<  "   |     \n" ;
        cout<<  " -----   \n";
        
    break;
    }
    case 6:
    {
        cout<<  "   -------------    \n" ;
        cout<<  "   |           |     \n" ;
        cout<<  "   |           O     \n" ;
        cout<<  "   |          /|\\     \n" ;
        cout<<  "   |          / \\    \n" ;
        cout<<  "   |     \n" ;
        cout<<  " -----   \n";
        
        break;
    }
    

}
    }

void display_status(vector<char>incorrect, string guessed_word){
    cout<<"Incorrect Guesses: \n";
    for (int i = 0; i < incorrect.size(); i++)
    {
       cout<< incorrect[i]<<" ";
    }
    cout<<"\nCodeword: \n";
    
       cout<<guessed_word;
    
    
}