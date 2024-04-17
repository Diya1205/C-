/* Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference. */

#include <iostream>
using namespace std;

float calculateArea(float radius) {
    return 3.14 * radius * radius;
}

float calculateCircumference(float radius) {
    return 2 * 3.14 * radius;
}

int main() {
    float radius;
    
    cout << "Enter radius of the circle: ";
    cin >> radius;
    
    cout << "Area of the circle: " << calculateArea(radius) << endl;
    
    cout << "Circumference of the circle: " << calculateCircumference(radius) << endl;
    
    return 0;
}

