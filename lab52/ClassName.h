#ifndef CLASSNAME_H
#define CLASSNAME_H
#include <iostream>
using namespace std;

class MyClass {
 public:
  MyClass();
  void Output();
  void SetNumber(int num);
  int GetNumber();
  
 private:
  int num_;
  
};

#endif