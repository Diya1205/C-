/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;

// Base class to store student's roll number
class Students {
    public:
        int roll_number;
};

// Derived class to store marks obtained in two subjects
class Test : public Students {
    public:
        int subject1_marks;
        int subject2_marks;
};

// Derived class to calculate total marks obtained
class Result : public Test {
    public:
        int total_marks;
};

int main() {
    // Creating an object of the Result class
    Result obj;
    
    // Assigning a roll number to the student
    obj.roll_number = 20;
    cout << "Student Roll Number: " << obj.roll_number << endl;
    
    // Inputting marks for subject 1
    cout << "Enter Student marks for subject 1: ";
    cin >> obj.subject1_marks;
    
    // Inputting marks for subject 2
    cout << "Enter Student marks for subject 2: ";
    cin >> obj.subject2_marks;
    
    // Calculating and displaying total marks
    obj.total_marks = obj.subject1_marks + obj.subject2_marks;
    cout << "Total Marks: " << obj.total_marks << endl;
    
    return 0;
}

