/* Name: Jordan Williams
 * Desc: An program to predict yearly population in the USA.
 * Date: 8/20/17
 * Class: CSCI 020
*/

#include <iostream>
using namespace std;

int main () {
    
    int pop_size = 325770000; //population as of 2017
    int birth_sec = 8; //births to seconds
    int death_sec = 5; //deaths to seconds
    int inp_year = 0; //user input for *year
    
    int pop_year_inc = birth_sec * 60 * 60 * 24 * 365; //converts to yearly
    int pop_year_dec = death_sec * 60 * 60 * 24 * 365; //converts to yearly
    int pop_year_net = pop_year_inc - pop_year_dec; // the difference of birth and death?
    int total_pop = pop_year_net * pop_size; // the net and initial current population
    
    cin >> inp_year;
    cout << "In the year " << inp_year + 2017 << ", the population will be " << total_pop << endl;
    
    return 0;
}

//Please read new Lab1.3_labnotebook.Dox