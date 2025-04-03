#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number <= 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;
    
    for (int i = 5; i <= sqrt(number); i += 6) {
        if (number % i == 0 || number % (i + 2) == 0)
            return false;
    }
    
    return true;
}

// Function to display all prime numbers up to a limit
void displayPrimes(int limit) {
    std::cout << "Prime numbers up to " << limit << ":" << std::endl;
    
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int num = 17;
    int limit = 50;
    
    std::cout << num << " is " << (isPrime(num) ? "prime" : "not prime") << std::endl;
    displayPrimes(limit);
    
    return 0;
}