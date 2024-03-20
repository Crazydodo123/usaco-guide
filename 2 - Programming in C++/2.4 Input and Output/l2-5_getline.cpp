#include <iostream>
#include <string>

using namespace std;

int main () {
    string line;
    cout << "Type some text, and press enter: " << endl;
    getline(cin, line);

    cout << "You typed: " << line << endl;
}