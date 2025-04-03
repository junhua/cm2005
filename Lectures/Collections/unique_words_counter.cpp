#include <iostream>
#include <set>
#include <string>

int main() {
    std::string text;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, text);

    std::set<std::string> uniqueWords;
    std::string word;
    
    for (size_t i = 0; i < text.length(); i++) {
        // If character is a letter, add to current word
        if (isalpha(text[i])) {
            word += tolower(text[i]);  // Convert to lowercase
        } 
        // If space or punctuation, finish the word
        else if (!word.empty()) {
            uniqueWords.insert(word);
            word.clear();
        }
    }
    
    // Add the last word if text doesn't end with space/punctuation
    if (!word.empty()) {
        uniqueWords.insert(word);
    }

    std::cout << "Number of unique words: " << uniqueWords.size() << std::endl;
    return 0;
}