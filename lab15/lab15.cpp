/* Name: Jordan Williams
 * Date: 9/7/17
 * Desc: A program for a MadLib (takes user input and prints out a story)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string place = "";
    string warrior_name = "";
    string adj = "";
    string verb = "";
    string adverb  = "";
    
    //asks for input
    cout << "Pick any place" << endl;
    cin >> place;
    
    cout << "Pick an amazing warrior name!" << endl;
    cin >> warrior_name;

    cout << "How about a good adjective?" << endl;
    cin >> adj;
    
    cout << "And a verb?" << endl;
    cin >> verb;  
    
    cout << "Finally, how about an adverb?" << endl;
    cin >> adverb;
    
    cout << "*******************************************" << endl;
    //below tells the story with the input
    cout << "A long time ago in the kingdom of " << place << ", " <<
    "there was a great warrior named " << warrior_name << "." << endl;
    
    cout << warrior_name << " had a " << adj << " power that made his or her enemies " <<
    verb << "." << endl;
    
    cout << "One-day " << warrior_name << " felt " << adverb << " sick and passed away."
    << endl;
    
    cout << "That's the story of how " << place << " was abandoned." << endl;
    
    return 0;
}