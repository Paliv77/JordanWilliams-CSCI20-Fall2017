//http://ecomputernotes.com/cpp/classes-in-c/array-of-objects
//http://www.cs.fsu.edu/~jestes/cop3330/notes/arrayobj.html

#include<iostream>
#include<string>

using namespace std;

class Album { //each object will be an album with a name, quantity, and a price
    public:
        Album(); //default constructor
        Album(string name, int inventory, double price); //overload constructor
        
        void Print() const; //print
 
        void SetName(string name); //mutator
        string GetName() const; //accessor
        
        void SetInventory(int inventory); //mutator
        int GetInventory() const; //accessor
        
        void SetPrice(double price); //mutator
        double GetPrice() const; //accessor
        
        void GettingAlbums(); //Function to setup the shop!(mutators within here)
        
    private:
        string name_;
        int inventory_;
        double price_;
};

void Album::Print() const{
    cout << name_ << "    " << inventory_ << "    $" << price_ << endl;
}

void Album::GettingAlbums(){
    

    
    //inbetween variables to help set to private
    string initial_name =" ";
    int initial_inv = 0;
    double initial_price = 0.00;

    cout << "Please enter the name of the album" << endl;
    cin >> initial_name;
    SetName(initial_name);//mutates to private
    cout << "Please enter the inventory amount" << endl;
    cin >> initial_inv;
    SetInventory(initial_inv);//mutates to private
    cout << "Please enter the price of the album" << endl;
    cin >> initial_price; 
    SetPrice(initial_price);//mutates to private
}

Album::Album(){//default constructor
    name_ = "";
    inventory_ = 0;
    price_ = 0.00;
}

Album::Album(string name, int inventory, double price){ //an overload constructor if needed?
    name_ = name;
    inventory_ = inventory;
    price_ = price;
}

void Album::SetName(string name){ //Mutator for the name variable
    name_ = name;
}

void Album::SetInventory(int inventory){ //accessor for the inventory variable
    inventory_ = inventory;
}

void Album::SetPrice(double price){ //Mutator for the price variable
    price_ = price;
}

string Album::GetName()const { //accessor for the inventory variable
    return name_;
}

int Album::GetInventory()const { //Mutator for the inventory variable
    return inventory_;
}

double Album::GetPrice()const { //accessor for the inventory variable
    return price_;
}


int main () {
    int i = 0;
    
    Album cart[10]; //initializes a 'cart' object for the customer
    Album albums[10]; //initializes the setup of the full inventory stock
    
    cout << "Welcome to your brand new shop! \n";
    cout << "Please enter the following information to setup your shop. \n";
    cout << "Your new shop will take in 10 albums. \n";
    cout << "Enter in the following order: Name,  Inventory Amount, and the Price." << endl;
    cout << "*********************************************************" << endl;
    
    for(int i = 0; i < 10; i++) { //a loop to help setup the shop initially
    albums[i].GettingAlbums(); //has the albums object be setup
    }
    
    for(int i = 0; i < 10; i++) {// a loop to show the print function
    albums[i].Print(); //a full print function to show what's in the shop!
    }
    
    
    
    
    return 0;
}

/*

Welcome to your brand new shop! 
Please enter the following information to setup your shop. 
Your new shop will take in 10 albums. 
Enter in the following order: Name,  Inventory Amount, and the Price.
*********************************************************
Please enter the name of the album
WillSmith
Please enter the inventory amount
1
Please enter the price of the album
1.10
Please enter the name of the album
Jace
Please enter the inventory amount
2
Please enter the price of the album
2.05
Please enter the name of the album
BahaMen
Please enter the inventory amount
3
Please enter the price of the album
3.15
Please enter the name of the album
Warlords
Please enter the inventory amount
4
Please enter the price of the album
4.55
Please enter the name of the album
Yes
Please enter the inventory amount
5
Please enter the price of the album
5.01
Please enter the name of the album
No
Please enter the inventory amount
6
Please enter the price of the album
6.80
Please enter the name of the album
Durpers
Please enter the inventory amount
7
Please enter the price of the album
7.60
Please enter the name of the album
Herpers
Please enter the inventory amount
8
Please enter the price of the album
8.92
Please enter the name of the album
Goshers
Please enter the inventory amount
9
Please enter the price of the album
9.08
Please enter the name of the album
Final
Please enter the inventory amount
10
Please enter the price of the album
10.67
WillSmith    1    $1.1
Jace    2    $2.05
BahaMen    3    $3.15
Warlords    4    $4.55
Yes    5    $5.01
No    6    $6.8
Durpers    7    $7.6
Herpers    8    $8.92
Goshers    9    $9.08
Final    10    $10.67

*/