#include <iostream>

struct Element {
    Element* next{};     // Pointer to the next element
    Element* previous{}; // Pointer to the previous element

    void insert_after(Element* new_element) {
        new_element->next = next;
        new_element->previous = this;
        if (next) {
            next->previous = new_element;
        }
        next = new_element;
    }

    void insert_before(Element* new_element) {
        new_element->previous = previous;
        new_element->next = this;
        if (previous) {
            previous->next = new_element;
        }
        previous = new_element;
    }

    char prefix[2];
    short operating_number;
};

int main() {
    // Create a few elements
    Element element1 = {};
    element1.prefix[0] = 'A';
    element1.prefix[1] = '1';
    element1.operating_number = 100;

    Element element2 = {};
    element2.prefix[0] = 'B';
    element2.prefix[1] = '2';
    element2.operating_number = 200;

    Element element3 = {};
    element3.prefix[0] = 'C';
    element3.prefix[1] = '3';
    element3.operating_number = 300;

    // Build the doubly linked list
    element1.insert_after(&element2);
    element2.insert_after(&element3);

    // Traverse from front to back
    std::cout << "Forward traversal:" << std::endl;
    for (Element* current = &element1; current != nullptr; current = current->next) {
        std::cout << current->operating_number << std::endl;
    }

    // Traverse from back to front
    std::cout << "Backward traversal:" << std::endl;
    for (Element* current = &element3; current != nullptr; current = current->previous) {
        std::cout << current->operating_number << std::endl;
    }

    return 0;
}