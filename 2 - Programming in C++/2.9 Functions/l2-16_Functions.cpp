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
    int x, y;
    cin >> x >> y;
    cout << x << "^2 = " << square(x) << endl;
    cout << x << " + " << y << " = " << add(x, y) << endl;
    cout << "min(" << x << ", " << y << ") = " << min(x, y) << endl;
}