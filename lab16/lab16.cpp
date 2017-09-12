/* Name: Jordan Williams
 * Date: 9/12/2017
 *Desc: A program to caculate total stock value.
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
  
    portfolio a;
    
    cout << "Enter stock name: " << endl;
    cin >> a.stock_name;
    //debug cout << a.stock_name << endl;
    
    cout << "Enter sector: " << endl;
    cin >> a.sector;
    //debug cout << a.sector;

    cout << "What's the current share price?" << endl;
    cin >> a.share_price;
    //debug cout << a.share_price << endl;
    
    cout << "How many shares do you own?" << endl;
    cin >> a.shares;
    //debug cout << a.shares << endl;
    
    cout << "Stock Name " << "No of Shares " << "Current Value " << "Total Value" << endl;
    cout << "    "<< a.stock_name << "           " << a.shares << "          " << a.share_price << "            " << a.share_price * a.shares << endl;
    cout << "Total Portfolio: " << "$" << a.share_price * a.shares << endl;

   return 0; 
}