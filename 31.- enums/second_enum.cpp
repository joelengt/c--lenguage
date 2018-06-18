#include <iostream>

enum Example : unsigned char {
    A = 5, B, C
}

enum Example2 : char {
    A = 5, B, C
}


int main() {
    Example value = B;

    if(value == 1) {
        // Do something
        printf("yep!")
    }

    std::cin.get();
}
