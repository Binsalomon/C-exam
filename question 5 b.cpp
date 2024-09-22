#include <iostream>
using namespace std;

int main() {
	int salomon;

    cout << "Your Name" << endl; 
    cin>> salomon;

    cout << "Multiples of 3 from 1 to 20:" << endl;
    for (int i = 1; i <= 20; ++i) {
        if (i % 3 == 0) {
            cout << i << endl;  // Print the multiple of 3
        }
    }

    return 0;
}

