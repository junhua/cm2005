/*
Simple Scenario 1: Temperature Check
*/

#include <iostream>
using namespace std;

int main() {
    int temperature;
    
    cout << "Enter the current temperature in Celsius: ";
    cin >> temperature;
    
    if (temperature > 30) {
        cout << "It's hot outside!" << endl;
    } else if (temperature > 20) {
        cout << "It's warm outside." << endl;
    } else {
        cout << "It's cold outside." << endl;
    }
    
    return 0;
}

/*
Simple Scenario 2: Grade Calculator
*/

#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "Enter your exam score (0-100): ";
    cin >> score;
    
    if (score >= 90) {
        cout << "You got an A grade!" << endl;
    } else if (score >= 80) {
        cout << "You got a B grade." << endl;
    } else if (score >= 70) {
        cout << "You got a C grade." << endl;
    } else if (score >= 60) {
        cout << "You got a D grade." << endl;
    } else {
        cout << "You got an F grade. You need to study more." << endl;
    }
    
    return 0;
}

/*
Challenging Scenario: Leap Year Checker
*/
#include <iostream>
using namespace std;

int main() {
    int year;
    
    cout << "Enter a year: ";
    cin >> year;
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
    
    return 0;
}