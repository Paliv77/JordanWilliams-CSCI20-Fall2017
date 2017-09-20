#include <iostream>
#include <cmath>
using namespace std;


int main(){
    double tempF =0.0;
    double velocity = 0.0;
    double old_wind = 0.0;
    double new_wind = 0.0;
    
    cout << "Enter Temperature(f): ";
    cin  >>  tempF;
    
    cout << "Enter windspeed(velocity): ";
    cin  >> velocity;
    
    old_wind = 0.081*(3.71*(sqrt(velocity))+5.81 - 0.25*velocity)*(tempF - 91.4) + 91.4;
    
    new_wind = 35.74 + 0.6215 * tempF - 35.75 * (pow(velocity, 0.16)) + 0.4275 * tempF *(pow(velocity, 0.16));

    cout << "Wind Speed ";
    cout << velocity << endl;

    cout << "Old Formula: ";
    cout << old_wind << endl;
    
    cout << "New Formula: ";
    cout << new_wind << endl;

    cout << "Difference ";
    cout << new_wind - old_wind << endl;
    
    return 0;
}