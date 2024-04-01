#include <iostream>

using namespace std;

// Note &val instead of val
void change(int &val) {
    val = 0;
}

int main () {
    int variable = 100;
    cout << "Variable is " << variable << endl;
    change(variable);
    cout << "Variable is " << variable << endl;
}