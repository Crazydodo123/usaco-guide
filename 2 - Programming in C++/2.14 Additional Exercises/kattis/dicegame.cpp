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
    int ga1, gb1, ga2, gb2;
    int ea1, eb1, ea2, eb2;

    cin >> ga1 >> gb1 >> ga2 >> gb2;
    cin >> ea1 >> eb1 >> ea2 >> eb2;

    int sum_g = ga1 + gb1 + ga2 + gb2;
    int sum_e = ea1 + eb1 + ea2 + eb2;

    if (sum_g > sum_e) {
        cout << "Gunnar" << endl;
    } else if (sum_e > sum_g) {
        cout << "Emma" << endl;
    } else {
        cout << "Tie" << endl;
    }
}