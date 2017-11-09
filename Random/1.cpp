//http://ecomputernotes.com/cpp/classes-in-c/array-of-objects
//http://www.cs.fsu.edu/~jestes/cop3330/notes/arrayobj.html

#include<iostream>
#include<string>

using namespace std;
class Item {
    
    public:
    
    Item(); //Default Constructor
    Item(string name, int quantity, double price); //Overload Constructor
    
    void Print() const; //Print Function
    
    //Mutator Functions
    void SetName(string name);
    void SetQuantity(int quantity);
    void SetPrice(double price);
    
    //Accessor Functions
    const string GetName();
    const int GetQuantity();
    const double GetPrice();
    
    private:
    //Class Variables
    string name_;
    int quantity_;
    double price_;
    
};


Item::Item() {
    
    name_ = "Un-Available";
    quantity_ = 0;
    price_ = 0.00;
    
}


Item::Item(string name, int quantity, double price) {
    
    name_ = name;
    quantity_ = quantity;
    price_ = price;
    
}


void Item::Print() const {
    
    cout <<  name_ << "         " << quantity_ << "       $ " << price_ << endl;
    
}


void Item::SetName(string name) {
    
    name_ = name;
    
}


const string Item::GetName() {
    
    return name_;
}


void Item::SetQuantity(int quantity) {
    
    quantity_ = quantity;
    
}



const int Item::GetQuantity() {
    
    return quantity_;
    
}


void Item::SetPrice(double price) {
    
    price_ = price;
    
}


const double Item::GetPrice() {
    
    return price_;
    
}


int main() {
    
    const int SIZE = 10;
    int product_number = 0;
    int count = 0;
    double total = 0.00;
    char continue_shopping = 'y';
    
    Item cart[SIZE * 20];
    Item inventory[SIZE] = {
        
        Item(" Harry Potter          ",      8,     3.25),
        Item(" Moby Dick             ",      3,     2.55),
        Item(" Hamlet                ",      8,     5.65),
        Item(" The Great Gatsby      ",      2,     1.55),
        Item(" Nineteen Eighty Four  ",      9,     4.25),
        Item(" Alice in Wonderland   ",      4,     2.75),
        Item(" Great Expectations    ",      9,     3.25),
        Item(" The Catcher In The Rye",      2,     2.15),
        Item(" The Grapes of Wrath   ",      4,     1.75),
        Item("The Bible             ",       1,     1.15)
    };

    
    while ((continue_shopping == 'y') || (continue_shopping == 'Y')) {
        
        cout << endl;
        cout << "       BOOK        " << "            QUANTITY" << "     PRICE" << endl;
        cout << "---------------------------------------------------" << endl;
        
        for (int i = 0; i < SIZE; i++) {
            
            cout << i + 1 << ") ";
            
            inventory[i].Print();
            
        }
        
        cout << endl;
        cout << "Enter the item number to add to your cart. Or enter '0' to finish and check-out:" << endl;
        cin >> product_number;
        
        int num = product_number - 1;
        
        if (product_number == 0) {
            
            continue_shopping = 'n';
            
        }
        
        else {
            
            if (inventory[num].GetQuantity() >  0) {
                
                inventory[num].SetQuantity(inventory[num].GetQuantity() - 1);
                
                cart[count] = inventory[num];
                
                cout << cart[count].GetName() << " was added to your cart."  << endl;
                
                count++;
                
            }
            
            else {
                
                cout << "Out of stock, sorry!" << endl;
                cout << "Enter the item number to add to your cart." << endl;
                cin >> product_number;
                
            }
            
            cout << "(y or n) Would you like to keep shopping?" << endl;
            cin >> continue_shopping;
            
            }
        }
        
        cout << "Current Shopping Cart:" << endl;
        
        for (int i = 0; i <= count; i++)  {
            
            if(cart[i].GetPrice() > 0.000001) {
                
                cout << cart[i].GetName() << "       $" << cart[i].GetPrice() << endl;
                
                total += cart[i].GetPrice();
            }
        }
    
    
    cout << endl;
    cout << "Total: $" << total;
    
    return 0;
}