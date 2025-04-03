#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;
    
public:
    // Constructor
    Book(string t = "", string a = "", int y = 0) {
        title = t;
        author = a;
        year = y;
    }
    
    // Setters
    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }
    void setYear(int y) { year = y; }
    
    // Getters
    string getTitle() { return title; }
    string getAuthor() { return author; }
    int getYear() { return year; }
    
    // Display method
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create a book object using constructor
    Book myBook("The C++ Programming Language", "Bjarne Stroustrup", 1985);
    myBook.display();
    
    // Create another book using setters
    Book anotherBook;
    anotherBook.setTitle("Effective C++");
    anotherBook.setAuthor("Scott Meyers");
    anotherBook.setYear(1991);
    
    cout << "\nAnother book information:" << endl;
    cout << "Title: " << anotherBook.getTitle() << endl;
    cout << "Author: " << anotherBook.getAuthor() << endl;
    cout << "Year: " << anotherBook.getYear() << endl;
    
    return 0;
}