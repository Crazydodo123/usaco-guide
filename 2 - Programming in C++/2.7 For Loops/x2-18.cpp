#include <iostream>

using namespace std;

int main () {
    int repetitions = 0;
    cin >> repetitions;

    for (int i = repetitions - 1; i >= 0; i--) {
        cout << "This is repetition " << i << endl;
    }
}