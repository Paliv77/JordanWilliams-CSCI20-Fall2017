/*
*Name: Jordan Williams
*Lab: 
*Date: 10
*Desc: 
*/

#include <iostream>
#include <string>
using namespace std;

class TemperatureConverter {
    public:
        TemperatureConverter();
        TemperatureConverter(double kelvin_)

        void SetTempFromKelvin(double temp);//Mutator
        double GetTempFromKelvin() const;//Accessor

    private: //private variables
        double kelvin_;
};

TemperatureConverter::TemperatureConverter () {
    kelvin_ = 0.0;
    return;
}

TemperatureConverter::TemperatureConverter(double kelvin_) {
    kelvin_ = kelvin_;
}

void TemperatureConverter::SetTempFromKelvin(double temp) {
    kelvin_ = temp;
    return;
}


main() {
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274);
    
    
 return 0;   
}