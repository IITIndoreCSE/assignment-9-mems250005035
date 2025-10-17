#include <iostream>
using namespace std;

// Define the Point structure
struct Point {
    float x;
    float y;
};

int main() {
    // Declare an array of 7 Point structures
    Point points[7];

    // Read the x and y coordinates for all 7 points
    cout << "Enter the coordinates for 7 points:" << endl;
    for (int i = 0; i < 7; ++i) {
        cout << "Enter x coordinate for point " << i + 1 << ": ";
        cin >> points[i].x;
        cout << "Enter y coordinate for point " << i + 1 << ": ";
        cin >> points[i].y;
    }

    // Count how many points lie in the first quadrant
    int countFirstQuadrant = 0;
    for (int i = 0; i < 7; ++i) {
        if (points[i].x > 0 && points[i].y > 0) {
            ++countFirstQuadrant;
        }
    }

    // Display the result
    cout << "\nNumber of points in the first quadrant: " << countFirstQuadrant << endl;

    return 0;
}

