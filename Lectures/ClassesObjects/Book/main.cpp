#include "Book.h"
#include <iostream>

int main() {
    // Create a book object using constructor
    Book myBook("The C++ Programming Language", "Bjarne Stroustrup", 1985);
    myBook.display();
    
    // Create another book using setters
    Book anotherBook;
    anotherBook.setTitle("Effective C++");
    anotherBook.setAuthor("Scott Meyers");
    anotherBook.setYear(1991);
    
    std::cout << "\nAnother book information:" << std::endl;
    std::cout << "Title: " << anotherBook.getTitle() << std::endl;
    std::cout << "Author: " << anotherBook.getAuthor() << std::endl;
    std::cout << "Year: " << anotherBook.getYear() << std::endl;
    
    return 0;
}