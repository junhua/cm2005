#include <string>
#include <vector>

class Student {
private:
    std::string name;
    std::string id;
    std::vector<double> grades;  // Vector to store grades
    
public:
    // Constructor
    Student(std::string studentName = "", std::string studentId = "");
    
    // Set student information
    void setInfo(std::string studentName, std::string studentId);
    
    // Add a grade
    bool addGrade(double grade);
    
    // Calculate average grade
    double calculateAverage();
    
    // Determine letter grade
    char getLetterGrade();
    
    // Check if passing
    bool isPassing();
    
    // Display academic summary
    void displaySummary();
};
