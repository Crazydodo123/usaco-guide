#include <iostream>

using namespace std;

int main () {
    int check = 36;

    for (int divisor = 2; divisor * divisor <= check; ++divisor) {
        if (check % divisor == 0) {
            cout << check << " is not prime!" << endl;
            cout << "It equals " << divisor << " x " << (check / divisor) << endl;
            break;
        }
    }

    for (int divisor = 1; divisor <= check; ++divisor) {
        if (check % divisor == 0) {
            continue;
        }
        cout << divisor << " does not divide " << check << endl;
    }
}