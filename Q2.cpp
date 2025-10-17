#include <iostream>
using namespace std;

// Define the Color structure
struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    // Declare and initialize an array of 5 Color structures
    Color colors[5] = {
        {255, 0, 0},     // Red
        {0, 255, 0},     // Green
        {0, 0, 255},     // Blue
        {255, 255, 0},   // Yellow
        {0, 255, 255}    // Cyan
    };

    // Invert the color values of the first 3 elements
    for (int i = 0; i < 3; ++i) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    // Display the new RGB values for all 5 elements
    cout << "Inverted colors:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Color " << i + 1 << " - RGB: ("
             << colors[i].red << ", "
             << colors[i].green << ", "
             << colors[i].blue << ")" << endl;
    }

    return 0;
}

