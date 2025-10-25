#include <iostream>
#include <cmath>   // for power and square root
using namespace std;

// Function declarations
void addition();
void subtraction();
void multiplication();
void division();
void power();
void squareRoot();

int main() {
    int choice;

    do {
        cout << "\n=====================================\n";
        cout << "         SIMPLE CALCULATOR MENU       \n";
        cout << "=====================================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power\n";
        cout << "6. Square Root\n";
        cout << "7. Exit\n";
        cout << "-------------------------------------\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        switch (choice) {
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 5: power(); break;
            case 6: squareRoot(); break;
            case 7: cout << "Exiting calculator... Goodbye!\n"; break;
            default: cout << "Invalid choice! Please try again.\n"; break;
        }

    } while (choice != 7);

    return 0;
}

// Function Definitions

void addition() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result = " << a + b << endl;
}

void subtraction() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result = " << a - b << endl;
}

void multiplication() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result = " << a * b << endl;
}

void division() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0)
        cout << "Error: Division by zero is not allowed!" << endl;
    else
        cout << "Result = " << a / b << endl;
}

void power() {
    double base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << "Result = " << pow(base, exp) << endl;
}

void squareRoot() {
    double num;
    cout << "Enter number: ";
    cin >> num;
    if (num < 0)
        cout << "Error: Negative number has no real square root!" << endl;
    else
        cout << "Result = " << sqrt(num) << endl;
}
