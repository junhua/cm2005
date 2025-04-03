#include "BankAccount.h"
#include <iostream>

// Constructor implementation
BankAccount::BankAccount(double initialBalance) {
    balance = initialBalance;
    transactionCount = 0;
}

// Deposit method implementation
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        transactionCount++;
        std::cout << "Deposit successful. New balance: $" << balance << std::endl;
    } else {
        std::cout << "Invalid deposit amount." << std::endl;
    }
}

// Withdrawal method implementation
bool BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        transactionCount++;
        std::cout << "Withdrawal successful. New balance: $" << balance << std::endl;
        return true;
    } else {
        std::cout << "Withdrawal failed. Insufficient funds or invalid amount." << std::endl;
        return false;
    }
}

// Account information display implementation
void BankAccount::displayInfo() {
    std::cout << "Current balance: $" << balance << std::endl;
    std::cout << "Transaction count: " << transactionCount << std::endl;
}

// Getter implementation
double BankAccount::getBalance() {
    return balance;
}