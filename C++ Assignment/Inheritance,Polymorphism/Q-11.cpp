#include<iostream>
using namespace std;

class calculate {
public:
    // Function to calculate area of a circle
    double calculateArea(double radius) {
        return 3.14 * radius * radius;
    }

    // Function to calculate area of a rectangle
    double calculateArea(double length, double breadth) {
        return length * breadth;
    }

    // Function to calculate area of a triangle
    float calculateArea(float base, float height) {
        return 0.5 * base * height;
    }
};

int main() {
    double radius;
    double length;
    double breadth;
    float base;
    float height;

    // Input length and breadth of rectangle
    cout << "Enter the length of Rectangle: ";
    cin >> length;
    cout << "Enter the breadth of Rectangle: ";
    cin >> breadth;

    // Input base and height of triangle
    cout << "Enter the base of Triangle: ";
    cin >> base;
    cout << "Enter the height of Triangle: ";
    cin >> height;

    // Input radius of circle
    cout << "Enter the radius of circle: ";
    cin >> radius;

    // Create an object of calculate class
    calculate obj;

    // Calculate and display area of rectangle
    cout << "Area of Rectangle is: " << obj.calculateArea(length, breadth) << endl;

    // Calculate and display area of triangle
    cout << "Area of Triangle is: " << obj.calculateArea(base, height) << endl;

    // Calculate and display area of circle
    cout << "Area of circle is: " << obj.calculateArea(radius) << endl;

    return 0;
}

