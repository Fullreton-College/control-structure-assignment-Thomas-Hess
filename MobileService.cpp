#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // define constants
    const double planA_Cost = 39.99;
    const double planB_Cost = 59.99;
    const double planC_Cost = 79.99;
    const double planA_GB = 2.0;
    const double planB_GB = 8.0;
    const double extraGB_Cost = 8.00;

    // define variables
    string customerName;
    char plan;
    double gigabytesUsed;
    double totalBill = 0.0;

    // input
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter plan purchased (A, B, or C): ";
    cin >> plan;

    cout << "Enter gigabytes used: ";
    cin >> gigabytesUsed;

    // calculate bill using switch
    switch (plan) {
        case 'A':
        case 'a':
            totalBill = planA_Cost;
            if (gigabytesUsed > planA_GB) {
                totalBill += (gigabytesUsed - planA_GB) * extraGB_Cost;
            }
            break;

        case 'B':
        case 'b':
            totalBill = planB_Cost;
            if (gigabytesUsed > planB_GB) {
                totalBill += (gigabytesUsed - planB_GB) * extraGB_Cost;
            }
            break;

        case 'C':
        case 'c':
            totalBill = planC_Cost;
            break;

        default:
            cout << "Invalid plan selection.\n";
    }

    // output bill
    cout << fixed << setprecision(2);
    cout << "\n----- Monthly Bill -----\n"
         << "Customer Name: " << customerName << endl
         << "Plan: " << plan << endl
         << "Gigabytes Used: " << gigabytesUsed << endl
         << "Total Amount Due: $" << totalBill << endl;

    // savings calculations
    double planBTotal = planB_Cost;
    if (gigabytesUsed > planB_GB) {
        planBTotal += (gigabytesUsed - planB_GB) * extraGB_Cost;
    }

    double planCTotal = planC_Cost;

    // display savings to user
    switch (plan) {
        case 'A':
        case 'a':
            if (planBTotal < totalBill) {
                cout << "You could save $" << (totalBill - planBTotal)
                     << " by switching to Plan B.\n";
            }
            if (planCTotal < totalBill) {
                cout << "You could save $" << (totalBill - planCTotal)
                     << " by switching to Plan C.\n";
            }
            break;

        case 'B':
        case 'b':
            if (planCTotal < totalBill) {
                cout << "You could save $" << (totalBill - planCTotal)
                     << " by switching to Plan C.\n";
            }
            break;
    }

    return 0;
}
