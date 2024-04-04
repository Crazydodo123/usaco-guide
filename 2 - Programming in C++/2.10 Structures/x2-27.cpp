#include <iostream>

using namespace std;

int main () {
    struct Quotient {
        int nominator;
        int denominator;

        // Construct a new Quotient with the given 
        // numerator and denominator
        Quotient(int n, int d) {
            nominator = n;
            denominator = d;
        }

        // Return a new Quotient, this instance plus
        // the "other" instance
        Quotient add(const Quotient &other) const {
            int n = nominator * other.denominator + denominator * other.nominator;
            int d = denominator * other.denominator;

            return Quotient(n, d);
        }

        // Returns a new Quotient, this instance times
        // the "other" instance
        Quotient multiply(const Quotient &other) const {
            int n = nominator * other.nominator;
            int d = denominator * other.denominator;

            return Quotient(n, d);
        }

        void print() const {
            cout << nominator << '/' << denominator << endl;
        }
    };
    // Quotient q(3, 4);
    // Quotient p(2, 5);

    // q.print();
    // q.add(p).print();
    // q.multiply(p).print();
}