#include <iostream>

using namespace std;

int main () {
    int input;
    cin >> input;
    if (input % 15 == 0) {
        cout << "FizzBuzz" << endl;
    } else if (input % 5 == 0) {
        cout << "Buzz" << endl;
    } else if (input % 3 == 0) {
        cout << "Fizz" << endl;
    } else {
        cout << input << endl;
    }
}