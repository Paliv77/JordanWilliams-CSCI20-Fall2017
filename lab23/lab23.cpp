/*Name: Jordan Williams
 *Date: 9/26/2017
 *Project: 2.3 Lab - Function Input
 *Desc: A program to obtain 2 seperate numbers from user, and then
 *      provide a random number between them.
*/
#include <iostream>
#include <cstdlib> //library has random number generator and arithmetics
#include <ctime> //library has time function for seeding random number
using namespace std;

int Swap(int &user_num1, int &user_num2) //Function makes sure max holds the higher number
{
    if (user_num1 > user_num2) //if statement to decide what number is higher
    {
        swap(user_num1,user_num2); //user_num2 holds max
    }
    
    return user_num2; //TEST TO SEE IF WORKING
}

int RandomNumber (int user_num1, int user_num2) //Function makes a random number between both numbers

{
    srand(time(NULL)); //Makes the number random each run
    int user_final = rand() % (user_num2  - user_num1) + user_num1; // makes the random number between both numbers
    
    cout << user_final;  // provides final random number
}

int main()
{
    int user_num1 = 0;
    int user_num2 = 0;
    int user_final = 0;
    
    cout << "Please enter the first number: ";
    cin >> user_num1;
    cout << "Please enter the seconed number: ";
    cin >> user_num2;
    Swap(user_num1, user_num2); //makes number 2 hold the higher number
    RandomNumber(user_num1, user_num2); //Makes the random number
    
    return 0;
}