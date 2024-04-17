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
    Lecture(string lecturer, string subject, string course, int lectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numLectures = lectures;
    }

    // Function to display lecturer name and lecture details
    void displayLectureDetails() {
        cout << "Lecturer: " << lecturerName << endl;
        cout << "Subject: " << subjectName << endl;
        cout << "Course: " << courseName << endl;
        cout << "Number of lectures: " << numLectures << endl;
    }
};

int main() {
    // Create lecture objects for 5 lecturers
    Lecture lectures[5] = {
        Lecture("Diya Patil", "Java-Script", "Full Stack", 20),
        Lecture("Neel Patil", "C-language", " Computer Science", 18),
        Lecture("Khushi Patil", "Python ", "Full Stack", 25),
        Lecture("Kartik Patil", "Html", "Web-Designing", 22),
        Lecture("Dipti Patil", "Java", "Backend", 16)
    };

    // Display details of all lecturers
    cout << "Lecture Details:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Lecturer " << i + 1 << ":" << endl;
        lectures[i].displayLectureDetails();
        cout << endl;
    }

    return 0;
}

