/*1. WAP to create simple calculator using class*/

#include<iostream>
using namespace std;


class Calculator {
private:
    double num1, num2;
public:
    void setNumbers() { //taking numbers from user
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    double add() { //addition 
        return num1 + num2;
    }

    double subtract() { //substraction
        return num1 - num2;
    }

    double multiply() { //multiplication
        return num1 * num2;
    }

    double divide() { //division
        if (num2 == 0) {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main() {
    Calculator calc;   //create object

    calc.setNumbers(); //call object

    cout << "Addition result: " << calc.add() << endl;
    cout << "Subtraction result: " << calc.subtract() << endl;
    cout << "Multiplication result: " << calc.multiply() << endl;
    cout << "Division result: " << calc.divide() << endl;

    
}

