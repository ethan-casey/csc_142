#pragma once
#include <string>
#include <iostream>
#include "BookRedo.h"

class InventoryRe{
    private:
        BookRe* books;
        int nextEntry;
        int length;

    public:
        InventoryRe(int size) : length(size), nextEntry(0){
            books = new BookRe[length];
        };
        ~InventoryRe(){
            delete[]  books;
        };
        bool addBook(BookRe theBook){
            if (nextEntry >= length){
                return false;
            }
            books[nextEntry] = theBook;
            nextEntry++;
            return true;
        };
        void changePrice(std::string isbn, double newPrice){
            for (int i = 0; i < nextEntry; i++) {
                if (books[i].getISBN() == isbn) {
                    books[i].changePrice(newPrice);
                    break;
                }
            }
        };
        void printInventory(){
            for (int i = 0; i < nextEntry; i++) {
                std::cout << books[i].getISBN() << " "
                          << books[i].getAuthor() << " "
                          << books[i].getTitle() << " "
                          << books[i].getEdition() << " "
                          << books[i].getPubCode() << " "
                          << books[i].getPrice() << std::endl;
            };
        };
};