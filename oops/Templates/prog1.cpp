/*1. Write a program of to swap the two values using template*/

#include <iostream>
using namespace std;

template<typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
	int value1,value2;
    // Ask the user to input two values
    cout << "Enter the first value: ";
    cin >> value1;

    cout << "Enter the second value: ";
    cin >> value2;

    // Display the values before swapping
    cout << "\nBefore swapping:" << endl;
    cout << "Value 1: " << value1 << ", Value 2: " << value2 << endl;

    // Swap the values using the template function
    swapValues(value1, value2);

    // Display the values after swapping
    cout << "\nAfter swapping:" << endl;
    cout << "Value 1: " << value1 << ", Value 2: " << value2 << endl;

    
}

