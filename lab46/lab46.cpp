/*
*Name: Jordan Williams
*Lab: 4.6 - File Input/Output
*Date: 11/15/17
*Desc: A program to take in a input file, which includes:
*      student name, semester number, list of grades, and class hours. It will
*      read the data and calculate the semester GPA/overall GPA.
*/

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main() {
    
    ifstream fin;
    ofstream fout;

    const int NAME = 99; //Array element

    double grade_point_average_one = 0.0;
    double grade_point_average_two = 0.0;
    double grade_point_average_three = 0.0;

    string first_name[NAME];
    string last_name[NAME];

    int number_classes[NAME];
    int total_class_hours[NAME];

    int class_hours_one[NAME];
    int class_hours_two[NAME];
    int class_hours_three[NAME];

    char grade_one[NAME];
    char grade_two[NAME];
    char grade_three[NAME];

    int credits_one = 0;
    int credits_two = 0;
    int credits_three = 0;

    //Try to open input file error checking
    fin.open("input.txt");
    if (!fin.is_open()){
        cout << "Could not open file input.txt" << endl;
        return 1;
    } 
    else{
        cout << "File: input.txt is opened" << endl;
    }
    
    //Try to open output file error checking
    fout.open("output.html");
    if (!fin.is_open()) {
        cout << "Could not open file output.txt." << endl;
        return 1;
    }
    else{
        cout << "File:output.html is opened" << endl;
    }
    //Student 1
    fin >> first_name[0];
    fin >> last_name[0];
    fin >> number_classes[0];

    for (int i = 0; i < number_classes[0]; ++i){
        fin >> class_hours_one[i];
        fin >> grade_one[i];
    }
    
    cout << first_name[0] << " " << last_name[0] << endl;
    cout << number_classes[0] << endl;
    
    for (int i = 0; i < number_classes[0]; ++i){
        cout << class_hours_one[i] << " " << grade_one[i] << endl;
    }
    //Calculating total amount of hours to be used to find GPA
    for (int i = 0; i < number_classes[0]; ++i){
        total_class_hours[0] = total_class_hours[0] + class_hours_one[i];
    }
    
    credits_one = total_class_hours[0];
    
    //Calculating GPA for student 1
    for (int i = 0; i < number_classes[0]; ++i){
        if(grade_one[i] == 'A'){
            grade_point_average_one = grade_point_average_one + 4;
        }
        else if(grade_one[i] == 'B'){
            grade_point_average_one = grade_point_average_one + 3;
        }
        else if(grade_one[i] == 'C'){
            grade_point_average_one = grade_point_average_one + 2;
        }
        else if(grade_one[i] == 'D' || 'F'){
            grade_point_average_one = grade_point_average_one + 0;
            credits_one = credits_one - class_hours_one[i];
        }
    }
    
    grade_point_average_one = (grade_point_average_one / number_classes[0]);
    
    cout << "Total Possible Credits For " << first_name[0] << " " << last_name[0] << ": " << total_class_hours[0] << endl;
    cout << "Total Credits Earned: " << credits_one << endl;
    cout << "GPA: " << grade_point_average_one << endl;
    cout << endl;

    //Student 2
    fin >> first_name[1];
    fin >> last_name[1];
    fin >> number_classes[1];
    
    for (int i = 0; i < number_classes[1]; ++i){
        fin >> class_hours_two[i];
        fin >> grade_two[i];
    }
    
    cout << first_name[1] << " " << last_name[1] << endl;
    cout << number_classes[1] << endl;
    
    //Calculating total amount of hours to be used to find GPA
    for (int i = 0; i < number_classes[1]; ++i){
        cout << class_hours_two[i] << " " << grade_two[i] << endl;
    }
    
    for (int i = 0; i < number_classes[1]; ++i){
        total_class_hours[1] = total_class_hours[1] + class_hours_two[i];
    }
    
    credits_two = total_class_hours[1];
 
    //Calculating GPA for student 1
    for (int i = 0; i < number_classes[1]; ++i){
        if(grade_two[i] == 'A'){
            grade_point_average_two = grade_point_average_two + 4;
        }
        else if(grade_two[i] == 'B'){
            grade_point_average_two = grade_point_average_two + 3;
        }
        else if(grade_two[i] == 'C'){
            grade_point_average_two = grade_point_average_two + 2;
        }
        else if(grade_two[i] == 'D' || 'F'){
            grade_point_average_two = grade_point_average_two + 0;
            credits_two = credits_two - class_hours_two[i];
        }
    }
    
    grade_point_average_two = (grade_point_average_two / number_classes[1]);
    
    cout << "Total Possible Credits For " << first_name[1] << " " << last_name[1] << ": " << total_class_hours[1] << endl;
    cout << "Total Credits Earned: " << credits_two << endl;
    cout << "GPA: " << grade_point_average_two << endl;
    cout << endl;

    //Student 3
    fin >> first_name[2];
    fin >> last_name[2];
    fin >> number_classes[2];
    
    for (int i = 0; i < number_classes[2]; ++i){
        fin >> class_hours_three[i];
        fin >> grade_three[i];
    }
    
    cout << first_name[2] << " " << last_name[2] << endl;
    cout << number_classes[2] << endl;
    
    //Calculating total amount of hours to be used to find GPA
    for (int i = 0; i < number_classes[2]; ++i){
        cout << class_hours_three[i] << " " << grade_three[i] << endl;
    }
    for (int i = 0; i < number_classes[2]; ++i){
        total_class_hours[2] = total_class_hours[2] + class_hours_three[i];
    }
    
    credits_three = total_class_hours[2];
    
    //Calculating GPA for third student
    for (int i = 0; i < number_classes[2]; ++i){
        if(grade_three[i] == 'A'){
            grade_point_average_three = grade_point_average_three + 4;
        }
        else if(grade_three[i] == 'B'){
            grade_point_average_three = grade_point_average_three + 3;
        }
        else if(grade_three[i] == 'C'){
            grade_point_average_three = grade_point_average_three + 2;
        }
        else if(grade_three[i] == 'D' || 'F') {
            grade_point_average_three = grade_point_average_three + 0;
            credits_three = credits_three - class_hours_three[i];
        }
    }
    
    grade_point_average_three = (grade_point_average_three / number_classes[2]);

    cout << "Total Possible Credits For " << first_name[2] << " " << last_name[2] << ": " << total_class_hours[2] << endl;
    cout << "Total Credits Earned: " << credits_three << endl;
    cout << "GPA: " << grade_point_average_three;
 
    //START OF THE HTML FILE
    fout << "<!DOCTYPE html>" << endl;
    fout << "<html>" << endl;
    fout << "<head>" << endl;
    fout << "<title>Student Transcript</title>" << endl;
    fout << "</head>" << endl;
    fout << "<body>" << endl;
    fout << "<h1>Student Transcript</h1>";

    //Sending first students information to the HTML file
    fout << "<h1>" << first_name[0] << " " << last_name[0] << ":" << "</h1>" << endl;
    fout << endl;
    fout << "<h3>" << "Total Possible Credits: " << total_class_hours[0] << "</h3>" << endl;
    fout << "<h3>" << "Total Credits Earned: " << credits_one << "</h3>" << endl;
    fout << "<h3>" << "Total GPA: " << grade_point_average_one << "</h3>" << endl;
    fout << endl;
    fout << endl;

    //Sending second students information to the HTML file
    fout << "<h1>" << first_name[1] << " " << last_name[1] << ":" << "</h1>" << endl;
    fout << endl;
    fout << "<h3>" << "Total Possible Credits: " << total_class_hours[1] << "</h3>" << endl;
    fout << "<h3>" << "Total Credits Earned: " << credits_two << "</h3>" << endl;
    fout << "<h3>" << "Total GPA: " << grade_point_average_two << "</h3>" << endl;
    fout << endl;
    fout << endl;

    //Sending third students information to the HTML file
    fout << "<h1>" << first_name[2] << " " << last_name[2] << ":" << "</h1>" << endl;
    fout << endl;
    fout << "<h3>" << "Total Possible Credits: " << total_class_hours[2] << "</h3>" << endl;
    fout << "<h3>" << "Total Credits Earned: " << credits_three << "</h3>" << endl;
    fout << "<h3>" << "Total GPA: " << grade_point_average_three << "</h3>" << endl;
    fout << endl;
    fout << endl;
    fout << "</body>" << endl;
    fout << "</html>" << endl;
    //END OF THE HTML FILE 

    fin.close();//Closing .txt file 
    fout.close();//Closing .html file

    return 0;
}

/*
Running /home/ubuntu/workspace/lab46/lab46.cpp
File: input.txt is opened
File:output.html is opened
Suzy Cue
4
3 A
3 A
3 A
3 B
Total Possible Credits For Suzy Cue: 12
Total Credits Earned: 12
GPA: 3.75

Joe Joseph
4
4 D
3 C
3 B
3 C
Total Possible Credits For Joe Joseph: 13
Total Credits Earned: 9
GPA: 1.75

Jillian Smith
5
4 C
3 C
4 C
3 B
3 C
Total Possible Credits For Jillian Smith: 17
Total Credits Earned: 17
GPA: 2.2
*/



/*
<!DOCTYPE html>
<html>
<head>
<title>Student Transcript</title>
</head>
<body>
<h1>Student Transcript</h1><h1>Suzy Cue:</h1>

<h3>Total Possible Credits: 12</h3>
<h3>Total Credits Earned: 12</h3>
<h3>Total GPA: 3.75</h3>


<h1>Joe Joseph:</h1>

<h3>Total Possible Credits: 13</h3>
<h3>Total Credits Earned: 9</h3>
<h3>Total GPA: 1.75</h3>


<h1>Jillian Smith:</h1>

<h3>Total Possible Credits: 17</h3>
<h3>Total Credits Earned: 17</h3>
<h3>Total GPA: 2.2</h3>


</body>
</html>

*/