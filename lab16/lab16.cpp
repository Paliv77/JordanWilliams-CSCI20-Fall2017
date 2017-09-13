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
    
    
    
    portfolio b; //creates a new object called 'b'
    
    cout << "Enter stock name: " << endl; //Asks for input and stores it in the object
    cin >> b.stock_name;

    cout << "Enter sector: " << endl;
    cin >> b.sector;

    cout << "What's the current share price?" << endl;
    cin >> b.share_price;

    cout << "How many shares do you own?" << endl;
    cin >> b.shares;
    
    //the print out of the end result
    cout << "Stock Name " << "No of Shares " << "Current Value " << "Total Value" << endl;
    cout << "    "<< b.stock_name << "           " << b.shares << "          " << b.share_price << "            " << b.share_price * b.shares << endl;
    cout << "Total Portfolio: " << "$" << b.share_price * b.shares << endl;
    
    
    
    portfolio c; //creates a new object called 'c'
    
    cout << "Enter stock name: " << endl; //Asks for input and stores it in the object
    cin >> c.stock_name;

    cout << "Enter sector: " << endl;
    cin >> c.sector;

    cout << "What's the current share price?" << endl;
    cin >> c.share_price;

    cout << "How many shares do you own?" << endl;
    cin >> c.shares;
    
    //the print out of the end result
    cout << "Stock Name " << "No of Shares " << "Current Value " << "Total Value" << endl;
    cout << "    "<< c.stock_name << "           " << c.shares << "          " << c.share_price << "            " << c.share_price * c.shares << endl;
    cout << "Total Portfolio: " << "$" << c.share_price * c.shares << endl;
    
    
    portfolio d; //creates a new object called 'd'
    
    cout << "Enter stock name: " << endl; //Asks for input and stores it in the object
    cin >> d.stock_name;

    cout << "Enter sector: " << endl;
    cin >> d.sector;

    cout << "What's the current share price?" << endl;
    cin >> d.share_price;

    cout << "How many shares do you own?" << endl;
    cin >> d.shares;
    
    //the print out of the end result
    cout << "Stock Name " << "No of Shares " << "Current Value " << "Total Value" << endl;
    cout << "    "<< d.stock_name << "           " << d.shares << "          " << d.share_price << "            " << d.share_price * d.shares << endl;
    cout << "Total Portfolio: " << "$" << d.share_price * d.shares << endl;

   return 0; 
}