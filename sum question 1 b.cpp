#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;

    
    for (int numerator = 1, denominator = 3; numerator <= 95; numerator += 2, denominator += 2) {
        sum += static_cast<double>(numerator) / denominator; 
    }

    // Output the result
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}

