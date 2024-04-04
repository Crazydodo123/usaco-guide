#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n;
    cin >> n;
    vector<string> seq(n);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        seq[i] = s;
    }

    bool increasing = true;
    bool decreasing = true;

    for (int i = 0; i < n-1; i++) {
        if (seq[i] > seq[i+1]) {
            increasing = false;
        } else if (seq[i] < seq[i+1]) {
            decreasing = false;
        }
    }

    if (increasing) {
        cout << "INCREASING" << endl;
    } else if (decreasing) {
        cout << "DECREASING" << endl;
    } else {
        cout << "NEITHER" << endl;
    }
}