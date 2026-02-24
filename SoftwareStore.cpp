#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // define variables
    int units;
    double discount;

    // ask user for number of units
    cout << "Software package selling for $199! How many units do you want: ";
    cin >> units;

    // calculate discount
    if (units >= 10 && units <= 19) {
        discount = 20;
    }
    else if (units >= 20 && units <= 49) {
        discount = 30;
    }
    else if (units >= 50 && units <= 99) {
        discount = 40;
    }
    else if (units >= 100) {
        discount = 50;
    }
    else {
        discount = 0;
    }

    double totalPrice = 199 * units * (1 - (discount / 100));

    // output all relevant info
    cout << "You are eligible for a " << discount << " percent discount.\n";
    // have price rounded to cents
    cout << fixed << setprecision(2);
    cout << "Your total price for the " << units << " units comes to $"
         << totalPrice << ".\n";

    // end program
    return 0;
}
