#include <iostream>
#include <string>

using namespace std;

class Lecture {
public:
    // Data members
    string lecturerName;
    string subjectName;
    string courseName;
    int numLecturers;

    // Constructor to assign initial values
    Lecture() {}

    // Function to set lecture details
    void setDetails(string name, string subject, string course, int num) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numLecturers = num;
    }

    // Function to display name and lecture details
    void displayDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lecturers: " << numLecturers << endl;
    }
};

int main() {
    Lecture lectures[5]; // Array of Lecture objects to store 5 lectures

    //enter details for 5 lectures
    for (int i = 0; i < 5; ++i) {
        string name, subject, course;
        int num;

        cout << "Enter details for Lecture " << i + 1 << endl;
        cout << "Enter lecturer name: ";
        cin >> name;
        cout << "Enter subject name: ";
        cin >> subject;
        cout << "Enter course name: ";
        cin >> course;
        cout << "Enter number of lecturers: ";
        cin >> num;

        // Set lecture details
        lectures[i].setDetails(name, subject, course, num);
        cout << endl; 
    }
    
    // Displaying details for each lecture
    for (int i = 0; i < 5; ++i) {
        cout << "Details for Lecture " << i + 1 << endl;
        lectures[i].displayDetails();
        cout << endl; 
    }

}

