// 3. Operator Demonstration

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;

    // Arithmetic Operators
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulus: " << (a % b) << endl;

    // Relational Operators
    cout << "a == b: " << (a == b) << endl;
    cout << "a > b: " << (a > b) << endl;

    // Logical Operators
    cout << "(a > 0 && b > 0): " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b < 0): " << (a > 0 || b < 0) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    // Bitwise Operators
    cout << "a & b: " << (a & b) << endl;
    cout << "a | b: " << (a | b) << endl;
    cout << "a ^ b: " << (a ^ b) << endl;
    cout << "a << 1: " << (a << 1) << endl;  // Left Shift
    cout << "a >> 1: " << (a >> 1) << endl;  // Right Shift

    return 0;
}

