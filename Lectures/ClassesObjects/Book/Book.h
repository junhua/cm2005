#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;
    
public:
    // Constructor
    Book(std::string t = "", std::string a = "", int y = 0);
    
    // Setters
    void setTitle(std::string t);
    void setAuthor(std::string a);
    void setYear(int y);
    
    // Getters
    std::string getTitle();
    std::string getAuthor();
    int getYear();
    
    // Display method
    void display();
};