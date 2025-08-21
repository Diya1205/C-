#include <iostream>

class MathOperations {
public:
    // Addition
    int calculate(int a, int b) {
        return a + b;
    }

    // Subtraction
    int calculate(int a, int b, int c) {
        return a - b - c;
    }

    // Multiplication
    int calculate(int a, int b, int c, int d) {
        return a * b * c * d;
    }

    // Division
    double calculate(double a, double b) {
        if (b != 0)
            return a / b;
        else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
    }
};

int main() {
    MathOperations math;

    // Addition
    std::cout << "Addition: " << math.calculate(5, 3) << std::endl;

    // Subtraction
    std::cout << "Subtraction: " << math.calculate(10, 3, 2) << std::endl;

    // Multiplication
    std::cout << "Multiplication: " << math.calculate(2, 3, 4, 5) << std::endl;

    // Division
    std::cout << "Division: " << math.calculate(10.0, 2.0) << std::endl;
    std::cout << "Division: " << math.calculate(10.0, 0.0) << std::endl; // Division by zero error

    return 0;
}

