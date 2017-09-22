#include <iostream>//*
#include <cstdlib>//*
#include <ctime> //*
using namespace std;//*

void guessingGame (); //incorrect

int main()
{
    cout<<"We are going to play the guessing game 3 times"<<endl;
    guessingGame(); //function call
    guessingGame(); //function call
    guessingGame(); //function call
}

void guessingGame () //function delcaration
{//function definition
    //function body
    srand(time(0));
    int randomNumber = rand() % 10 + 1;

    int userNumber = 0; //incorect
    cout<<"Please choose a number between 1 and 10";
    cin>>userNumber;

    cout<<"You picked: "<<userNumber<<"  The number was: "<<randomNumber<<endl;
}//function definition

//Important are data type, having the function before the main, and using NormalCase