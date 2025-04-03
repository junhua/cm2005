#include <iostream>
#include <map>
#include <string>

int main() {
    std::string text;
    std::cout << "Enter text: ";
    std::getline(std::cin, text);
    
    std::map<std::string, int> wordFreq;
    std::string word;
    
    for (size_t i = 0; i < text.length(); i++) {
        // If character is a letter, add to current word
        if (isalpha(text[i])) {
            word += tolower(text[i]);  // Convert to lowercase
        } 
        // If space or punctuation, finish the word
        else if (!word.empty()) {
            wordFreq[word]++;  // Increment count
            word.clear();
        }
    }
    
    // Add the last word if text doesn't end with space/punctuation
    if (!word.empty()) {
        wordFreq[word]++;
    }
    
    std::cout << "\nWord frequencies:" << std::endl;
    for (const auto& pair : wordFreq) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    
    return 0;
}