#include <iostream>

using namespace std;

int main () {
    int num = 9;
    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = 3 * num + 1;
        }
        cout << num << endl;
    }
}