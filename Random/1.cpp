/*Name: Jordan Williams
 *Date: 10/26/2017
 *Project: 3.0 Assignment - Game
 *Desc: A game to play Hi Ho! Cherry-O vers a computer.
 *The RULES are from: https://www.hasbro.com/common/instruct/Hi_Ho_Cherry_O_2006.pdf
*/



#include <iostream>
#include <cstdlib> //library has random number generator and arithmetics
#include <ctime> //library has date and time functions for manipulation
using namespace std;


 
int spinner () {
    srand(time(0));
    int spin = rand() % 7 + 1;
    return spin;
}


int main () {
    
    int spin = spinner ();
    bool players = 1; //0 for player, 1 for computer
    int player_tree = 10;
    int computer_tree = 10;
  
    int player_basket = 0;
    int computer_basket = 0;
    

    while (player_basket < 10 || computer_basket < 10 ) {
        if (spin == 1 && players == 0) {
            cout << "You landed on 1. You took 1 cherry from your tree." << endl;
            player_tree = player_tree - 1;
            player_basket = player_basket + 1;
        }
        else if (spin == 1 && players == 1) {
            cout << "Computer landed on 1. The computer took 1 cherry from its tree." << endl;
            computer_tree = computer_tree - 1;
            computer_basket = computer_basket + 1;
            cout << computer_basket;
        }
        else if (spin == 2 && players == 0) {
            player_tree = player_tree - 2;
            player_basket = player_basket + 2;
        }
        else if (spin == 2 && players == 1) {
            computer_tree = computer_tree - 2;
            computer_basket = computer_basket + 2;
        }
        else if (spin == 3 && players == 0) {
            player_tree = player_tree - 3;
            player_basket = player_basket + 3;
        }
        else if (spin == 3 && players == 1) {
            computer_tree = computer_tree - 3;
            computer_basket = computer_basket + 3;
        }
        else if (spin == 4 && players == 0) {
            player_tree = player_tree - 4;
            player_basket = player_basket + 4;
        }
        else if (spin == 4 && players == 1) {
            computer_tree = computer_tree - 4;
            computer_basket = computer_basket + 4;
        }
        else if (spin == 5 && players == 0 && player_basket >= 2) {
            player_tree = player_tree + 2;
            player_basket = player_basket - 2;
        }
        else if (spin == 5 && players == 0 && player_basket == 1) {
            player_tree = player_tree + 1;
            player_basket = 0;
        }
        else if (spin == 5 && players == 0 && player_basket == 0) {
                //SKIPS TURN TO NEXT PLAYER
        }
        else if (spin == 5 && players == 1 && computer_basket >= 2) {
            computer_tree = computer_tree + 2;
            computer_basket = computer_basket - 2;
        }
        else if (spin == 5 && players == 1 && computer_basket == 1) {
            computer_tree = computer_tree + 1;
            computer_basket = 0;
        }
        else if (spin == 5 && players == 1 && player_basket == 0) {
             //SKIPS TURN TO NEXT PLAYER
        }
    }
    
    return 0;
}