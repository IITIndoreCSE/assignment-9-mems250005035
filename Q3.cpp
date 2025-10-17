#include <iostream>
using namespace std;

struct Point {
    float x;
    float y;
};

int main() {
    Point points[7];

    cout << "Enter the coordinates for 7 points:" << endl;
    for (int i = 0; i < 7; ++i) {
        cout << "Enter x coordinate for point " << i + 1 << ": ";
        cin >> points[i].x;
        cout << "Enter y coordinate for point " << i + 1 << ": ";
        cin >> points[i].y;
    }

    int countFirstQuadrant = 0;
    for (int i = 0; i < 7; ++i) {
        if (points[i].x > 0 && points[i].y > 0) {
            ++countFirstQuadrant;
        }
    }

    cout << "\nNumber of points in the first quadrant: " << countFirstQuadrant << endl;

    return 0;
}

