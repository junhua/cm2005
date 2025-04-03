#include "Book.h"
#include <iostream>

// Constructor implementation
Book::Book(std::string t, std::string a, int y) {
    title = t;
    author = a;
    year = y;
}

// Setter implementations
void Book::setTitle(std::string t) { 
    title = t; 
}

void Book::setAuthor(std::string a) { 
    author = a; 
}

void Book::setYear(int y) { 
    year = y; 
}

// Getter implementations
std::string Book::getTitle() { 
    return title; 
}

std::string Book::getAuthor() { 
    return author; 
}

int Book::getYear() { 
    return year; 
}

// Display method implementation
void Book::display() {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Year: " << year << std::endl;
}