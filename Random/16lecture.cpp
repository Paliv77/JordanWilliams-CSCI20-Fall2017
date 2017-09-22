
//Created By: April Browne
 //Created On: 8/22/2016
 
 #include <iostream>
 using namespace std;
 
 struct monster{
  string head;
  string eyes;
  string ears;
  string mouth;
  string nose;
 };
 
 int main()
 {
   monster monsterA;
   monsterA.head = "Zombus";
   monsterA.eyes = "Vegitas";
   monsterA.ears = "Wackus";
   monsterA.nose = "Vegitas";
   monsterA.mouth = "Wackus";
   
   monster monsterB;
   monsterB.head = "Happy";
   monsterB.eyes = "Wackus";
   monsterB.ears = "Spritem";
   monsterB.nose = "Wackus";
   monsterB.mouth = "Spritem";
   
   cout<<"Head:"<<monsterA.head<<endl;
   cout<<"Eyes:"<<monsterA.eyes<<endl;
   cout<<"Ears:"<<monsterA.ears<<endl;
   cout<<"Nose:"<<monsterA.nose<<endl;
   cout<<"Mouth:"<<monsterA.mouth<<endl;
   
   cout<<"Head:"<<monsterB.head<<endl;
   cout<<"Eyes:"<<monsterB.eyes<<endl;
   cout<<"Ears:"<<monsterB.ears<<endl;
   cout<<"Nose:"<<monsterB.nose<<endl;
   cout<<"Mouth:"<<monsterB.mouth<<endl;
 }
 
 /*
 Important things:
 1: A struct defines a new type, not a variable or object.
 2: Dot Notation points to where the data is.
 
 Questions:
 1: Is a struct like a "skeleton" of the object?
 2: Can you combine different objects for formulate a new one via cout?
 
 /*