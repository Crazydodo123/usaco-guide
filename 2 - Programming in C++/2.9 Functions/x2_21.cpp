#include <iostream>

using namespace std;

int square(int x) {
    return x * x;
}

int min(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int add(int x, int y) {
    return x + y;
}

int main () {
    cout << square(5) << endl;                              // 25
    cout << add(square(3), 10) << endl;                     // 19
    cout << min(square(10), add(square(9), 23)) << endl;    // 100
}

