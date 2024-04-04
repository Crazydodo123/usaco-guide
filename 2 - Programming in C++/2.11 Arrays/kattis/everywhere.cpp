#include <iostream>
#include <vector>

using namespace std;

int main () {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<string> seq(n);
        
        int sum = 0;
        for (int j = 0; j < n; j++) {
            string s;
            cin >> s;

            sum += 1;
            for (int k = 0; k < j; k++) {
                if (seq[k] == s) {
                    sum -= 1;
                    break;
                }
            }
            seq[j] = s;
        }
        cout << sum << endl;
    }
}