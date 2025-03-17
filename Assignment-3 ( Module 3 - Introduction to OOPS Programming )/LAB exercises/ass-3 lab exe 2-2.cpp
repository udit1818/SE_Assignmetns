// 2. Type Conversion

#include <iostream>
using namespace std;

int main() {
    // Implicit Conversion (Automatic)
    int num = 10;
    double result = num / 3.0;  // int is implicitly converted to double

    // Explicit Conversion (Type Casting)
    double pi = 3.14159;
    int intPi = (int)pi;  // Explicitly converting double to int

    // Output
    cout << "Implicit Conversion (int to double): " << result << endl;
    cout << "Explicit Conversion (double to int): " << intPi << endl;

    return 0;
}

