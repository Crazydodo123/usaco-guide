#include <iostream>

using namespace std;

int main () {
    int seq[9];
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        int d;
        cin >> d;

        sum += d;
        seq[i] = d;
    }

    int ans[2];

    for (int i = 0; i < 9; i++) {
        for (int j = i+1; j < 9; j++) {
            if (sum - seq[i] - seq[j] == 100) {
                ans[0] = i;
                ans[1] = j;
                break;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        if (i != ans[0] && i != ans[1]) {
            cout << seq[i] << endl;
        }
    }
}