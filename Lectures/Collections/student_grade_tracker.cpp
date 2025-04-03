#include <iostream>
#include <vector>
#include <string>
#include <numeric>

int main() {
    std::vector<double> grades;
    double grade;
    std::string input;

    std::cout << "Enter grades (type 'done' when finished):\n";
    while (true) {
        std::cin >> input;
        if (input == "done") break;
        grade = std::stod(input);
        grades.push_back(grade);
    }

    double sum = std::accumulate(grades.begin(), grades.end(), 0.0);
    double average = grades.empty() ? 0 : sum / grades.size();

    std::cout << "Number of grades: " << grades.size() << std::endl;
    std::cout << "Average grade: " << average << std::endl;

    return 0;
}