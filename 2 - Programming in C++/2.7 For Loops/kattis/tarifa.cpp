#include <iostream>

using namespace std;

int main () {
    int x, n;
    int s = 0;

    cin >> x >> n;


    for (int i; i < n; i++) {
        int p;

        cin >> p;

        s += x - p;
    }

    cout << s + x << endl;
}