#include "Student.h"
#include <iostream>

int main() {
    Student student("John Smith", "CS10001");
    
    student.addGrade(85.5);
    student.addGrade(92.0);
    student.addGrade(77.5);
    student.addGrade(90.0);
    
    std::cout << "Student Academic Summary:" << std::endl;
    student.displaySummary();
    
    return 0;
}