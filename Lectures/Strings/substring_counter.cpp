#include <iostream>
#include <string>

int countSubstring(const std::string& str, const std::string& sub) {
    if (sub.empty()) return 0;
    
    int count = 0;
    size_t pos = 0;
    
    while ((pos = str.find(sub, pos)) != std::string::npos) {
        count++;
        pos += sub.length();
    }
    
    return count;
}

int main() {
    std::string text, pattern;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    
    std::cout << "Enter substring to count: ";
    std::getline(std::cin, pattern);
    
    int occurrences = countSubstring(text, pattern);
    std::cout << "The substring appears " << occurrences << " times." << std::endl;
    
    return 0;
}