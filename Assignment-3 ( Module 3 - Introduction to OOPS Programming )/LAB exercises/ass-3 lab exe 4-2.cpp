//   2. Factorial Calculation Using Recursion:

#include <iostream>
using namespace std;

// Recursive function for factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial of negative numbers is undefined." << endl;
    else
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    return 0;
}

