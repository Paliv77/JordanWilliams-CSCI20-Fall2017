/* Name: Jordan Williams
 * Desc: An program to predict yearly population in the USA.
 * Date: 8/20/17
 * Class: CSCI 020
*/

#include <iostream>
using namespace std;


int main () {

    int pop_size = 325770000; //population as of 2017
    int sec_pYear = 60*60*24*365;  // seconds in a year
    int deaths_pYear = sec_pYear / 12;  // yearly death rate
    int births_pYear = sec_pYear /8;     //yearly birth rate
    int migrants_pYear = sec_pYear /33; // yearly migration rate
    int growth_pYear = births_pYear - deaths_pYear + migrants_pYear;//growth
    int inp_year; //user input for year

    cout << "Enter a year to predict its population"<< endl;
    cin >> inp_year;
    cout <<"yearly pop increase " << growth_pYear << endl;
    cout << "New Population in the year " << inp_year << " will be "<< pop_size + (growth_pYear*(inp_year -2017));
    
    return 0;
}
