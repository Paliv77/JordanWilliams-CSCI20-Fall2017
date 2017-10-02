/*Name: Jordan Williams
 *Date: 9/29/2017
 *Project: 2.4 Lab - Function Returns
 *Desc: A program to obtain 2 seperate numbers from user, and then
 *      provide a random number between them to convert pounds, to KG, to final pounds.
*/
#include <iostream>
#include <cstdlib> //library has random number generator and arithmetics
#include <ctime> //library has time function for seeding random number
using namespace std;

//function for number generator with output a number of 2 inputs
int RandomNumber (int &user_num1, int &user_num2) //Function makes a random number between both numbers
{
    if (user_num1 > user_num2) //if statement to decide what number is higher
    {
        swap(user_num1,user_num2); //user_num2 holds max
    }
    srand(time(NULL)); //Makes the number random each run
    double user_rand = rand() % (user_num2  - user_num1) + user_num1; // makes the random number between both numbers
    
    return user_rand;  // provides final random number
};

//function for PoundsToKilograms
double PoundsToKilograms(double pounds) //function converts pounds to kilograms
{
    double kilo_to = 2.2406; //conversion variable
    double kilograms = pounds / kilo_to; //conversion to kilograms from pounds

    return kilograms; //outputs kilograms with the conversion from pounds
};

//function for KilogramsToPounds
double KilogramsToPounds(double kilograms) //function converts kilograms to pounds
{
    double pounds_to = 2.2046; //conversion to kilograms from pounds
    double pounds = kilograms * pounds_to; //conversion to pounds from kilograms
    
    return pounds; //outputs pounds with the conversion from kilograms
}

int main()
{
    int user_num1 = 0;
    int user_num2 = 0;
    double user_rand = 0.0;
    double pounds = 0.0;
    
    
    cout << "Please enter the first number: ";
    cin >> user_num1;
    
    cout << "Please enter the seconed number: ";
    cin >> user_num2;
    
    cout << "Your random number is: ";
    cout << RandomNumber(user_num1, user_num2) << endl;
    pounds = user_rand; //not working?
    
    cout << "The number's weight in KG is: ";
    cout << PoundsToKilograms(pounds) << endl;
    
    //cout << "The number's weight in Lbs is: "; //not working
    //cout << KilogramsToPounds();
    
    return 0;

}