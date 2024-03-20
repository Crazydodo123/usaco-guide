#include <iostream>

using namespace std;

int main () {
    double minimum = -1.7976E308;
    double maximum = 1.7976E308;

    cout << minimum << endl;
    cout << maximum << endl;

    minimum = minimum - 1E304;
    maximum = maximum + 1E304;

    cout << minimum << endl;
    cout << maximum << endl;
}