/*
*Name: Jordan Williams
*Lab: 2.5 Classes and Mutator functions
*Date: 10/4/17
*Desc: A program that creates a Book, then asks for user input to fill it. After,
*       it will print out each object.
*/
#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        void SetTitle(string titleToSet);//Mutator
        string GetTitle() const;//Accessor
        
        void SetAuthor(string authorToSet);//Mutator
        string GetAuthor() const;//Accessor
        
        void SetCopyrightyear(int copyrightyearToSet);//Mutator
        int GetCopyrightyear() const;//Accessor
        
        void print() { //prints out the complete object (book)
            cout << "---------------------------------------" << endl;
            cout << "---------------------------------------" << endl;
            cout << "Your book title is: " << GetTitle() << endl;
            cout << "The book's author is " << GetAuthor() << endl;
            cout << "The copyright year is " << GetCopyrightyear() << endl;
            
        }
    private: //private variables
        string title;
        string author;
        int copyrightyear;
};

void Book::SetTitle(string titleToSet) { //sets the private variable
    title = titleToSet;
}

string Book::GetTitle() const { //can be called for the private variable

    return title;
}

void Book::SetAuthor(string authorToSet) { //sets the private variable
    author = authorToSet;
}

string Book::GetAuthor() const { //can be called for the private variable
    
    return author;
}

void Book::SetCopyrightyear(int copyrightyearToSet) { //sets the private variable
    copyrightyear = copyrightyearToSet;
}

int Book::GetCopyrightyear() const { //can be called for the private variable
    
    return copyrightyear;
}

int main(){
    //variables for input
    string title = "";
    string author = "";
    int copyrightyear = 0;

    //created objects
    Book fantasy;
    Book horror;
    Book romance;
    Book comedy;
    Book mystery;

    //fantasy book
    cout << "Please enter a fantasy title: ";
    cin >> title;
    fantasy.SetTitle(title);
    cout << "Please enter the author: ";
    cin >> author;
    fantasy.SetAuthor(author);
    cout << "Please enter the copyright year: ";
    cin >> copyrightyear;
    fantasy.SetCopyrightyear(copyrightyear);
    
    //horror book
    cout << "Please enter a horror title: ";
    cin >> title;
    horror.SetTitle(title);
    cout << "Please enter the author: ";
    cin >> author;
    horror.SetAuthor(author);
    cout << "Please enter the copyright year: ";
    cin >> copyrightyear;
    horror.SetCopyrightyear(copyrightyear);
    
    //romance book
    cout << "Please enter a romance title: ";
    cin >> title;
    romance.SetTitle(title);
    cout << "Please enter the author: ";
    cin >> author;
    romance.SetAuthor(author);
    cout << "Please enter the copyright year: ";
    cin >> copyrightyear;
    romance.SetCopyrightyear(copyrightyear);
    
    //comedy book
    cout << "Please enter a comedy title: ";
    cin >> title;
    comedy.SetTitle(title);
    cout << "Please enter the author: ";
    cin >> author;
    comedy.SetAuthor(author);
    cout << "Please enter the copyright year: ";
    cin >> copyrightyear;
    comedy.SetCopyrightyear(copyrightyear);
    
    //mystery book
    cout << "Please enter a mystery title: ";
    cin >> title;
    mystery.SetTitle(title);
    cout << "Please enter the author: ";
    cin >> author;
    mystery.SetAuthor(author);
    cout << "Please enter the copyright year: ";
    cin >> copyrightyear;
    mystery.SetCopyrightyear(copyrightyear);
    
    //prints out the following of the books
    cout << "Your Books Are The Following:" << endl;
    fantasy.print();
    horror.print();
    romance.print();
    comedy.print();
    mystery.print();
    
    return 0;
}
