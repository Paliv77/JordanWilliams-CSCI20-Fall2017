/*Name: Jordan Williams
 *Date: 9/21/2017
 *Project: 2.1 Lab - Calling Functions
 *Desc: A program that uses two different formulas to calculate the windchill speed,
 *      but also the difference of the two formulas.
*/

#include <iostream>
#include <cmath> //this library has math functions
using namespace std;


int main(){
    double temp_f = 0.0;
    double velocity = 0.0;
    double old_wind = 0.0;
    double new_wind = 0.0;
    
    cout << "Enter Temperature(f): "; //user input temp
    cin  >>  temp_f;
    
    cout << "Enter windspeed(velocity): "; //user input windspeed
    cin  >> velocity;
    
    old_wind = 0.081*(3.71*(sqrt(velocity))+5.81 - 0.25*velocity)*(temp_f - 91.4) + 91.4; //the old windchill formula
    
    new_wind = 35.74 + 0.6215 * temp_f - 35.75 * (pow(velocity, 0.16)) + 0.4275 * temp_f *(pow(velocity, 0.16)); //the new windchill formula

    cout << "Wind Speed "; //gives you the windspeed
    cout << velocity << endl;

    cout << "Old Formula: "; //gives you the old formula calculation
    cout << old_wind << endl;
    
    cout << "New Formula: "; //gives you the new formula calculation
    cout << new_wind << endl;

    cout << "Difference "; //gives the difference of the new forumula minus the old formula
    cout << new_wind - old_wind << endl;
    
    return 0;
}