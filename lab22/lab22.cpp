/*Name: Jordan Williams
 *Date: 9/21/2017
 *Project: 2.2 Lab - Writing Functions
 *Desc: A random number generating program between 1 - 100.
*/

#include <iostream>
#include <cstdlib> //library has random number generator and arithmetics
#include <ctime> //library has date and time functions for manipulation
using namespace std;

int RandomNumber () //function acts as a number generator
{
    srand (time(0)); // makes number always random and not the same.
    int random = rand() % 50 +1; //Provides random number 1-50
    
    return random;
}

int main() {
    int random = 0;
    
    RandomNumber(); // the complete function being ran
    cout << random;
    return 0;
}