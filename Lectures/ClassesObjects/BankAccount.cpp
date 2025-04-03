#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    int transactionCount;
    
public:
    // Constructor
    BankAccount(double initialBalance = 0.0) {
        balance = initialBalance;
        transactionCount = 0;
    }
    
    // Deposit method
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            transactionCount++;
            cout << "Deposit successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    
    // Withdrawal method
    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            transactionCount++;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
            return true;
        } else {
            cout << "Withdrawal failed. Insufficient funds or invalid amount." << endl;
            return false;
        }
    }
    
    // Account information display
    void displayInfo() {
        cout << "Current balance: $" << balance << endl;
        cout << "Transaction count: " << transactionCount << endl;
    }
    
    // Getter for balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000.0);
    
    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(2000.0);  // This should fail
    account.deposit(-100.0);   // This should fail
    
    cout << "\nFinal account information:" << endl;
    account.displayInfo();
    
    return 0;
}