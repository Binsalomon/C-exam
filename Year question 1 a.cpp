#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool is_leap_year(unsigned int Y) {
    if (Y % 100 == 0) {
        return Y % 400 == 0;
    } else {
        return Y % 4 == 0;
    }
}
int main() {
    unsigned int year;

    // Loop to allow user to enter multiple years and calculate the series
    char choice;
    do {
        cout << "Enter a year: ";
        cout<<"\n";
        cin >> year;

        // Leap year check
        if (is_leap_year(year)) {
        	cout<<"\n";
            cout << year << " is a leap year!!!" << endl;
        } else {
        	cout<<"\n";
            cout << year << " is not a leap year!!!" << endl;
        }
        // Ask if the user wants to check another year
        cout << "Do you want to check another year? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

