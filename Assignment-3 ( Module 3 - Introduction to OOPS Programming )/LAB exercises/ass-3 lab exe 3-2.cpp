// 2. Number Guessing Game (While Loops & Conditions):

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Seed for random number
    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Guess the number between 1 and 100!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    return 0;
}


