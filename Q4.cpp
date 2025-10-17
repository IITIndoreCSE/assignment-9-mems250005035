#include <iostream>
#include <string>
#include <limits>  // For numeric limits

using namespace std;

// Define the SalesRecord structure
struct SalesRecord {
    string month;
    float amount;
};

int main() {
    // Declare an array of 12 SalesRecord structures (representing a year)
    SalesRecord sales[12];

    // Accept user input for the month and amount for all 12 months
    cout << "Enter sales data for all 12 months:" << endl;
    for (int i = 0; i < 12; ++i) {
        cout << "Enter the name of month " << i + 1 << ": ";
        cin >> sales[i].month;
        cout << "Enter the sales amount for " << sales[i].month << ": ";
        cin >> sales[i].amount;
    }

    // Initialize variables to store the month with max and min sales
    string maxMonth, minMonth;
    float maxSales = numeric_limits<float>::min();  // Set to smallest possible float
    float minSales = numeric_limits<float>::max();  // Set to largest possible float

    // Find the month with the maximum and minimum sales using a single pass
    for (int i = 0; i < 12; ++i) {
        if (sales[i].amount > maxSales) {
            maxSales = sales[i].amount;
            maxMonth = sales[i].month;
        }
        if (sales[i].amount < minSales) {
            minSales = sales[i].amount;
            minMonth = sales[i].month;
        }
    }

    // Display the month with the maximum and minimum sales
    cout << "\nMonth with the highest sales: " << maxMonth << " (" << maxSales << ")\n";
    cout << "Month with the lowest sales: " << minMonth << " (" << minSales << ")\n";

    return 0;
}

