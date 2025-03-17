//  3. Variable Scope (Local vs Global):

#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

void demonstrateScope() {
    int localVar = 50;  // Local variable
    cout << "Inside function - Local Variable: " << localVar << endl;
    cout << "Inside function - Global Variable: " << globalVar << endl;
}

int main() {
    cout << "Inside main - Global Variable: " << globalVar << endl;
    
    // Local variable in main()
    int localVar = 10;
    cout << "Inside main - Local Variable: " << localVar << endl;
    
    // Call function
    demonstrateScope();
    
    return 0;
}

