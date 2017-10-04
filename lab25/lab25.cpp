#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        void SetTitle(string titleToSet);
        string GetTitle() const;
        
        void SetAuthor(string authorToSet);
        string GetAuthor() const;
        
        void SetCopyrightyear(int copyrightyearToSet);
        int GetCopyrightyear() const;

    private:
        string title;
        string author;
        int copyrightyear;
};

void Book::SetTitle(string titleToSet) {
    title = titleToSet;
    
    return;
}

string Book::GetTitle() const {

    return title;
}

void Book::SetAuthor(string authorToSet) {
    author = authorToSet;
    
    return;
}

string Book::GetAuthor() const {
    
    return author;
}

void Book::SetCopyrightyear(int copyrightyearToSet) {
    copyrightyear = copyrightyearToSet;
    
    return;
}

int Book::GetCopyrightyear() const {
    
    return copyrightyear;
}


int main(){
    string title = "";
    string author = "";
    int copyrightyear = 0;

    Book fantasy;
    Book horror;
    Book romance;
    Book comedy;
    Book mystery;

    cout << "Please enter a fantasy title: ";
    cin >> title;
    fantasy.SetTitle(title);
    cout << "Please enter the author: ";
    cin >> author;
    fantasy.SetAuthor(author);
    cout << "Please enter the copyright year: ";
    cin >> copyrightyear;
    fantasy.SetCopyrightyear(copyrightyear);
    
    //cout << "Your fantasy book is: " << fantasy.GetTitle() << endl;
    
    cout << "Please enter a horror title: ";
    cin >> title;
    horror.SetTitle(title);
    cout << "Please enter the author: ";
    cin >> author;
    horror.SetAuthor(author);
    cout << "Please enter the copyright year: ";
    cin >> copyrightyear;
    horror.SetCopyrightyear(copyrightyear);
    
    cout << "Please enter a romance title: ";
    cin >> title;
    romance.SetTitle(title);
    cout << "Please enter the author: ";
    cin >> author;
    romance.SetAuthor(author);
    cout << "Please enter the copyright year: ";
    cin >> copyrightyear;
    romance.SetCopyrightyear(copyrightyear);
    
    cout << "Please enter a comedy title: ";
    cin >> title;
    comedy.SetTitle(title);
    cout << "Please enter the author: ";
    cin >> author;
    comedy.SetAuthor(author);
    cout << "Please enter the copyright year: ";
    cin >> copyrightyear;
    comedy.SetCopyrightyear(copyrightyear);
    
    cout << "Please enter a mystery title: ";
    cin >> title;
    mystery.SetTitle(title);
    cout << "Please enter the author: ";
    cin >> author;
    mystery.SetAuthor(author);
    cout << "Please enter the copyright year: ";
    cin >> copyrightyear;
    mystery.SetCopyrightyear(copyrightyear);
    
    void print();
    return 0;
    
}


    
    
    
   //cout << "Please enter a fantasy title: ";
    //cin >> fantasy.GetTitle();
    
    //fantasy.GetTitle(title);
    //cout << "What's the fantasy book title: ";