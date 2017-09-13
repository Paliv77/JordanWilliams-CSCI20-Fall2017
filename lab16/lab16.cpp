/* Name: Jordan Williams
 * Date: 9/12/2017
 * Desc: A program to caculate total stock value.
 *
*/

#include <iostream>
#include <string>
using namespace std;

struct portfolio {
    string stock_name;
    char sector;
    double share_price;
    int shares;
};

int main(){
  
    portfolio a; //creates a new object called 'a'
    
    cout << "Enter stock name: " << endl; //Asks for input and stores it in the object
    cin >> a.stock_name;

    cout << "Enter sector: " << endl;
    cin >> a.sector;

    cout << "What's the current share price?" << endl;
    cin >> a.share_price;

    cout << "How many shares do you own?" << endl;
    cin >> a.shares;
    
    //the print out of the end result
    cout << "Stock Name " << "No of Shares " << "Current Value " << "Total Value" << endl;
    cout << "    "<< a.stock_name << "           " << a.shares << "          " << a.share_price << "            " << a.share_price * a.shares << endl;
    cout << "Total Portfolio: " << "$" << a.share_price * a.shares << endl;

   return 0; 
}

/* DEBUG SET
cout << a.stock_name << endl;
cout << a.sector;
cout << a.share_price << endl;
cout << a.shares << endl;   
*/