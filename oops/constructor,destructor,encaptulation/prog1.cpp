/*1. Write a programto find the multiplication values and the cubic values
usinginline function*/

#include<iostream>
using namespace std;


// Inline function to calculate multiplication
inline int multiply(int x, int y) {
    return x * y;
}

// Inline function to calculate cubic value
inline int cubic(int x) {
    return x * x * x;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int multiplied = multiply(num, 5); // Multiplying by 5
    int cubed = cubic(num);

    cout << "Multiplication result: " << multiplied << endl;
    cout << "Cubic result: " << cubed << endl;


}

