/*
*Name: Jordan Williams
*Lab: Assignment 2
*Date: 10/6/17
*Desc: A program that takes in a total, then calculates and prints out the sales tax in each city's county,state,city, and special.
*/

#include <iostream>
#include <string>
#include <math.h> //rounds
using namespace std;

class Item {
    public:
        void SetState(double stateToSet);//Mutator
        double GetState() const;//Accessor
        
        void SetCounty(double countyToSet);//Mutator
        double GetCounty() const;//Accessor
        
        void SetCity(double cityToSet);//Mutator
        double GetCity() const;//Accessor
        
        void SetSpecial(double specialToSet);//Mutator
        double GetSpecial() const;//Accessor

        void SetAmount(double amountToSet);//Mutator
        double GetAmount() const;//Accesso

        void SetCityName(string cityNameToSet);//Mutator
        string GetCityName() const;//Accesso
        
        void print() { //prints out the receipt for an object with rounding 2 digits and calculations.
            cout << "---------------------------------------" << endl; //boarder
            cout << "---------------------------------------" << endl;
            cout << "Sales tax broken down for: " << GetCityName() << endl; //This gets information from int main's CityName sets (line 136)
            cout << "***************************************" << endl; //boarder
            cout << "The State tax is: " << round((GetAmount() * GetState()) * 100.00) / 100.00 << endl; //round makes it round to 2 digits - calcs state tax
            cout << "The County tax is " << round((GetAmount() * GetCounty()) * 100.00) / 100.00 << endl;//rounds and calcs county tax
            cout << "The City tax is "   << round((GetAmount() * GetCity()) * 100.00) / 100.00 << endl;//rounds and calcs city tax
            cout << "The Speical tax is " << round((GetAmount() * GetSpecial()) * 100.00) / 100.00 << endl;//rounds and calcs special tax
            cout << "The total amount with tax is: " << round(((GetAmount() + (GetAmount() * GetState()) + (GetAmount() * GetCounty()) + (GetAmount()  * GetCity()) + (GetAmount() * GetSpecial()))) * 100.00) / 100.00 << endl; //rounds and calcs total tax
        }
    private: //private variables
        double state;
        double county;
        double city;
        double special;
        double amount;
        string cityName;
};

void Item::SetCityName(string cityNameToSet) { //sets the private variable
    cityName = cityNameToSet;
}
string Item::GetCityName() const { //can be called for the private variable
    return cityName;
}
void Item::SetAmount(double amountToSet) {
    amount = amountToSet;
}
double Item::GetAmount() const {
    return amount;
}
void Item::SetState(double stateToSet) {
    state = stateToSet;
}
double Item::GetState() const {
    return state;
}
void Item::SetCounty(double countyToSet) {
    county = countyToSet;
}
double Item::GetCounty() const {
    return county;
}
void Item::SetCity(double cityToSet) { 
    city = cityToSet;
}
double Item::GetCity() const {
    return city;
}
void Item::SetSpecial(double specialToSet) {
    special = specialToSet;
}
double Item::GetSpecial() const {
    return special;
}

int main(){
    //initialized vars
    double state = 0.0;
    double county = 0.0;
    double city = 0.0;
    double special = 0.0;
    double amount = 0.0;
    string cityName = "";

    //Each object is a city that is included on the reciept
    Item Chico_CA; 
    Item Paradise_CA;
    Item Sacramento_CA;
    Item LasVegas_NV;
    Item Pheonix_AZ;
    
    //Each below sets a specific tax value to the city
    Chico_CA.SetState(0.06); //value of state tax in CA
    Chico_CA.SetCounty(0.25); //value of Butte County tax via Chico
    Chico_CA.SetCity(0.0); //Value of Chico's tax
    Chico_CA.SetSpecial(0.01); //value of CA's sepcial tax
    
    Paradise_CA.SetState(0.06);
    Paradise_CA.SetCounty(0.25);
    Paradise_CA.SetCity(0.5);
    Paradise_CA.SetSpecial(0.01);
    
    Sacramento_CA.SetState(0.06);
    Sacramento_CA.SetCounty(0.25);
    Sacramento_CA.SetCity(0.5);
    Sacramento_CA.SetSpecial(1.5);
    
    LasVegas_NV.SetState(4.6);
    LasVegas_NV.SetCounty(3.65);
    LasVegas_NV.SetCity(0);
    LasVegas_NV.SetSpecial(0);//not clear what the tax is generally

    Pheonix_AZ.SetState(5.6);
    Pheonix_AZ.SetCounty(0.7);
    Pheonix_AZ.SetCity(2.3);
    Pheonix_AZ.SetSpecial(0);//not clear what the tax is generally
    
    //sets the city name to be printed
    Chico_CA.SetCityName("Chico,CA");
    Paradise_CA.SetCityName("Paradise,CA");
    Sacramento_CA.SetCityName("Sacramento,CA");
    LasVegas_NV.SetCityName("LasVegas,NV");
    Pheonix_AZ.SetCityName("Pheonix,AZ");    
    
    cout << "Enter amount: ";//enter the input
    cin >> amount;//stores the input here, then below sets the input to use for different objects for the receipt
    Chico_CA.SetAmount(amount);
    Paradise_CA.SetAmount(amount);
    Sacramento_CA.SetAmount(amount);
    LasVegas_NV.SetAmount(amount);
    Pheonix_AZ.SetAmount(amount);
    //Prints the the amount taxed in each state
    Chico_CA.print();
    Paradise_CA.print();
    Sacramento_CA.print();
    LasVegas_NV.print();
    Pheonix_AZ.print();
    
    return 0;
}


/*
Enter amount: 28.55
---------------------------------------
---------------------------------------
Sales tax broken down for: Chico,CA
***************************************
The State tax is: 1.71
The County tax is 7.14
The City tax is 0
The Speical tax is 0.29
The total amount with tax is: 37.69
---------------------------------------
---------------------------------------
Sales tax broken down for: Paradise,CA
***************************************
The State tax is: 1.71
The County tax is 7.14
The City tax is 14.28
The Speical tax is 0.29
The total amount with tax is: 51.96
---------------------------------------
---------------------------------------
Sales tax broken down for: Sacramento,CA
***************************************
The State tax is: 1.71
The County tax is 7.14
The City tax is 14.28
The Speical tax is 42.83
The total amount with tax is: 94.5
---------------------------------------
---------------------------------------
Sales tax broken down for: LasVegas,NV
***************************************
The State tax is: 131.33
The County tax is 104.21
The City tax is 0
The Speical tax is 0
The total amount with tax is: 264.09
---------------------------------------
---------------------------------------
Sales tax broken down for: Pheonix,AZ
***************************************
The State tax is: 159.88
The County tax is 19.99
The City tax is 65.66
The Speical tax is 0
The total amount with tax is: 274.08
*/


/*
Enter amount: 55.87
---------------------------------------
---------------------------------------
Sales tax broken down for: Chico,CA
***************************************
The State tax is: 3.35
The County tax is 13.97
The City tax is 0
The Speical tax is 0.56
The total amount with tax is: 73.75
---------------------------------------
---------------------------------------
Sales tax broken down for: Paradise,CA
***************************************
The State tax is: 3.35
The County tax is 13.97
The City tax is 27.94
The Speical tax is 0.56
The total amount with tax is: 101.68
---------------------------------------
---------------------------------------
Sales tax broken down for: Sacramento,CA
***************************************
The State tax is: 3.35
The County tax is 13.97
The City tax is 27.94
The Speical tax is 83.81
The total amount with tax is: 184.93
---------------------------------------
---------------------------------------
Sales tax broken down for: LasVegas,NV
***************************************
The State tax is: 257
The County tax is 203.93
The City tax is 0
The Speical tax is 0
The total amount with tax is: 516.8
---------------------------------------
---------------------------------------
Sales tax broken down for: Pheonix,AZ
***************************************
The State tax is: 312.87
The County tax is 39.11
The City tax is 128.5
The Speical tax is 0
The total amount with tax is: 536.35
*/


/*
Enter amount: 84.12
---------------------------------------
---------------------------------------
Sales tax broken down for: Chico,CA
***************************************
The State tax is: 5.05
The County tax is 21.03
The City tax is 0
The Speical tax is 0.84
The total amount with tax is: 111.04
---------------------------------------
---------------------------------------
Sales tax broken down for: Paradise,CA
***************************************
The State tax is: 5.05
The County tax is 21.03
The City tax is 42.06
The Speical tax is 0.84
The total amount with tax is: 153.1
---------------------------------------
---------------------------------------
Sales tax broken down for: Sacramento,CA
***************************************
The State tax is: 5.05
The County tax is 21.03
The City tax is 42.06
The Speical tax is 126.18
The total amount with tax is: 278.44
---------------------------------------
---------------------------------------
Sales tax broken down for: LasVegas,NV
***************************************
The State tax is: 386.95
The County tax is 307.04
The City tax is 0
The Speical tax is 0
The total amount with tax is: 778.11
---------------------------------------
---------------------------------------
Sales tax broken down for: Pheonix,AZ
***************************************
The State tax is: 471.07
The County tax is 58.88
The City tax is 193.48
The Speical tax is 0
The total amount with tax is: 807.55
*/


/*
Enter amount: 32.31
---------------------------------------
---------------------------------------
Sales tax broken down for: Chico,CA
***************************************
The State tax is: 1.94
The County tax is 8.08
The City tax is 0
The Speical tax is 0.32
The total amount with tax is: 42.65
---------------------------------------
---------------------------------------
Sales tax broken down for: Paradise,CA
***************************************
The State tax is: 1.94
The County tax is 8.08
The City tax is 16.16
The Speical tax is 0.32
The total amount with tax is: 58.8
---------------------------------------
---------------------------------------
Sales tax broken down for: Sacramento,CA
***************************************
The State tax is: 1.94
The County tax is 8.08
The City tax is 16.16
The Speical tax is 48.47
The total amount with tax is: 106.95
---------------------------------------
---------------------------------------
Sales tax broken down for: LasVegas,NV
***************************************
The State tax is: 148.63
The County tax is 117.93
The City tax is 0
The Speical tax is 0
The total amount with tax is: 298.87
---------------------------------------
Sales tax broken down for: Pheonix,AZ
***************************************
The State tax is: 180.94
The County tax is 22.62
The City tax is 74.31
The Speical tax is 0
The total amount with tax is: 310.18
*/


/*
Enter amount: 67.89
---------------------------------------
---------------------------------------
Sales tax broken down for: Chico,CA
***************************************
The State tax is: 4.07
The County tax is 16.97
The City tax is 0
The Speical tax is 0.68
The total amount with tax is: 89.61
---------------------------------------
---------------------------------------
Sales tax broken down for: Paradise,CA
***************************************
The State tax is: 4.07
The County tax is 16.97
The City tax is 33.95
The Speical tax is 0.68
The total amount with tax is: 123.56
---------------------------------------
---------------------------------------
Sales tax broken down for: Sacramento,CA
***************************************
The State tax is: 4.07
The County tax is 16.97
The City tax is 33.95
The Speical tax is 101.84
The total amount with tax is: 224.72
---------------------------------------
---------------------------------------
Sales tax broken down for: LasVegas,NV
***************************************
The State tax is: 312.29
The County tax is 247.8
The City tax is 0
The Speical tax is 0
The total amount with tax is: 627.98
---------------------------------------
---------------------------------------
Sales tax broken down for: Pheonix,AZ
***************************************
The State tax is: 380.18
The County tax is 47.52
The City tax is 156.15
The Speical tax is 0
The total amount with tax is: 651.74
*/


/*
Enter amount: 8.47
---------------------------------------
---------------------------------------
Sales tax broken down for: Chico,CA
***************************************
The State tax is: 0.51
The County tax is 2.12
The City tax is 0
The Speical tax is 0.08
The total amount with tax is: 11.18
---------------------------------------
---------------------------------------
Sales tax broken down for: Paradise,CA
***************************************
The State tax is: 0.51
The County tax is 2.12
The City tax is 4.24
The Speical tax is 0.08
The total amount with tax is: 15.42
---------------------------------------
---------------------------------------
Sales tax broken down for: Sacramento,CA
***************************************
The State tax is: 0.51
The County tax is 2.12
The City tax is 4.24
The Speical tax is 12.71
The total amount with tax is: 28.04
---------------------------------------
---------------------------------------
Sales tax broken down for: LasVegas,NV
***************************************
The State tax is: 38.96
The County tax is 30.92
The City tax is 0
The Speical tax is 0
The total amount with tax is: 78.35
---------------------------------------
---------------------------------------
Sales tax broken down for: Pheonix,AZ
***************************************
The State tax is: 47.43
The County tax is 5.93
The City tax is 19.48
The Speical tax is 0
The total amount with tax is: 81.31
*/


/*
Enter amount: 69.98
---------------------------------------
---------------------------------------
Sales tax broken down for: Chico,CA
***************************************
The State tax is: 4.2
The County tax is 17.5
The City tax is 0
The Speical tax is 0.7
The total amount with tax is: 92.37
---------------------------------------
---------------------------------------
Sales tax broken down for: Paradise,CA
***************************************
The State tax is: 4.2
The County tax is 17.5
The City tax is 34.99
The Speical tax is 0.7
The total amount with tax is: 127.36
---------------------------------------
---------------------------------------
Sales tax broken down for: Sacramento,CA
***************************************
The State tax is: 4.2
The County tax is 17.5
The City tax is 34.99
The Speical tax is 104.97
The total amount with tax is: 231.63
---------------------------------------
---------------------------------------
Sales tax broken down for: LasVegas,NV
***************************************
The State tax is: 321.91
The County tax is 255.43
The City tax is 0
The Speical tax is 0
The total amount with tax is: 647.32
---------------------------------------
---------------------------------------
Sales tax broken down for: Pheonix,AZ
***************************************
The State tax is: 391.89
The County tax is 48.99
The City tax is 160.95
The Speical tax is 0
The total amount with tax is: 671.81
*/


/*
Enter amount: 57.79
---------------------------------------
---------------------------------------
Sales tax broken down for: Chico,CA
***************************************
The State tax is: 3.47
The County tax is 14.45
The City tax is 0
The Speical tax is 0.58
The total amount with tax is: 76.28
---------------------------------------
---------------------------------------
Sales tax broken down for: Paradise,CA
***************************************
The State tax is: 3.47
The County tax is 14.45
The City tax is 28.9
The Speical tax is 0.58
The total amount with tax is: 105.18
---------------------------------------
---------------------------------------
Sales tax broken down for: Sacramento,CA
***************************************
The State tax is: 3.47
The County tax is 14.45
The City tax is 28.9
The Speical tax is 86.69
The total amount with tax is: 191.28
---------------------------------------
---------------------------------------
Sales tax broken down for: LasVegas,NV
***************************************
The State tax is: 265.83
The County tax is 210.93
The City tax is 0
The Speical tax is 0
The total amount with tax is: 534.56
---------------------------------------
---------------------------------------
Sales tax broken down for: Pheonix,AZ
***************************************
The State tax is: 323.62
The County tax is 40.45
The City tax is 132.92
The Speical tax is 0
The total amount with tax is: 554.78
*/


/*
Enter amount: 1000.00
---------------------------------------
---------------------------------------
Sales tax broken down for: Chico,CA
***************************************
The State tax is: 60
The County tax is 250
The City tax is 0
The Speical tax is 10
The total amount with tax is: 1320
---------------------------------------
---------------------------------------
Sales tax broken down for: Paradise,CA
***************************************
The State tax is: 60
The County tax is 250
The City tax is 500
The Speical tax is 10
The total amount with tax is: 1820
---------------------------------------
---------------------------------------
Sales tax broken down for: Sacramento,CA
***************************************
The State tax is: 60
The County tax is 250
The City tax is 500
The Speical tax is 1500
The total amount with tax is: 3310
---------------------------------------
---------------------------------------
Sales tax broken down for: LasVegas,NV
***************************************
The State tax is: 4600
The County tax is 3650
The City tax is 0
The Speical tax is 0
The total amount with tax is: 9250
---------------------------------------
---------------------------------------
Sales tax broken down for: Pheonix,AZ
***************************************
The State tax is: 5600
The County tax is 700
The City tax is 2300
The Speical tax is 0
The total amount with tax is: 9600
*/


/*
Enter amount: 15.00
---------------------------------------
---------------------------------------
Sales tax broken down for: Chico,CA
***************************************
The State tax is: 0.9
The County tax is 3.75
The City tax is 0
The Speical tax is 0.15
The total amount with tax is: 19.8
---------------------------------------
---------------------------------------
Sales tax broken down for: Paradise,CA
***************************************
The State tax is: 0.9
The County tax is 3.75
The City tax is 7.5
The Speical tax is 0.15
The total amount with tax is: 27.3
---------------------------------------
---------------------------------------
Sales tax broken down for: Sacramento,CA
***************************************
The State tax is: 0.9
The County tax is 3.75
The City tax is 7.5
The Speical tax is 22.5
The total amount with tax is: 49.65
---------------------------------------
---------------------------------------
Sales tax broken down for: LasVegas,NV
***************************************
The State tax is: 69
The County tax is 54.75
The City tax is 0
The Speical tax is 0
The total amount with tax is: 138.75
---------------------------------------
---------------------------------------
Sales tax broken down for: Pheonix,AZ
***************************************
The State tax is: 84
The County tax is 10.5
The City tax is 34.5
The Speical tax is 0
The total amount with tax is: 144
*/