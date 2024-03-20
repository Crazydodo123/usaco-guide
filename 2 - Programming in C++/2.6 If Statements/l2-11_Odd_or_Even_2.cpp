#include <iostream>

using namespace std;

int main () {
    int input;
    cin >> input;
    if (input % 2 == 0) {
        cout << input << " is even!" << endl;
    } else {
        cout << input << " is odd!" << endl;
    }
}