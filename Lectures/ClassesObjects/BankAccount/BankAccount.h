class BankAccount
{
private:
    double balance;
    int transactionCount;

public:
    // Constructor
    BankAccount(double initialBalance = 0.0);

    // Deposit method
    void deposit(double amount);

    // Withdrawal method
    bool withdraw(double amount);

    // Account information display
    void displayInfo();

    // Getter for balance
    double getBalance();
};
