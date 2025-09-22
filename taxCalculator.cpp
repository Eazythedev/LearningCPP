//
// Main.cpp
// Learningcpp
//
// Created by Ezaiah Akyeem/Eazythedev 
// September 21, 2025
// Tax Calculator Using a Return Value

#include <iostream>
using namespace std;

int taxCalculator(double tc) {
    return tc * 1.08;
}

int main() {
    int c;

    cout << "Enter the cost: ";

    cin >> c;

    cout << "The cost with tax included: " << taxCalculator(c);

    return 0;
}
