#include <iostream>

using namespace std;

int main () {
    int five = 5;
    cout << five << endl;
    int seven = 7;
    cout << seven << endl;

    five = seven + 2; // = 7 + 2 = 9
    cout << five << endl;

    seven = 0;
    cout << five << endl; // five is still 9
    cout << 5 << endl;
}