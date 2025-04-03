#include <iostream>
#include <string>

std::string replaceWord(std::string text, const std::string& oldWord, 
                        const std::string& newWord) {
    if (oldWord.empty() || oldWord == newWord) return text;
    
    size_t pos = 0;
    while ((pos = text.find(oldWord, pos)) != std::string::npos) {
        // Check if found match is a whole word (not part of another word)
        bool isWordStart = (pos == 0 || !isalpha(text[pos-1]));
        bool isWordEnd = (pos + oldWord.length() == text.length() || 
                         !isalpha(text[pos + oldWord.length()]));
                         
        if (isWordStart && isWordEnd) {
            text.replace(pos, oldWord.length(), newWord);
            pos += newWord.length();
        } else {
            pos += oldWord.length();
        }
    }
    
    return text;
}

int main() {
    std::string text, oldWord, newWord;
    
    std::cout << "Enter text: ";
    std::getline(std::cin, text);
    
    std::cout << "Word to replace: ";
    std::cin >> oldWord;
    
    std::cout << "Replace with: ";
    std::cin >> newWord;
    
    std::cout << "Result: " << replaceWord(text, oldWord, newWord) << std::endl;
    return 0;
}