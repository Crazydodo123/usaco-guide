#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265359;

int main () {
    int r;
    int c;

    cin >> r >> c;

    double pizza_area = r * r * PI;
    double cheese_area = (r - c) * (r - c) * PI;

    cout << fixed << setprecision(6) << (cheese_area / pizza_area) * 100 << endl;
}