/*
*Name: Jordan Williams
*Lab: Lab 3.1 - Conditions
*Date: 10/10/17
*Desc: A program that determins the correct phone plan per device.
*/

#include <iostream>
using namespace std;

int main(){
    //delcared global variables
    int tablet = 0;
    int smart_phone = 0;
    int dumb_phone = 0;
    int data = 0;
   
   cout << "How many smart phones do you have: ";
   cin  >> smart_phone; //input of how many smart phones

   cout << "How many regular phones do you have: ";
   cin  >> dumb_phone; //input of how many non-smart phones
   
   cout << "How many tablets: ";
   cin  >> tablet; //input of how many tablets
   
   cout << "How many data in gbs would you like: ";
   cin >> data; //input for data 
   
    if (data > 6 && smart_phone <=10 && tablet >= 0) { //if for 6+gbs, smart between1-10 and can have a tablet
        cout << "AT&T Unlimited Choice Plan";
    }
    else if (smart_phone > 10 && tablet >= 0) { //if for smart phone in 10 more more quantities and can have a tablet
        cout << "Verizon Unlimited Plan";
    }
    else if (smart_phone >10 && ! tablet >=1) { //if for smar phone in 10 or more quantities and can't have a tablet
        cout << "Sprint Unlimited Plan";
    }
    else if ((data == 0 && dumb_phone >= 1 && tablet >=0) //if for a non smart phone without data or data is 5 and only limited to 1-2 smart phones
            || (data == 5 && smart_phone >= 2)) {
        cout << "AT&T Family Plans";
    }
    else if (data <= 2 && ! tablet >=1 && smart_phone > 0) { //if for data 1 or 2 gbs, no tablets, and smart phone +1
        cout << "Sprint 2GB Plan";
    }
   
   return 0;
}

/*
User 1:
How many smart phones do you have: 2
How many regular phones do you have: 0
How many tablets: 0
How many data in gbs would you like: 5
AT&T Family Plans

User 2:
How many smart phones do you have: 2
How many regular phones do you have: 1
How many tablets: 1
How many data in gbs would you like: 15
AT&T Unlimited Choice Plan

User 3:
How many smart phones do you have: 0
How many regular phones do you have: 1
How many tablets: 0
How many data in gbs would you like: 0
AT&T Family Plans
*/