#include <iostream>
using namespace std;

class Calculator {
public:
    float add(float a, float b) {
        return a + b;
    }

    float subtract(float a, float b) {
        return a - b;
    }

    float multiply(float a, float b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b == 0) {
            cout << "Error! Division by zero is not allowed." << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;  // Creating object of Calculator class
    float num1, num2;
    int choice;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Menu for operations
    cout << "\nSelect Operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Calling functions using object
    switch (choice) {
        case 1:
            cout << "Result = " << calc.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result = " << calc.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result = " << calc.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result = " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

