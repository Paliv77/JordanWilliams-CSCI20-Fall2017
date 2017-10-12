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
        
        double GetStateTax(double GetAmount(), double GetState()) const;
        
        void print() { //prints out the receipt for an object with rounding 2 digits and calculations.
            cout << "---------------------------------------" << endl; //boarder
            cout << "---------------------------------------" << endl;
            cout << "Sales tax broken down for: " << GetCityName() << endl; //This gets information from int main's CityName sets (line 136)
            cout << "***************************************" << endl; //boarder
            cout << "The State tax is: " << GetStateTax() << endl; //round makes it round to 2 digits - calcs state tax
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
        double StateTax;
};

double Item::GetStateTax(double GetAmount(), double GetState()) const {
   StateTax = round((GetAmount() * GetState()) * 100.00) / 100.00;
   return StateTax;
}

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