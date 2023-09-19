#include <iostream>
using namespace std;

int main() {
    char oper;
    float a, b;

    // Allows user to enter the operands
    cout << "Enter two operands: ";
    cin >> a >> b;

    // Allows user to enter operator i.e. +, -, *, /
    cout << "Enter operator: ";
    cin >> oper;

    // Switch statement
    switch (oper) {
        // If operator is '+'
        case '+':
            cout << a + b << endl;
            break;
        // If operator is '-'
        case '-':
            cout << a - b << endl;
            break;
        // If operator is '*'
        case '*':
            cout << a * b << endl;
            break;
        // If operator is '/'
        case '/':
            cout << a / b << endl;
            break;
        // If any other operator display error message
        default:
            cout << "Error! Incorrect operator" << endl;
            break;
    }
    return 0;
}