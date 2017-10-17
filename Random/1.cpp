#include <iostream>
#include <string>
using namespace std;


int main () {
    bool decision = 0;
    
    string name = "";
    string filing_status = "";
    double gross_wage = 0.0;
    double tax_withheld = 0.0;
    double refund = 0.0;
    double tax = 0.0;
    int x = 0;
    
    //deductions
    double single_deduction = 10400;
    double married_deduction = 16750;
    
    //single tax table:
    
    //0 to 9,325
    double single_tier1 = gross_wage * 0.10;
    //9,326 to 37,950
    double single_tier2 = 932.50 + (gross_wage - 9325) / 0.15;
    //37,951 to 91,900
    double single_tier3 = 5226.25 + (gross_wage - 37950) / 0.25;
    //91,901 to 191,650
    double single_tier4 = 18713.75 + (gross_wage - 91900) / 0.28;
    //191,651 to 416,700
    double single_tier5 = 46643.75 + (gross_wage - 191650) / 0.33;
    //416,700+
    double single_tier6 = 120910.25 + (gross_wage - 416700) / 0.396;
    
    //married tax table:
    
    //0 to 18,650
    double married_tier1 = gross_wage * 0.10;
    //18,650 to 75,900
    double married_tier2 = 1865 + (gross_wage - 18650) / 0.15;
    //75,901 to 153,100
    double married_tier3 = 10452.50 + (gross_wage - 75900) / 0.25;
    //153,101 to 233,350
    double married_tier4 = 29752.50 + (gross_wage - 153100) / 0.28;
    //233,350 to 416,700
    double married_tier5 = 52222.50 + (gross_wage - 233350) / 0.33;
    //416,700 +
    double married_tier6 = 112728 + (gross_wage - 470700) / 0.396;
    
    cout << "Please enter the name: ";
    cin >> name;
    
    cout << "Please enter the filing status(single or married): ";
    cin >> filing_status; //married or single
    
    cout << "Please enter the gross wage: ";
    cin >> gross_wage;
    
if (gross_wage <= 18650) {
    x = 1;
}
else if (gross_wage >= 18650 && gross_wage <= 75900) {
    x = 2;
}
else if (gross_wage >= 75901 && gross_wage <= 153100) {
    x = 3;
}
else if (gross_wage >= 153101 && gross_wage <= 233350) {
    x = 4;
}
else if (gross_wage >= 233350 && gross_wage <= 416700) {
    x = 5;
}     
else if (gross_wage >= 416700){
    x = 6;
}







    
    cout << "Please enter the tax withheld: ";
    cin >> tax_withheld;
    
    //sets the bool to either married or single, to then decide either first switch or default.
    if (filing_status == "married") {
       decision = 1;
    }
    else {
        decision = 0;
    }
    //going to be 2 switches here for the bool upon single/married. Default will be for single(bool 0).
    if (decision == 1) {
        
    //conversions to int from double
    int gross_wage = gross_wage * 100;
    int tax_withheld = tax_withheld * 100;
    int refund = refund * 100;
    int tax = tax * 100;
  
        //add if for tax is larger than witholding here??
        switch (x) { //if married
            case 1:
            {
                tax = married_tier1;
                refund = (married_deduction + tax_withheld) - tax;
                cout << "Name: " << name << endl;
                cout << "Total Gross Adjusted Income: " << gross_wage << endl;
                cout << "Total tax owed: " << tax << endl;
                cout << name << " is entitled to a REFUND of: " << refund;
                break;
            }
            case 2:
            {
                tax = married_tier2;
                refund = (married_deduction + tax_withheld) - tax;
                break;
            }
            case 3:
            {
                tax = married_tier3;
                refund = (married_deduction + tax_withheld) - tax;
                break;
            }
            case 4:
            {
                tax = married_tier4;
                refund = (married_deduction + tax_withheld) - tax;
                break;
            }
            case 5:
            {
                tax = married_tier5;
                refund = (married_deduction + tax_withheld) - tax;
            }
            case 6:
            {
                tax = married_tier6;
                refund = (married_deduction + tax_withheld) - tax;
            }
            default: {
                
            }

            
        }
    }
//print end result:
    
    return 0;
}