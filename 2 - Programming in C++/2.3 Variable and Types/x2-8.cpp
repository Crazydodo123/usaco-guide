#include <iostream>

using namespace std;

int main () {
    int minimum = -2147483648;
    int maximum = 2147483647;

    cout << minimum << endl;
    cout << maximum << endl;

    minimum = minimum - 1;
    maximum = maximum + 1;

    cout << minimum << endl;
    cout << maximum << endl;
}