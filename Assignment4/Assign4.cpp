/*
Name: Jordan Williams
Project: Assignment 4
DateL 11/22/17
Disc:
This program will read in student answers for a test and compare the answers to the corresponding answer key in a new window for the test.
1 point is awarded for each correct answer, omitted answers get 0 points, and incorrect answers deduct 1/4 point.  
The program should output to the screen and a file the student’s name, list of missed questions, and overall grade on the exam.
*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//Will create an answerkey object with correct answers, then will constrast with student object(s)?
class Grader {
    
    public:
        //Mutators
        void SetName(string name);
        void SetAnswers(string answers);
        
        //Accessors
        string GetName() const;
        string GetAnswers() const;
    
    private: 
        string name_;
        string answers_;
};

void Grader::SetAnswers(string answers){ //Mutator for the answer variable
    answers_ = answers;
}

void Grader::SetName(string name){ //Mutator for the answer variable
    name_ = name;
}

int main(){
    const int size = 21;
    string global_answers = "";
    ifstream fin;
    ofstream fout;
    
    Grader professor[size];
    Grader students[size];
    
    //Opening and error checking the answerkey.txt file
    fin.open("answerkey.txt");
    if (!fin.is_open()){
        cout << "Could not open file answerkey.txt" << endl;
        return 1;
    } 
    else{
        cout << "File: answerkey.txt is opened" << endl;
    }
    
    // Getting answer key for object professor
   while(!fin.eof()){
      getline(fin, global_answers);
      cout<<global_answers<<endl;
    }
    //Opening and error checking the answerkey.txt file
    fin.open("studentanswers.txt");
    if (!fin.is_open()){
        cout << "Could not open file studentanswers.txt" << endl;
        return 1;
    } 
    else{
        cout << "File: studentanswers.txt is opened" << endl;
    }
    
    //Try to open output file error checking
    fout.open("output.txt");
    if (!fin.is_open()) {
        cout << "Could not open file output.txt." << endl;
        return 1;
    }
    else{
        cout << "File: output.txt is opened" << endl;
    }
    return 0;
}

