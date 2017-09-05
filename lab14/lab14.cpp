/*Name: Jordan Williams
 *Date: 9/5/2017
 *Desc: A program to compute exact change into a total amount,
 *then take a fee out.
*/

#include <iostream>
using namespace std;

int main() {
    double input_cash; //User input of cash
    int dollars;
    int q;
    int d;
    int n;
    int p; 
    int total;
    double tax = 0.109;
    float final_tax;
    
    cout << "Please enter total amount" << endl;
    cin >> input_cash;
    
    total = input_cash * 100;
    
    dollars = total / 100;
    total = total % 100;
    // debug cout << "Dollars: " << total << endl;
    
    q   = total / 25;
    total = total % 25;
    // debug cout << "Q: " << total << endl;
    
    d   = total / 10;
    total = total % 10;
    // debug cout << "D: " << total << endl;
    
    n   = total / 5;
    total = total % 5;
    // debug cout << "N: " << total << endl;
    
    p   = total;
    
    cout << "You have " << dollars << " dollars" << endl;
    cout << "You have " << q << " quarters" << endl;
    cout << "You have " << d << " dimes" << endl;
    cout << "You have " << n << " nickles" << endl;
    cout << "You have " << p << " pennies" << endl;
    
    final_tax = input_cash - (input_cash * tax);
    
    cout << "The total provided is $" << final_tax <<
    " after the fee 10.9% fee. " << endl;
    
    

return 0;
}