#include <iostream>

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double tempF = 98.6;
    double tempC = fahrenheitToCelsius(tempF);
    
    std::cout << tempF << "°F is equal to " << tempC << "°C" << std::endl;
    
    return 0;
}