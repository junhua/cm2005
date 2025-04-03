#include "Student.h"
#include <iostream>

// Constructor implementation
Student::Student(std::string studentName, std::string studentId) {
    name = studentName;
    id = studentId;
}

// Set information implementation
void Student::setInfo(std::string studentName, std::string studentId) {
    name = studentName;
    id = studentId;
}

// Add grade implementation
bool Student::addGrade(double grade) {
    if (grade >= 0 && grade <= 100) {
        grades.push_back(grade);
        return true;
    }
    return false;
}

// Calculate average implementation
double Student::calculateAverage() {
    if (grades.size() == 0) return 0.0;
    
    double sum = 0.0;
    for (int i = 0; i < grades.size(); i++) {
        sum += grades[i];
    }
    return sum / grades.size();
}

// Get letter grade implementation
char Student::getLetterGrade() {
    double average = calculateAverage();
    
    if (average >= 90) return 'A';
    if (average >= 80) return 'B';
    if (average >= 70) return 'C';
    if (average >= 60) return 'D';
    return 'F';
}

// Check if passing implementation
bool Student::isPassing() {
    return calculateAverage() >= 60;
}

// Display summary implementation
void Student::displaySummary() {
    std::cout << "Student: " << name << " (ID: " << id << ")" << std::endl;
    std::cout << "Grades: ";
    for (int i = 0; i < grades.size(); i++) {
        std::cout << grades[i];
        if (i < grades.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;
    
    double average = calculateAverage();
    std::cout << "Average: " << average << std::endl;
    std::cout << "Letter Grade: " << getLetterGrade() << std::endl;
    std::cout << "Status: " << (isPassing() ? "Passing" : "Failing") << std::endl;
}