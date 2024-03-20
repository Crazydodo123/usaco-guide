#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    double r;

    cin >> r;

    cout << setprecision(10) << (r * r * M_PI) << endl;
    cout << (r * r * 2.0);
}