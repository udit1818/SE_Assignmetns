//  2. Class for Bank Account (Encapsulation): 

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Invalid initial balance. Setting to 0." << endl;
        }
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient funds!" << endl;
        }
    }

    // Display balance
    void displayBalance() const {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000);  // Initial balance
    account.displayBalance();
    account.deposit(500);
    account.withdraw(300);
    account.displayBalance();
    
    return 0;
}

