/*Name: Jordan Williams
 *Date: 9/21/2017
 *Project: 2.2 Lab - Writing Functions
 *Desc: A random number generating program beween 1 - 100.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber () //function acts as a number generator
{
    srand (time(0)); // makes number always random and not the same.
    
    cout << "Your number between 1 - 100 is: "
         << rand() % 100 +1; //Provides random number 1-100
}


int main() {
    
    RandomNumber(); // the complete function being ran
    
    return 0;
}