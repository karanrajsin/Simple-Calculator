#include <iostream>
#include <cmath>
using namespace std;

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

        if (!(cin >> choice)) {
            cout << "Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

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

void addition() {
    double a, b;
    cout << "Enter two numbers: ";
    if (!(cin >> a >> b)) {
        cout << "Invalid input!\n";
        cin.clear(); cin.ignore(1000, '\n');
        return;
    }
    cout << "Result = " << a + b << endl;
}

void subtraction() {
    double a, b;
    cout << "Enter two numbers: ";
    if (!(cin >> a >> b)) {
        cout << "Invalid input!\n";
        cin.clear(); cin.ignore(1000, '\n');
        return;
    }
    cout << "Result = " << a - b << endl;
}

void multiplication() {
    double a, b;
    cout << "Enter two numbers: ";
    if (!(cin >> a >> b)) {
        cout << "Invalid input!\n";
        cin.clear(); cin.ignore(1000, '\n');
        return;
    }
    cout << "Result = " << a * b << endl;
}

void division() {
    double a, b;
    cout << "Enter two numbers: ";
    if (!(cin >> a >> b)) {
        cout << "Invalid input!\n";
        cin.clear(); cin.ignore(1000, '\n');
        return;
    }
    if (b == 0)
        cout << "Error: Division by zero is not allowed!" << endl;
    else
        cout << "Result = " << a / b << endl;
}

void power() {
    double base, exp;
    cout << "Enter base and exponent: ";
    if (!(cin >> base >> exp)) {
        cout << "Invalid input!\n";
        cin.clear(); cin.ignore(1000, '\n');
        return;
    }
    cout << "Result = " << pow(base, exp) << endl;
}

void squareRoot() {
    double num;
    cout << "Enter number: ";
    if (!(cin >> num)) {
        cout << "Invalid input!\n";
        cin.clear(); cin.ignore(1000, '\n');
        return;
    }
    if (num < 0)
        cout << "Error: Negative number has no real square root!" << endl;
    else
        cout << "Result = " << sqrt(num) << endl;
}
