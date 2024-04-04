#include <iostream>

using namespace std;

int main () {
    struct Point {
        double x;
        double y;

        Point(double theX, double theY) {
            x = theX;
            y = theY;
        }

        Point mirror() const {
            // y = -y;      The code refuses to compile.
            return Point(x, -y);
        }

        Point translate(double dx, double dy) {
            return Point(x + dx, y + dy);
        }
    };
    
    Point p(4, 2.1);
    Point q = p.translate(3, 4);

    cout << "The point is (" << q.x << ", " << q.y << ")." << endl;
}