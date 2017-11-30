/*Name: Jordan Williams
 * Lab: 5.2 - Separate File Compilation
 * Date: 11/29/17
 * Desc: Breaking down the original code into separate file directives.
*/ 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "ClassName.h"

int randomNumber(){
   srand(time(0));
   return (rand() % 10 + 1);
}

// Program starts here
int main() {
  // Create a MyClass Object
  MyClass object;

  //Send a number to the Object
  object.SetNumber(randomNumber());

  // Call the output member function
  object.Output();

  // This ends our program
  return 0;
}

/*
paliv77:~/workspace/lab52 (master) $ g++ -Wall -g -c main.cpp
paliv77:~/workspace/lab52 (master) $ g++ -Wall -g -c MyClass.cpp
g++: error: MyClass.cpp: No such file or directory
g++: fatal error: no input files
compilation terminated.
paliv77:~/workspace/lab52 (master) $ g++ -Wall -g -c ClassName.cpp
paliv77:~/workspace/lab52 (master) $ g++ -Wall -g -o mainexe main.o ClassName.o
paliv77:~/workspace/lab52 (master) $ ./mainexe
My number is: 5
paliv77:~/workspace/lab52 (master) $ 

*/