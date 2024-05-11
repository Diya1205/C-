/* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */

#include<iostream>
using namespace std;

class Mathematic{
	public:
	// Function to add three integers
	void A(int a, int b, int c) {
		cout << "sum = " << (a + b + c) << endl;
	}
	
	// Function to add two doubles
	void A(double a, double b) {
		cout << "sum = " << (a + b) << endl;
	}
	
	// Function to add an integer and a double
	void A(int a, double b) {
		cout << "sum = " << (a + b) << endl;
	}
	
	// Function to add a float and a double
	void A(float a, double b) {
		cout << "sum = " << (a + b) << endl;
	}
};

main() {
	Mathematic obj;
	obj.A(10, 10, 10);
	obj.A(5.2, 10.2);
	obj.A(10, 10.3);
	obj.A(10.2f, 10.2); 
}

