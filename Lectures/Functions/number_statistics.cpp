#include <iostream>

// Function to find maximum of three numbers
int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

// Function to find minimum of three numbers
int findMin(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

// Function to calculate average of three numbers
double calculateAverage(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int num1 = 10, num2 = 25, num3 = 15;
    
    std::cout << "Maximum: " << findMax(num1, num2, num3) << std::endl;
    std::cout << "Minimum: " << findMin(num1, num2, num3) << std::endl;
    std::cout << "Average: " << calculateAverage(num1, num2, num3) << std::endl;
    
    return 0;
}