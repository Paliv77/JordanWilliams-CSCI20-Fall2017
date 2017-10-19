/* Name: Jordan Williams
 * Class: CSCI 020
 * Desc: A number guessing game. The computer will generate a number and the
 *       user will guess the number, while also receiving hints as of higher
 *       or lower.
 * Date: 10/16/17
*/

#include <iostream>
#include <cstdlib> //library has random number generator and arithmetics
#include <ctime> //library has date and time functions for manipulation
using namespace std;

int main () {
    int random = 0;
    int user_num = 0;
    int i = 0;
    
    srand (time(0)); // makes number always random and not the same.
    random = rand() % 50 +1; //Provides random number 1-50
    
    cout << "***********************************************************\n";
    cout << "Welcome to the matching game.\n";
    cout << "A random number will be generated and you guess that number.\n";
    cout << "***********************************************************\n";
    
    cout << random << endl;
    cout << "Enter value between 1 - 50: ";
    cin >> user_num;
    //if the user hasn't guessed correctly, do this code:
    while (user_num != random) {
        for (i = 1; i <= 5; i++) { //this look will print out 1,2,3,4,5, then after, it will post a cout below
            cout << i << endl;
            }
        if (user_num > 50) { //this asks the user for another number thats not higher than 50
            cout << "Re-enter value between 1-50: ";
            cin >> user_num;
            }
        else if (user_num < 0) { //this asks the user for another number thats not lower than zero
            cout << "Re-enter value between 1-50: ";
            cin >> user_num;
            }   
        else if (user_num > random) { //this will state if the guessing number is higher
            cout << "Too high, guess another numer: ";
            cin >> user_num;
            }
        else if (user_num < random) { //this will state if the guessing number is lower
            cout << "Too low, guess another number: ";
            cin >> user_num;
            }
    }
    //if the user guesses the correct number, this prints for the win:
    cout << "Congrats, you've guessed the correct number: " << random;
    
    return 0;
}

/*
***********************************************************
Welcome to the matching game.
A random number will be generated and you guess that number.
***********************************************************
34
Enter value between 1 - 50: -1
1
2
3
4
5
Re-enter value between 1-50: 51
1
2
3
4
5
Re-enter value between 1-50: 20
1
2
3
4
5
Too low, guess another number: 40
1
2
3
4
5
Too high, guess another numer: 34
Congrats, you've guessed the correct number: 34
*/