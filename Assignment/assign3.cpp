/*Name: Jordan Williams
 *Date: 10/30/2017
 *Project: 3.0 Assignment - Game
 *Desc: A game to play Hi Ho! Cherry-O vers a computer.
 *The RULES are from: https://www.hasbro.com/common/instruct/Hi_Ho_Cherry_O_2006.pdf
*/


#include <iostream>
using namespace std;
#include <cstdlib> //library has random number generator and arithmetics
#include <ctime> //library has date and time functions for manipulation

class Player {
    public:
        Player();
        int SetPoints(int res_cherry_tree, int res_cherry_bucket); //function sets - used when changing both priv variables 
        void Print() const;
        
        void SetBucket(int bucket_set);//Mutator
        int GetBucket() const;//Accessor
        
        void SetCherryTree(int tree_set);//Mutator
        double GetCherryTree() const;//Accessor

    private: //private variables
        int cherry_bucket;
        int cherry_tree;
};

void Player::SetBucket(int bucket_set) { //sets private variable
    cherry_bucket = bucket_set;
}

int Player::GetBucket() const {
    return cherry_bucket;
}

void Player::SetCherryTree(int tree_set) { //sets private variable
    cherry_tree = tree_set;
}

Player::Player() { //default constructor that sets each object(player) with values to the priv variables
    cherry_bucket = 0;
    cherry_tree = 10;
    
    return;
}

int Player::SetPoints( int res_cherry_tree, int res_cherry_bucket) { //function member helper. Allows the use of setting both private variables
    cherry_tree = cherry_tree + res_cherry_tree;
    cherry_bucket = cherry_bucket + res_cherry_bucket;
}

void Player::Print() const { //print function to show tree and basket
    cout << "Cherry Bucket: " << cherry_bucket << endl;
    cout << "Cherry Tree: " << cherry_tree << endl;
    
    return;
}

int spinner () { //provides the "spinning" number for the nested if-else statements
    srand(time(0)); //seeds with time so it's random
    int spin = rand() % 7 + 1; //makes the number between 1-7
    return spin; //returns the random 1-7 number
}

int main () {
    char start = 'n';
    int spin = spinner(); //puts the spinner fuction output here
    bool players_turn = false; //false is player, true is npc - IS A TURN SWITCH
    //initial welcome screen
    cout << "Welcome to Hi Ho-Cherry-O!" << endl;
    cout << "You'll be playing against a computer (NPC)." << endl;
    cout << "Please type 's' when you're ready to begin: " << endl;
    cout << "How'a 'bout it?....";
    cin >> start; //press 's' to play

    
  if (start == 's') {
        Player player1; //initializes with 10 cherries on the tree and zero picked.
        Player npc; //initializes with 10 cherries on the tree and zero picked.
    while (player1.GetBucket() < 10 && npc.GetBucket() < 10 ) {
        //the following was supposed to be the spinner's rules
        if (spin == 1 && players_turn == false) {
            cout << "You landed on 1. You took 1 cherry from your tree." << endl;
            player1.SetPoints(-1, 1);
            players_turn = true;
        }
        else if (spin == 1 && players_turn == true) {
            cout << "NPC landed on 1. The NPC took 1 cherry from its tree." << endl;
            npc.SetPoints( - 1, + 1);
            players_turn = false;
        }
        else if (spin == 2 && players_turn == false) {
            cout << "You landed on 2. You took 2 cherries from your tree." << endl;
            player1.SetPoints(- 2, + 2);
            players_turn = true;
        }
        else if (spin == 2 && players_turn == true) {
            cout << "NPC landed on 2. The NPC took 2 cherries from its tree." << endl;
            npc.SetPoints( - 2, + 2);
            players_turn = false;
        }
        else if (spin == 3 && players_turn == false) {
            cout << "You landed on 3. You took 3 cherries from your tree." << endl;
            player1.SetPoints(- 3, + 3);
            players_turn = true;
        }
        else if (spin == 3 && players_turn == true) {
            cout << "NPC landed on 3. The NPC took 3 cherries from its tree." << endl;
            npc.SetPoints(- 3, + 3);
            players_turn = false;
        }
        else if (spin == 4 && players_turn == false) {
            cout << "You landed on 4. You took 4 cherries from your tree." << endl;
            player1.SetPoints( - 4, + 4);
            players_turn = true;
        }
        else if (spin == 4 && players_turn == true) {
            cout << "NPC landed on 4. The NPC took 4 cherries from its tree." << endl;
            npc.SetPoints(- 4, + 4);
            players_turn = false;
        }
        else if (spin == 5 || 6 && players_turn == false && player1.GetBucket() >= 2) {
            player1.SetPoints(+ 2, - 2);
            players_turn = true;
        }
        else if (spin == 5 || 6 && players_turn == false && player1.GetBucket() == 1) {
            player1.SetPoints(+ 1, 0);
            players_turn = true;
        }
        else if (spin == 5 || 6 && players_turn == false && player1.GetBucket() == 0) {
                players_turn = true;
        }
        else if (spin == 5 || 6 && players_turn == true && npc.GetBucket() >= 2) {
            npc.SetPoints(+ 2, - 2);
        }
        else if (spin == 5 || 6 && players_turn == true && npc.GetBucket() == 1) {
            npc.SetPoints(+ 1, 0);
            players_turn = false;
        }
        else if (spin == 5 || 6 && players_turn == true && npc.GetBucket() == 0) {
            players_turn = false;
        }
        else if (spin == 7 && players_turn == false) {
            cout << "You've spilled your bucket! Cherries from your bucket are going back on your tree..." << endl;
            player1.SetPoints(player1.GetBucket(), 0);
            players_turn = true;
     
        }
        else if (spin == 7 && players_turn == true) {
            cout << "The NPC spillt its bucket! Cherries from its bucket are going back its your tree..." << endl;
            npc.SetPoints(npc.GetBucket(), 0);
            players_turn = false;
        }
    }
    player1.Print();
    npc.Print();
    spin = spinner();
    }

    return 0;
}