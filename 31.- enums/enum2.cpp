#include <iostream>
using namespace std;

// An enum variable takes only one value out of many possible values. Example to demonstrate it,
enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32};

int main() {

    seasons s;

    s = summer;
    cout << "Summer = " << s << endl;

    return 0;
}