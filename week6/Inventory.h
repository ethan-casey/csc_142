#include <iostream>
#include <string>
#include "Book.h"

class Inventory{

    private:
        Book* books;
        int nextEntry;
        int length;

    public:
    Inventory(int size) : length(size), nextEntry(0) {
        books = new Book[length];
    }
        ~Inventory(){
            delete[] books;
        };

        bool addBook(Book theBook){
            if (nextEntry >= length) {
                return false;
            }
            books[nextEntry] = theBook;
            nextEntry++;
            return true;
        }
        void changePrice(std::string isbn, double newPrice){
        for (int i = 0; i < nextEntry; i++) {
            if (books[i].getISBN() == isbn) { // Check if ISBN matches
                books[i].setPrice(newPrice); // Update the price
                break; // Exit the loop once the book is found
            }
        }
    };
        void printInventory();
};