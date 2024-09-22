#include <iostream>

// Function to calculate weight
double calculateWeight(double mass) {
    const double gravity = 9.8; // acceleration due to gravity in m/s^2
    return mass * gravity;
}

int main() {
    double mass;

    std::cout << "Enter the mass of the object (in kg): ";
    std::cin >> mass;

    double weight = calculateWeight(mass);
    std::cout << "The weight of the object is: " << weight << " N" << std::endl;

    return 0;
}

