#include <iostream>

using namespace std;

int main () {
    string s;

    cin >> s;

    int n = s.size();

    int l = 1;
    int m = 0;
    int r = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            int temp = l;
            l = m;
            m = temp;
        } else if (s[i] == 'B') {
            int temp = m;
            m = r;
            r = temp;
        } else if (s[i] == 'C') {
            int temp = l;
            l = r;
            r = temp;
        }
    }

    if (l == 1) {
        cout << 1 << endl;
    } else if (m == 1) {
        cout << 2 << endl;
    } else if (r == 1) {
        cout << 3 << endl;
    }
}