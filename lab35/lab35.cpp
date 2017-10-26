/*
*Name: Jordan Williams
*Lab: 3.5 Classes and Constructors
*Date: 10/25/17
*Desc: Create a class that converts temperatures between Kelvin, Fahrenheit and Celsius
*/

#include <iostream>
using namespace std;

class TemperatureConverter {
    public:
        TemperatureConverter(); //default constructor
        TemperatureConverter(double set_temp); //overload constructor??
        
        void PrintTemperatures() const;
        
        void SetTempFromKelvin(double set_temp);//Mutator
        double GetTempFromKelvin() const;//Accessor
        
        void SetTempFromCelsius(double set_temp);//Mutator
        double GetTempAsCelsius() const;//Accessor
        
        void SetTempFromFahrenheit(double set_temp);//Mutator
        double GetTempAsFahrenheit() const;//Accessor

    private: //private variables
        double kelvin_;
};


//constructors?
TemperatureConverter::TemperatureConverter() : kelvin_(0.0) { //constuctor
    return;
}

TemperatureConverter::TemperatureConverter(double set_temp) { //constuctor
   kelvin_ = 0.0;
}




// KELVIN
void TemperatureConverter::SetTempFromKelvin(double set_temp) { //sets the private variable
    if (set_temp > 0) {
        kelvin_ = set_temp;
    }
}

double TemperatureConverter::GetTempFromKelvin() const { //can be called for the private variable

    return kelvin_;
}

// CELSIUS
void TemperatureConverter::SetTempFromCelsius(double celsius_input) { //sets the private variable

    if (celsius_input > -273.14) { ///FIX ME
        c_temperature = celsius_input + 273.15; ///FIX ME
    }
}
double TemperatureConverter::GetTempAsCelsius() const { //can be called for the private variable
    return c_temperature;
}

//FAHRENHEIT
void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit_input) { //sets the private variable

    if (fahrenheit_input > -459.67) {
        f_temprature = (5 * (fahrenheit_input - 32) / 9) + 273.15;
    }
}

double TemperatureConverter::GetTempAsFahrenheit() const { //can be called for the private variable
    f_temprature = (((f_temprature - 273.15) * 9 ) / 5 +32);
    return f_temprature;
}


// PRINT OUT
void TemperatureConverter::PrintTemperatures() const {
    cout << "Kelvin: " << GetTempFromKelvin() << endl;
    cout << "Fahrenheit: " << GetTempAsFahrenheit() << endl;
    cout << "Celsius: " << GetTempAsCelsius() << endl;
    return;
}
