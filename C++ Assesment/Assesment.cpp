#include <iostream>
#include <string>

using namespace std;

// Class to represent lecture details
class Lecture {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numLectures;

public:
    // Constructor to initialize lecture details
    Lecture(string lecturer = "", string subject = "", string course = "", int lectures = 0) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numLectures = lectures;
    }

    // Function to add lecture details
    void addDetails(string lecturer, string subject, string course, int lectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numLectures = lectures;
    }

    // Function to display lecturer name and lecture details
    void displayDetails() {
        cout << "Lecturer: " << lecturerName << endl;
        cout << "Subject: " << subjectName << endl;
        cout << "Course: " << courseName << endl;
        cout << "Number of lectures: " << numLectures << endl;
    }
};

int main() {
    int numLecturers;
    cout << "Enter the number of lecturers: ";
    cin >> numLecturers;

    Lecture lectures[numLecturers];

    // Add details for each lecturer
    for (int i = 0; i < numLecturers; ++i) {
        string lecturer, subject, course;
        int lecturesCount;

        cout << "Enter details for lecturer " << i + 1 << ":" << endl;
        cout << "Lecturer name: ";
        getline(cin, lecturer);
        cout << "Subject: ";
        getline(cin, subject);
        cout << "Course: ";
        getline(cin, course);
        cout << "Number of lectures: ";
        cin >> lecturesCount;

        // Add lecture details
        lectures[i].addDetails(lecturer, subject, course, lecturesCount);
    }

    // Display details of all lecturers
    cout << "Lecture Details:" << endl;
    for (int i = 0; i < numLecturers; ++i) {
        cout << "Lecturer " << i + 1 << ":" << endl;
        lectures[i].displayDetails();
        cout << endl;
    }

    return 0;
}

