/*
Scenario 1: Grade Range Lookup
*/
#include <iostream>
using namespace std;

int main() {
    char grade;
    
    cout << "Enter a letter grade (A, B, C, D, or F): ";
    cin >> grade;
    
    // Convert to uppercase if lowercase is entered
    grade = toupper(grade);
    
    switch (grade) {
        case 'A':
            cout << "Score range: 90-100" << endl;
            break;
        case 'B':
            cout << "Score range: 80-89" << endl;
            break;
        case 'C':
            cout << "Score range: 70-79" << endl;
            break;
        case 'D':
            cout << "Score range: 60-69" << endl;
            break;
        case 'F':
            cout << "Score range: 0-59" << endl;
            break;
        default:
            cout << "Invalid grade entered. Please enter A, B, C, D, or F." << endl;
            break;
    }
    
    return 0;
}

/*
Scenario 2: Day of the Week
*/
#include <iostream>
using namespace std;
int main() {
    int day;
    
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;
    
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 7." << endl;
            break;
    }
    
    return 0;
}