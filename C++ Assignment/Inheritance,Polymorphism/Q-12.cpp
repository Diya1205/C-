//Write a program to swap the two numbers using friend function 
//without using third variable 
#include<iostream>
using namespace std;

class NumberSwapper 
{
	public:
    int num1, num2;

    NumberSwapper(int a, int b) : num1(a), num2(b) {}

    friend void swapNumbers(NumberSwapper&);

    void displayNumbers() 
	{
        cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

void swapNumbers(NumberSwapper &obj) 
{

    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    NumberSwapper numbers(num1, num2);

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    swapNumbers(numbers);

    numbers.displayNumbers();

    return 0;
}

