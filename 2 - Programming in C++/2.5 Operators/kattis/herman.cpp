#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double r;

    cin >> r;

    cout << fixed << setprecision(6) << (r * r * 3.14159265359) << endl;
    cout << fixed << setprecision(6) << (r * r * 2.0) << endl;
}