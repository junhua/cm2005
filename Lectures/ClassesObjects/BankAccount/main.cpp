#include "BankAccount.h"
#include <iostream>

int main() {
    BankAccount account(1000.0);
    
    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(2000.0);  // This should fail
    account.deposit(-100.0);   // This should fail
    
    std::cout << "\nFinal account information:" << std::endl;
    account.displayInfo();
    
    return 0;
}