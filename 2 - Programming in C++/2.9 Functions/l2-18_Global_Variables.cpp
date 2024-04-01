#include <iostream>

using namespace std;

int currentMoney = 0;

void deposit(int newMoney) {
    currentMoney += newMoney;
}

void withdraw(int withdrawal) {
    currentMoney -= withdrawal;
}

int main () {
    cout << "Currently, you have " << currentMoney << " money " << endl;
    deposit(1000);
    withdraw(2000);
    cout << "Uh-oh! Your current balance is " << currentMoney << " :(" << endl;
}