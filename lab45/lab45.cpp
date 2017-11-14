/*
*Name: Jordan Williams
*Lab: 4.5 - Strings
*Date: 11/14/17
*Desc: A program to take in a user's first and last name, then develop a user name of three choices.
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
    string first_name = "";
    string last_name = "";
    
    // Prompt user to enter first name
    cout << "Enter your first name (up to 10 characters): ";
    cin >> first_name;
    
    // Prompt user to enter last name
    cout << "Enter your last name (up to 20 characters): ";
    cin >> last_name;
    
    cout << first_name << " " << last_name << endl;
    
    //FINDS IF FIRST NAME/LAST NAME IS OVER 10 OR 20 CHARACTERS
    if(first_name.length() > 10) {
    	cout << "Your first name is over 10 characters long!\n";
    }
    else if (last_name.length() > 20){
    	cout << "your last name is over 20 characters long!\n";
    }
    //END OF FINDING THE LENGTH
    
    if(first_name == last_name) {
    	cout << "*WARNING* Your first and last name is the same!\n";
    }
    //LIST OF USER NAMES
    cout << "Here's a list of available user names:\n";
	cout << first_name << last_name << endl;
    cout << first_name.substr(0, 1) << last_name.substr(0, 20) << endl;
    cout << first_name.substr(0, 2) << last_name.substr(0, 20) << endl;
    cout << last_name.substr(0, 1) << first_name.substr(0, 10)<< endl;
    //END LIST OF USERNAMES

    return 0;
}

/*
Enter your first name (up to 10 characters): Jordan
Enter your last name (up to 20 characters): Williams
Jordan Williams
Here's a list of available user names:
JordanWilliams
JWilliams
JoWilliams
WJordan
*/

/*
Enter your first name (up to 10 characters): April
Enter your last name (up to 20 characters): Browne
April Browne
Here's a list of available user names:
AprilBrowne
ABrowne
ApBrowne
BApril
*/

/*
Enter your first name (up to 10 characters): AnaElizabeth
Enter your last name (up to 20 characters): Hazeltine-Smith
AnaElizabeth Hazeltine-Smith
Your first name is over 10 characters long!
Here's a list of available user names:
AnaElizabethHazeltine-Smith
AHazeltine-Smith
AnHazeltine-Smith
HAnaElizabe
*/

/*
Enter your first name (up to 10 characters): James
Enter your last name (up to 20 characters): James
James James
*WARNING* Your first and last name is the same!
Here's a list of available user names:
JamesJames
JJames
JaJames
JJames
*/