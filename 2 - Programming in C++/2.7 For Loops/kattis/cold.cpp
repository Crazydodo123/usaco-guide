#include <iostream>

using namespace std;

int main () {
    int n;
    int s = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int t;

        cin >> t;

        if (t < 0) {
            s++;
        }
    }

    cout << s << endl;
}