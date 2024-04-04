#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main () {
    int n;
    cin >> n;

    string b = "";

    while (n != 1) {
        int r = n % 2;
        b += to_string(r);
        n /= 2;
    }
    b += '1';

    int reversed = 0;
    rep(i, 0, b.size()) {
        if (b[i] == '1') {
            reversed += pow(2, (b.size() - i - 1));
        }
    }

    cout << reversed << endl;
}