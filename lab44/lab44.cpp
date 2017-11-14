/*
*Name: Jordan Williams
*Lab: 4.4 C-Strings
*Date: 11/12/17
*Desc: A program to take in a user's first and last name, then develop a user name of three choices.
*/


#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main () {
    const int first_name = 10;// Max string length for first name
    const int last_name = 20;//Max string length for last name
    
    char first_str[first_name] = ""; // User defined first namestring
    char last_str[last_name] = ""; // User defined first namestring

    bool same = false; //bool for compare
    char same_name = 'a'; // char user input for the same last name.
    
    cout << "Do you have the same first name and last name? \n";
    cout << "Please select Y or y for yes, or N or n for no. \n";
    cin >> same_name;

    // Prompt user to enter first name
    cout << "Enter your first name (up to 10 characters): ";
    cin >> first_str;
    
    // Prompt user to enter last name
    cout << "Enter your last name (up to 20 characters): ";
    cin >> last_str;


    //PRINTS OUT THREE USERNAME OPTIONS
    cout << "Here's the list of available usernames: " << endl;
   
    for(int i = 0; i <= 0; i++){ //first char of first name
            cout << first_str[i];
        }
       for (int j = 0; j <= last_name; j++){ //full last name
           cout << last_str[j];
    }
    cout << endl;
    for(int i = 0; i <= 2; i++){//First 3 chars of first name
            cout << first_str[i];
        }
       for (int j = 0; j <= last_name; j++){//full last name
           cout << last_str[j];
    } 
    cout << endl;
    for(int i = 0; i <= 4; i++){//first 4 chars of first name
            cout << first_str[i];
        }
       for (int j = 0; j <= 4; j++){//first 4 chars of lastname
           cout << last_str[j];
    }
    cout << endl;
    //END PRINT OUT OF USERNAMES

    
    //FINDS IF USER STRING IS OVER THE ARRAY AMOUNT
    cout << "Your first name has: " << strlen(first_str) << " " << "characters \n";
    if (strlen(first_str) > first_name){
        cout << "Please enter a shorter first name: ";
        cin >> first_str;
    }
    cout << "Your first name has: " << strlen(last_str) << " "  << "characters \n";
    if (strlen(last_str) > last_name){
        cout << "Please enter a shorter last name: ";
        cin >> last_str;        
    }
    //END OF FIND MAX
    
    
    //COMPARES IF THE STRINGS ARE THE SAME
    if((strcmp(first_str, last_str) == 0) && (same_name == 'Y' || same_name == 'y')){
        same = true;
        cout << "The strings are the same. \n";
    }
        else {
            same = false;
            cout << "The strings are different. \n";
        }
    while(same == true && same_name == 'N' || same_name == 'n') { //
        cout << "Your first and last name are the same - this is rare! \n";
        cout << "Please enter a different first name: ";
        cin >> first_str; 
        cout << "Please enter a different last name: ";
        cin >> last_str;
    }
    //END OF THE COMPARE 
    
    
    return 0;
}



/*
Do you have the same first name and last name? 
Please select Y or y for yes, or N or n for no. 
N
Enter your first name (up to 10 characters): Jordan
Enter your last name (up to 20 characters): Williams
Here's the list of available usernames: 
JWilliams
JorWilliams
JordaWilli
Your first name has: 6 characters 
Your first name has: 8 characters 
The strings are different. 
*/

/*
Do you have the same first name and last name? 
Please select Y or y for yes, or N or n for no. 
N
Enter your first name (up to 10 characters): April
Enter your last name (up to 20 characters): Browne
Here's the list of available usernames: 
ABrowne
AprBrowne
AprilBrown
Your first name has: 5 characters 
Your first name has: 6 characters 
The strings are different. 
*/

/*
Do you have the same first name and last name? 
Please select Y or y for yes, or N or n for no. 
n
Enter your first name (up to 10 characters): AnaElizabeth
Enter your last name (up to 20 characters): Hazeltine-Smith
Here's the list of available usernames: 
AHazeltine-Smith
AnaHazeltine-Smith
AnaElHazel
Your first name has: 12 characters 
Please enter a shorter first name: 
*/

/*
Do you have the same first name and last name? 
Please select Y or y for yes, or N or n for no. 
Y
Enter your first name (up to 10 characters): James
Enter your last name (up to 20 characters): James
Here's the list of available usernames: 
JJames
JamJames
JamesJames
Your first name has: 5 characters 
Your first name has: 5 characters 
The strings are the same. 
*/