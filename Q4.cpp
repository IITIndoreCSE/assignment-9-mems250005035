#include <iostream>
#include <string>
#include <limits>  
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord sales[12];

    cout << "Enter sales data for all 12 months:" << endl;
    for (int i = 0; i < 12; ++i) {
        cout << "Enter the name of month " << i + 1 << ": ";
        cin >> sales[i].month;
        cout << "Enter the sales amount for " << sales[i].month << ": ";
        cin >> sales[i].amount;
    }

    string maxMonth, minMonth;
    float maxSales = numeric_limits<float>::min();  
    float minSales = numeric_limits<float>::max();  

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

    cout << "\nMonth with the highest sales: " << maxMonth << " (" << maxSales << ")\n";
    cout << "Month with the lowest sales: " << minMonth << " (" << minSales << ")\n";

    return 0;
}

