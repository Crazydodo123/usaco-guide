#include <iostream>
#include <vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main () {
    int n, p, q;
    cin >> n >> p >> q;

    int games = p + q;
    int turns_changed = games / n;

    if (turns_changed % 2 == 0) {
        cout << "paul" << endl;
    } else {
        cout << "opponent" << endl;
    }
}