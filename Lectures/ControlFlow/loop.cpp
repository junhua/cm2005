/*
Countdown Timer
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Countdown starting:" << endl;
    
    for (int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    
    cout << "\nBlastoff!" << endl;
    
    return 0;
}

/*
Sum of First 10 Natural Numbers
*/
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    
    for (int i = 1; i <= 10; i++) {
        sum += i;
        cout << "Adding " << i << ": Sum is now " << sum << endl;
    }
    
    cout << "Final sum of first 10 natural numbers: " << sum << endl;
    
    return 0;
}

/*
Pattern Printing
*/
#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    
    cout << "Right-angled triangle with " << rows << " rows:" << endl;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}


/*
Number Guessing Game
*/
#include <iostream>
using namespace std;

int main() {
    const int secretNumber = 42;
    int guess = 0;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    
    while (guess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Correct! The number was " << secretNumber << "." << endl;
        }
    }
    
    return 0;
}

/*
Menu-Driven Program
*/
#include <iostream>
using namespace std;

int main() {
    int choice;
    
    do {
        cout << "\n=== Menu ===" << endl;
        cout << "1. Say Hello" << endl;
        cout << "2. Print Current Year" << endl;
        cout << "3. Display a Fun Fact" << endl;
        cout << "4. Exit Program" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Hello, world!" << endl;
                break;
            case 2:
                cout << "The current year is 2025." << endl;
                break;
            case 3:
                cout << "Fun fact: C++ was developed by Bjarne Stroustrup!" << endl;
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    
    return 0;
}

/*
Continue
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, -2, 3, -4, 5, -6, 7, -8};
    int positiveSum = 0;
    
    for (int num : numbers) {
        if (num < 0) {
            cout << "Skipping " << num << endl;
            continue; // Skip negative numbers
        }
        positiveSum += num;
    }
    
    cout << "Sum of positive numbers: " << positiveSum << endl;
    
    return 0;
}

/*
Break
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;
    bool found = false;
    
    for (int num : numbers) {
        if (num == target) {
            found = true;
            cout << "Found " << target << "!" << endl;
            break; // Exit loop early
        }
        cout << "Checking " << num << "..." << endl;
    }
    
    if (!found) {
        cout << "Target " << target << " not found in the array." << endl;
    }
    
    return 0;
}