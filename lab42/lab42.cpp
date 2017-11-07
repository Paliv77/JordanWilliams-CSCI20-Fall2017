/*Name: Jordan Williams
 *Date: 11/6/2017
 *Project: 4.2 Lab - Parallel Arrays
 *Desc: A program to mimic an online shopping cart that tracks the albums/inventory/price of s particular item.
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string album[10];
    int inventory[10];
    int purchased[10];
    double price[10];
    int album_number =2342;
    int amount = 0;
    double total = 0.0;
    int i;
    for (int i = 0; i < 10; i++) {
        purchased[i] = 0;
    }
    //array for initial inv.
    album[0] = "Celine Dion - Canadian Queen";
    album[1] = "David Hasselhoff - King of Germany";
    album[2] = "Will Smith - Big Willie Style";
    album[3] = "Nirvana - Nevermind";
    album[4] = "Modest Mouse - Everywhere and His Nasty Parlour Tricks";
    album[5] = "Space Jam - Space Jam the Movie";
    album[6] = "Post Malone - Stoney";
    album[7] = "Whitechapel - Our Endless War";
    album[8] = "Bloc Party - Silent Alarms";
    album[9] = "Baha Men - Who Let the Dogs Out";
    //array for inv. stock
    inventory[0] = 8;
    inventory[1] = 9;
    inventory[2] = 2;
    inventory[3] = 5;
    inventory[4] = 8;
    inventory[5] = 7;
    inventory[6] = 1;
    inventory[7] = 4;
    inventory[8] = 3;
    inventory[9] = 2;
    //array for price per inv.
    price[0] = 10.00;
    price[1] = 5.09;
    price[2] = 18.90;
    price[3] = 0.99;
    price[4] = 7.42;
    price[5] = 8.00;
    price[6] = 15.82;
    price[7] = 0.50;
    price[8] = 1.00;
    price[9] = 6.15;
    
    while (album_number != 0) { 
        cout << "***********************************************************" << endl;
        cout << "Welcome to Jordan's Super Awesome Online Album Store!" << endl;
        cout << "Enter the item number of the album that you'd like to add to your cart!" << endl;
        cout << "Enter 0 to checkout." << endl;
        cout << "***********************************************************" << endl;
        cout << endl;
        cout << "      Album Name:  Current Inv. Stock:   Price:" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        for (int i = 0; i < 10; i++) {
            cout << i + 1 << ". " << album[i] << " " << inventory[i] << "  $" << price[i] << endl;
        }
        cin >> album_number;
        if (album_number == 0) {
            break;
        }
        else if ((album_number >= 1) && (album_number <=10)) { //allows the user to only purchase between 1-10 of inv
            cout << "How many would you like to purchase?" << endl;
            cin >> amount;
            if (inventory[album_number - 1] - amount < 0) { //determins if out of stock
                cout << "Wasn't able to add this item to cart. There's currently not enough in stock." << endl;
                amount = 0;
                album_number = 9999;
            }
        else { //calculates cart and minuses the inv stock to the store
            inventory[album_number - 1] = inventory[album_number - 1] - amount;
            purchased[album_number - 1] = purchased[album_number - 1] + amount;
            
            total = total + (amount * price[album_number - 1]);
            amount = 0;
            album_number = 9999;
        }
    }
    else {
        cout << "INVALID INPUT. PLEASE RESTART AND TRY AGAIN" << endl;
    }
    }
    cout << "Your Cart:" << endl;
    cout << "   Album Name ~ Amount Bought ~ Price" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << album[i] << "   " << purchased[i] << "   $" << price[i] << endl;
    }
    cout << "Total Amount: $" << total << endl;
    
    return 0;
}

/*
***********************************************************
Welcome to Jordan's Super Awesome Online Album Store!
Enter the item number of the album that you'd like to add to your cart!
Enter 0 to checkout.
***********************************************************

      Album Name:  Current Inv. Stock:   Price:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
1. Celine Dion - Canadian Queen 8  $10
2. David Hasselhoff - King of Germany 9  $5.09
3. Will Smith - Big Willie Style 2  $18.9
4. Nirvana - Nevermind 5  $0.99
5. Modest Mouse - Everywhere and His Nasty Parlour Tricks 8  $7.42
6. Space Jam - Space Jam the Movie 7  $8
7. Post Malone - Stoney 1  $15.82
8. Whitechapel - Our Endless War 4  $0.5
9. Bloc Party - Silent Alarms 3  $1
10. Baha Men - Who Let the Dogs Out 2  $6.15
1
How many would you like to purchase?
5
***********************************************************
Welcome to Jordan's Super Awesome Online Album Store!
Enter the item number of the album that you'd like to add to your cart!
Enter 0 to checkout.
***********************************************************

      Album Name:  Current Inv. Stock:   Price:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
1. Celine Dion - Canadian Queen 3  $10
2. David Hasselhoff - King of Germany 9  $5.09
3. Will Smith - Big Willie Style 2  $18.9
4. Nirvana - Nevermind 5  $0.99
5. Modest Mouse - Everywhere and His Nasty Parlour Tricks 8  $7.42
6. Space Jam - Space Jam the Movie 7  $8
7. Post Malone - Stoney 1  $15.82
8. Whitechapel - Our Endless War 4  $0.5
9. Bloc Party - Silent Alarms 3  $1
10. Baha Men - Who Let the Dogs Out 2  $6.15
0
Your Cart:
   Album Name ~ Amount Bought ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1. Celine Dion - Canadian Queen   5   $10
2. David Hasselhoff - King of Germany   0   $5.09
3. Will Smith - Big Willie Style   0   $18.9
4. Nirvana - Nevermind   0   $0.99
5. Modest Mouse - Everywhere and His Nasty Parlour Tricks   0   $7.42
6. Space Jam - Space Jam the Movie   0   $8
7. Post Malone - Stoney   0   $15.82
8. Whitechapel - Our Endless War   0   $0.5
9. Bloc Party - Silent Alarms   0   $1
10. Baha Men - Who Let the Dogs Out   0   $6.15
Total Amount: $50
*/