#include <iostream>

using namespace std;

int main () {
    int a = 0;
    int b = 0;

    cin >> a >> b;

    cout << (a == b) << endl;   // check if a equals b
    cout << (a != b) << endl;   // check if a and b are different
    cout << (a > b) << endl;    // check if a is greater than b
    cout << (a < b) << endl;    // check if a is less than b
    cout << (a <= b) << endl;   // check if a is less than or equal to b
    cout << (a >= b) << endl;   // check if a is greater than or equal to b
}