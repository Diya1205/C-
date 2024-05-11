//Write a program to swap the two numbers using friend function 
//without using third variable 

#include<iostream>
using namespace std;

class NumberSwapper 
{
	public:
    int num1, num2;

    // Constructor
    NumberSwapper(int a, int b) : num1(a), num2(b) {}

    // Friend function declaration
    friend void swapNumbers(NumberSwapper&);

    // Member function to display the numbers
    void displayNumbers() 
	{
        cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

// Friend function 
void swapNumbers(NumberSwapper &obj) 
{
    // Swapping without using a third variable
    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

main() {
    
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    NumberSwapper numbers(num1, num2);
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapNumbers(numbers);
    numbers.displayNumbers();
}

