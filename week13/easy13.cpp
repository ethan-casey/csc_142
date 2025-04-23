#include <iostream>

int main() {
    int i = 10;
    std::cout << "Countdown\n";

    for (; i >= 1; --i) {
        std::cout << i << "\n";
    }
    std::cout << "Liftoff\n";

    return 0;
}