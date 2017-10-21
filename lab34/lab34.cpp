/* Name: Jordan Williams
 * Date: 10/20/17
 * Desc: A program for giving a sum of whole numbers, while then being terminated
 *       if the user inputs a negative number.
*/

#include <iostream>
using namespace std; 
int main(){
    //declared variables
    int num = 0;
    int sum = 0;
    //this cout has to be outside the loop, or it will post each time a number is entered
    cout << "Enter positive numbers separated by spaces. The program is terminated with a negative number." << endl;
    // this while statement makes the program only take positive numbers into question
    while (num >= 0) {
        cin >> num; //user input is stored in variable num
        if(num < 0) break; // if num is negative, don't count it and stop the sum count
        sum = num + sum; //provides the sum of all positive numbers
    }
    cout << "The sum is: " << sum << endl; //displays the end result
        
    return 0;
}

/*
Enter positive numbers separated by spaces. The program is terminated with a negative number.
5 8 7 3 -2
Sum is: 23

******Please see 3.4 Lab Notebook for process and methods of debug.********
*/