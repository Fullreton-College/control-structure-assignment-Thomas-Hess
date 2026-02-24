#include <iostream>
using namespace std;
int main( ){
    // define variables
    double lengthA;
    double widthA;
    double lengthB;
    double widthB;

    // have user input variables
    cout << "Enter the length and width of rectangle A respectively: ";
    cin >> lengthA >> widthA;
    cout << "Enter the length and width of rectangle B respectively: ";
    cin >> lengthB >> widthB;

    // calculate both areas
    double areaA = lengthA*widthA;
    double areaB = lengthB*widthB;

    // output text based on comparison of areas
    if(areaA > areaB){
        cout << "The 1st rectangle (rectangle A) has the greater area.\n";
    }
    else if(areaA < areaB){
        cout << "The 2nd rectangle (rectangle B) has the greater area.\n";
    }
    // if both are equal
    else{
        cout << "The areas are the same.\n";
    }

    // end program
    return 0;
}
