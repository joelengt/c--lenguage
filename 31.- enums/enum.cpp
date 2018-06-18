#include <iostream>

using namespace std;

enum Example {
    A = 5, B, C
};

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    Example value = B;

    if(value == 1) {
        // Do something
        printf("yep!");
    }

    week today;
    today = Wednesday;
    cout << "Day " << today+1;

    std::cin.get();
    // return 0;
}
