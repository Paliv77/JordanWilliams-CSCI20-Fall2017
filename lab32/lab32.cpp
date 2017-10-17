/* Name: Jordan Williams
 * Class: CSCI 020
 * Desc: An program to calculate income tax, then to stated either tax owed or to be refunded to a person or couple.
 * Date: 10/16/17
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
    
    //declared variables
    string name = "";
    char status = 'a';
    double gross_wage = 0.0;
    double tax_withheld = 0.0;
    double refund = 0.0;
    double tax = 0.0;
    double deduction = 4050.0;
    
    //user inputs
    cout << "Enter the name: ";
    getline (cin, name); //getline stores the whole string instead of one word
    
    cout << "Enter the filing status (s or m): ";
    cin >> status;
    
    cout << "Enter the gross wage: ";
    cin >> gross_wage;

    cout << "Enter the tax withheld: ";
    cin >> tax_withheld;
    
    //calculates tax for single
    if (status == 's' && gross_wage <= 9325.0) {
        tax = gross_wage * 0.10;
    }
    else if (status == 's' && gross_wage >= 9326.0 && gross_wage <= 37950.0) {
        tax = 932.50 + ((gross_wage - 9325.0) * 0.15);
    }
    else if (status == 's' && gross_wage >= 37951.0 && gross_wage <= 91900.0) {
        tax = 5226.25 + ((gross_wage - 37950.0) * 0.25);
    }
    else if (status == 's' && gross_wage >= 91901.0 && gross_wage <= 191650.0) {
        tax = 18713.75 + ((gross_wage - 91900.0) * 0.28);
    }
    else if (status == 's' && gross_wage >= 191651.0 && gross_wage <= 416700.0) {
        tax = 46643.75 + ((gross_wage - 191650.0) * 0.33);
    }
    else if (status == 's' && gross_wage >= 416700.0) {
        tax = 46643.75 + ((gross_wage - 191650.0) * 0.33);
    }

    //calculates tax for married
    if (status == 'm' && gross_wage <= 18650.0) {
        tax = gross_wage * 0.10;
    }
    else if (status == 'm' && gross_wage >= 18650 && gross_wage <= 75900.0) {
        tax = 1865.0 + ((gross_wage - 18650.0) * 0.15);
    }
    else if (status == 'm' && gross_wage >= 75901.0 && gross_wage <= 153100.0) {
        tax = 10452.50 + ((gross_wage - 75900.0) * 0.25);
    }
    else if (status == 'm' && gross_wage >= 153101.0 && gross_wage <= 233350.0) {
        tax = 29752.50 + ((gross_wage - 153100.0) * 0.28);
    }
    else if (status == 'm' && gross_wage >= 233350.0 && gross_wage <= 416700.0) {
        tax = 52222.50 + ((gross_wage - 233350.0) * 0.33);
    }     
    else if (status == 'm' && gross_wage >= 416700.0){
        tax = 112728.0 + ((gross_wage - 470700.0)) * 0.396;
    }

    tax = tax - tax_withheld; //calculates the resulting amount of tax versus tax_withheld
    
    switch(status) { //switch to decide the value of deductions to either single or married
        case 's':
        {
            deduction = deduction + 6350.0;
            break;
        }
        case 'm':
        {
            deduction = deduction + 12700.0;
            break;
        }
        default:
        break;
    }
    
    refund = deduction - tax; //total of refund
    tax = tax - refund; //total of tax
    
     if(refund > tax) { //when refund is greater, no tax is owed
        tax = 0.0;
    }
    else (tax > refund) { //when tax is greater, no refund is given
        refund = 0;
    }
    
    //prints out the receipt
    cout << "********************************************************" << endl;
    cout << "Name: " << name << endl;
    cout << "Total Gross Adjusted Income: " << gross_wage << endl;
    cout << "Total tax owed: " << tax << endl;
    cout << name << " is entitled to a REFUND of: " << refund << endl;
    cout << "********************************************************" << endl;
    
    return 0;
}

/*
Enter the name: Joe vandal
Enter the filing status (s or m): s
Enter the gross wage: 12100
Enter the tax withheld: 250
********************************************************
Name: Joe vandal
Total Gross Adjusted Income: 12100
Total tax owed: 0
Joe vandal is entitled to a REFUND of: 9301.25
********************************************************




Enter the name: Alfonso Haynes
Enter the filing status (s or m): m
Enter the gross wage: 32351
Enter the tax withheld: 3192
********************************************************
Name: Alfonso Haynes
Total Gross Adjusted Income: 32351
Total tax owed: 0
Alfonso Haynes is entitled to a REFUND of: 16021.9
********************************************************




Enter the name: Bridget Rowe
Enter the filing status (s or m): s
Enter the gross wage: 88229
Enter the tax withheld: 12057
********************************************************
Name: Bridget Rowe
Total Gross Adjusted Income: 88229
Total tax owed: 0
Bridget Rowe is entitled to a REFUND of: 4661
********************************************************





Enter the name: Wendy Joseph
Enter the filing status (s or m): m
Enter the gross wage: 73291
Enter the tax withheld: 6972
********************************************************
Name: Wendy Joseph
Total Gross Adjusted Income: 73291
Total tax owed: 0
Wendy Joseph is entitled to a REFUND of: 13660.9
********************************************************



*/