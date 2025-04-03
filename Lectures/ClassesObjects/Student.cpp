#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string id;
    double grades[10];  // Array to store up to 10 grades
    int gradeCount;
    
public:
    // Constructor
    Student(string studentName = "", string studentId = "") {
        name = studentName;
        id = studentId;
        gradeCount = 0;
        for (int i = 0; i < 10; i++) {
            grades[i] = 0.0;
        }
    }
    
    // Set student information
    void setInfo(string studentName, string studentId) {
        name = studentName;
        id = studentId;
    }
    
    // Add a grade
    bool addGrade(double grade) {
        if (gradeCount < 10 && grade >= 0 && grade <= 100) {
            grades[gradeCount] = grade;
            gradeCount++;
            return true;
        }
        return false;
    }
    
    // Calculate average grade
    double calculateAverage() {
        if (gradeCount == 0) return 0.0;
        
        double sum = 0.0;
        for (int i = 0; i < gradeCount; i++) {
            sum += grades[i];
        }
        return sum / gradeCount;
    }
    
    // Determine letter grade
    char getLetterGrade() {
        double average = calculateAverage();
        
        if (average >= 90) return 'A';
        if (average >= 80) return 'B';
        if (average >= 70) return 'C';
        if (average >= 60) return 'D';
        return 'F';
    }
    
    // Check if passing
    bool isPassing() {
        return calculateAverage() >= 60;
    }
    
    // Display academic summary
    void displaySummary() {
        cout << "Student: " << name << " (ID: " << id << ")" << endl;
        cout << "Grades: ";
        for (int i = 0; i < gradeCount; i++) {
            cout << grades[i];
            if (i < gradeCount - 1) cout << ", ";
        }
        cout << endl;
        
        double average = calculateAverage();
        cout << "Average: " << average << endl;
        cout << "Letter Grade: " << getLetterGrade() << endl;
        cout << "Status: " << (isPassing() ? "Passing" : "Failing") << endl;
    }
};

int main() {
    Student student("John Smith", "CS10001");
    
    student.addGrade(85.5);
    student.addGrade(92.0);
    student.addGrade(77.5);
    student.addGrade(90.0);
    
    cout << "Student Academic Summary:" << endl;
    student.displaySummary();
    
    return 0;
}