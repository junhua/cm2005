#include <iostream>
#include <string>
#include <unordered_map>

std::string longestRepeatedSubstring(const std::string& str) {
    std::string result;
    int n = str.length();
    
    // Try all possible substring lengths, starting from the longest
    for (int len = n/2; len > 0; len--) {
        std::unordered_map<std::string, int> substringCount;
        
        // Check all substrings of current length
        for (int i = 0; i <= n - len; i++) {
            std::string sub = str.substr(i, len);
            substringCount[sub]++;
            
            // If this substring appears more than once
            if (substringCount[sub] > 1) {
                return sub; // Return the first found (we're checking in descending length)
            }
        }
    }
    
    return ""; // No repeated substring
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    
    std::string result = longestRepeatedSubstring(text);
    
    if (result.empty()) {
        std::cout << "No repeated substring found." << std::endl;
    } else {
        std::cout << "Longest repeated substring: \"" << result << "\"" << std::endl;
        std::cout << "Length: " << result.length() << std::endl;
    }
    
    return 0;
}