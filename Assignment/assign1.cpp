/* Name: Jordan Williams
 * Date: 9/12/2017
 * Desc: A program to caculate total cost of yogurt with possible toppings, coupon, tax, and tip.
 *
*/

#include <iostream>
#include <string>
#include <math.h> //rounds, floors, ceilings, truncs
using namespace std;

struct items { //creates the framework for receipt
    double yogurt;
    double tax;
    double toppings;
    double tip;
    double coupon;
};

int main() {
    double yogurt_price = 0.17; //price of yogurt per ounce
    double total; // this walks through each question till we end it with it
    
    items sale; //creates an object for the transaction
    
    cout << "How much yogurt in ounces? " << endl; //calcs total price of yogurt
    cin >> sale.yogurt;
    total = sale.yogurt * yogurt_price;
    
    cout << "Did you get toppings? " << endl;
    cin >> sale.toppings;
    total = total + (sale.toppings * 0.5); //adds the toppings to the total
    
    cout << "Do you have a coupon? " << endl; //calcs coupon % off and tax
    cin >> sale.coupon;
    total = total * (1 - sale.coupon);
    
    total = total + (total * .725); //calcs the tax with total
    
    cout << "How much would you like to tip? " << endl; //adds tip to total price
    cin >> sale.tip;
    total = total + sale.tip;

    total = round(total * 100.00) / 100.00; //calc rounds total from 3 decimals to 2
         
    cout << " Ounces in yogurt: "
         << sale.yogurt << endl;
         
    cout << " Toppings: "
         << sale.toppings << endl;
         
    cout << " Coupon % off: "
         << sale.coupon << endl;

    cout << " Tip: "
         << sale.tip << endl;
         
    cout << " Your total is: "
         << total << endl;
         
   return 0; 
}