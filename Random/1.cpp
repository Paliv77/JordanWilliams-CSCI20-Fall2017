/*Name: Jordan Williams
 *Date: 10/26/2017
 *Project: 3.0 Assignment - Game
 *Desc: A game to play Hi Ho! Cherry-O vers a computer.
 *The RULES are from: https://www.hasbro.com/common/instruct/Hi_Ho_Cherry_O_2006.pdf
*/



#include <iostream>
#include <string>

using namespace std;

class ArrayTools {
    
    public:
    
    int Find_min(int min,int max); //Determines Min. based on parameters
    int Find_max(int min,int max); //Determines 
    int Find_sum();
    int Num_even();
    int Num_odd();
    int Search(int find_number);
    string ls_sorted();
    
    ArrayTools();
    ArrayTools(int array_one[], int size);
    void Print() const;
    
    private:
    
    int array[];
    int size_;
    string sorted_;

    
};


ArrayTools::ArrayTools() {
    
    int input = 0;
    size_ = 10;
    
    for (int i = 0; i < size_; i++) {
        
        array[i] = input;
        input++;
    }
}


ArrayTools::ArrayTools(int array_one[], int size) {
    
    for (int i = 0; i < size; i++) {
        
        array[i] = array_one[i];
        
    }
    
    size_ = size;
}


void ArrayTools::Print() const {
    for (int i = 0; i < size_; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return;
}

int ArrayTools::Find_min(int min,int max) {
    int finding_min = array[min];
    for (int i = 0; i < size_; i++) {
        if(array[min] > array[i]) {
            finding_min = array[i];
        }
    }
    return finding_min;
}



int ArrayTools::Find_max(int min,int max) {
    
    int finding_max = array[min];
    
    for (int i = min; min <= max; min++) {
        
        if(array[min] > finding_max) {
            
            finding_max = array[min];
        }
    }
    
    return finding_max;
}


int ArrayTools::Find_sum() {
    
    int sum = 0;
    
    for (int i = 0; i < size_; i++) {
        
        sum = sum + array[i];
    }
    
    return sum;
}


int ArrayTools::Num_odd() {
    
    int odd_ = 0;
    
    for (int i = 0; i < size_; i++) {
        
        if((array[i] % 2) == 1) {
            
            odd_++;
        }
    }
    
    return odd_;
}



int ArrayTools::Num_even() {
    
    int even_ = 0;
    
    for (int i = 0; i < size_; i++) {
        
        if((array[i] % 2) == 0) {
            
            even_++;
        }
    }
    
    return even_;
}
        
     
int ArrayTools::Search(int find_number) {
    
    int i;
    
    for (i = 0; i < size_; i++) {
        
        if(array[i] == find_number) {
            
            return i;
        }
        
        else {
            
            return -1;
        }
    }
}


string ArrayTools::ls_sorted() {
    
    string sorted_;
    int max_val = array[0];
    int sort = 0;
    int i = 0;
    
    for (i = 0; i < size_; i++) {
        
        if(array[i] >= max_val) {
            
            sort++;
            
        }
        
    }
    
    if (sort >= 9) {
        
        sorted_ = "True";
    }
    
    else {
        
        sorted_ = "False";
    }

    return sorted_;
    
}


int main() {
    
    const int SIZE = 10;
    int myArray[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        
        cin >> myArray[i];
    }
    
    ArrayTools a(myArray, SIZE);
    
    a.Print();
    
    cout << "Min: " << a.Find_min(0,4) << endl;
    cout << "Max: " << a.Find_max(5,10) << endl;
    cout << "Sum = " << a.Find_sum() << endl;
    cout << "Search 10: " << a.Search(10) << endl;
    cout << "Sorted? " << a.ls_sorted() << endl;
    
    return 0;
}