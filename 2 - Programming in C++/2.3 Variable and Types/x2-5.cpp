#include <iostream>

using namespace std;

int main () {
    int a = 4;
    int b = 2;
    int c = 7;

    b = a + c;  // b = 11
    c = b - 2;  // c = 9
    a = a + a;  // a = 8
    b = b * 2;  // b = 22
    c = c - c;  // c = 0

    cout << a << ' ' << b << ' ' << c << endl;  // 8 22 0
}