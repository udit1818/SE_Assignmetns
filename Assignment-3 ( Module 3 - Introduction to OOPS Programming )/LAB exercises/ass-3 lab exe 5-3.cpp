// 3. String Palindrome Check:

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversedStr;
    cout << "Enter a string: ";
    cin >> str;

    // Reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    // Check if palindrome
    if (str == reversedStr) {
        cout << str << " is a palindrome!" << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

