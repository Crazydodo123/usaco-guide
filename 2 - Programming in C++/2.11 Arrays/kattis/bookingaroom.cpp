#include <iostream>
#include <vector>

using namespace std;

int main () {
    int r, n;
    
    cin >> r >> n;

    vector<bool> seq(r);

    for (int i = 1; i <= n; i++) {
        int r_i;
        cin >> r_i;

        seq[r_i] = true;
    }

    bool booked = false;
    for (int i = 1; i <= r; i++) {
        if (seq[i] == false) {
            booked = true;
            cout << i << endl;
            break;
        }
    }

    if (!booked) {
        cout << "too late" << endl;
    }
}