//  1. Variables and Constants
//Write a C++ program that demonstrates the use of variables and constants.\
 Create variables of different data types and perform operations on them.
 
 #include <iostream>
using namespace std;

int main() {
    // Variables
    int age = 20;
    double height = 5.9;
    char grade = 'A';
    string name = "Udit";

    // Constant
    const double PI = 3.14159;

    // Operations
    age += 2;  // Increment age by 2
    double circleArea = PI * (height * height);

    // Output
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Area of a circle with radius " << height << " is: " << circleArea << endl;

    return 0;
}

