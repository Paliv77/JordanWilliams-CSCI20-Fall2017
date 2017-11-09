/*Name: Jordan Williams
 *Date: 11/6/2017
 *Project: 4.1 Lab - Single Arrays
 *Desc: A program to create tools to be used with a single array.
*/


#include <iostream>
#include <string>
using namespace std;

class ArrayTools { //creates a class of various array tools
    public:
        ArrayTools(int myArray[], int size); //overload constructor
        void Print() const; //prints out the array of size
        int Find_min(int _myArray[], int _size) const; //prototype for find min function
        //int Find_max(int _myArray[], int _size) const;
        int Find_sum(); //prototype for the sum of the array numbers
        int Nums_even_and_odd(); //prototype for odd/even print out function
        int Search (int find); //prototype for the search function
    
    private:
        int _size;
        int _myArray[];

};
//the search function to find a specific number in the array
int ArrayTools::Search(int find){
    // SEARCH FOR A VALUE WITHIN AN ARRAY
    bool flag = false;
    for (int i = 0; i < _size; ++i) {
        if (_myArray[i] == find) {
            flag = true;
            return i; 
        }
    }
    return -1;
}
//function to find the sum
int ArrayTools::Find_sum() {
    //finds the sum of the array
    int sum = 0;
    for(int i = 0; i < _size; i++) {
        sum = sum + _myArray[i];
    }    
    return sum;
}
//find the minimum number in the array
int ArrayTools::Find_min(int myArray[], int size) const {
    
    int min = _myArray[0];
    // scanning array to find minimum and maximum number
    for(int i=0; i<_size; i++) {
    // finding minimum number in array
      if(min > _myArray[i]) {
         min = _myArray[i];
        }
    }
    return min;
}

// int ArrayTools::Find_max(int myArray[], int size) const {
//     int max = _myArray[0];
    
//     for(int i=0; i<_size; i++) {
//         if(max < _myArray[i]) {
//             max = _myArray[i];
//         }
//     }
//     return max;
// }

//Print function to fund out all evens and odds within array
int ArrayTools::Nums_even_and_odd() {
    // FINDING THE EVENS
    cout <<"The Even Numbers Are: ";
    
    for (int i = 0; i<_size; i++) {
        if (_myArray[i] % 2 == 0) {
            cout << "  " << _myArray[i];
        }
    }
    cout << endl;
    //FINDING THE ODDS
    cout << "The Odd Numbers Are: ";
    for (int i = 0; i < _size; i++) {
        if (_myArray[i] % 2 != 0) {
            cout << "  " << _myArray[i];
        }
    }
}
//overload constructor for the array and element(size)
ArrayTools::ArrayTools(int myArray[], int size) {
    for (int i = 0; i < size; i++) {
        _myArray[i] = myArray[i];
    }
    _size = size;
    return;
}
//the print function of the array
void ArrayTools::Print() const { //print function
    cout << endl << "Here's the print-out of the numbers: " << endl;

    for (int i = 0; i < _size; ++i) {
        cout << _myArray[i] << endl;
    }
    cout << "******************************" << endl;
    return;
}

int main () {
    const int size = 10;
    int myArray[size];

    //user input for the arrays
    for (int i = 0; i<size; i++) {
        cin >> myArray[i];
    }
    
    ArrayTools a(myArray, size);
    
    a.Print();
    cout << "Min: " << a.Find_min(0, 4) << endl;
    cout << "Sum = " << a.Find_sum() << endl; 
    cout<<"Search 10"<<a.Search(10)<<endl;
   
    //cout << "Max: " << a.Find_max(5, 10) << endl;

    //cout<<"Sorted? "<<a.Is_sorted()<<endl;    
    a.Nums_even_and_odd();
    return 0;
}



/*
Running /home/ubuntu/workspace/lab41/lab41.cpp
1
2
3
4
5
6
7
8
9
10

Here's the print-out of the numbers: 
10
2
3
4
5
6
7
8
9
10
******************************
Min: 2
Sum = 64
Search 100
The Even Numbers Are:   10  2  4  6  8  10
The Odd Numbers Are:   3  5  7  9
*/




















//Below is the clean generalized code for arrays to work in the main by itself:
 /*  // Print numbers
   cout << endl << "Here's the print-out of the numbers: " << endl;
   
   for (int i = 0; i < SIZE; ++i) {
      cout << myArray[i] << endl;
   }
*/



/*
    // initializing max, min
    int max = myArray[0];
    int min = myArray[0];
    
    // scanning array to find minimum and maximum number
    for(int i=0; i<SIZE; i++) {
    // finding minimum number in array
      if(min > myArray[i]) {
         min = myArray[i];
      }
      //finding maximum number in array
      if(max < myArray[i]) {
        max = myArray[i];
      }
    }
       // displaying output
        cout<<"Maximum Number is: " << max <<endl;
        cout<<"Minimum Number is: " << min <<endl;
*/

/*
    //finds the sum of the array
    
    int sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum = sum + myArray[i];
    }
    
    cout << "The sum is: " << sum << endl;
*/


/*
    // FINDING THE EVENS AND ODDS IN AN ARRAY
    cout <<"The Even Numbers Are: ";
    
    for (int i = 0; i<SIZE; i++) {
        if (myArray[i] % 2 == 0) {
            cout << "  " << myArray[i];
        }
    }
    cout << endl;
    cout << "The Odd Numbers Are: ";
    for (int i = 0; i < SIZE; i++) {
        if (myArray[i] % 2 != 0) {
            cout << "  " << myArray[i];
        }
    }
*/


/*  // SEARCH FOR A VALUE WITHIN AN ARRAY
    int find = 0;
    cout << "Enter a number you'd like to search for: ";
    cin >> find;
    
    bool flag = false;
   for (int i = 0; i < SIZE; ++i) {
      if (myArray[i] == find) {
         flag = true;
         cout << "You found " << find << " at myArray: " << i;
      }
      if(flag == false) {
        cout << "Value not stored." << endl;
        return -1;
      }
   }
*/