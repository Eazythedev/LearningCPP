//
// carClassifierjp.cpp
// Car Classifier JP
//
// Created by Ezaiah Akyeem / Eazythedev / Erujine
// Date Created: February 27, 2026
// A program that takes user input to categorize a vehicle.

// Updated: March 1, 2026

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string make;
    string model;
    int modelYear;
    int engineSize;
};

int main() {
    // Create an object of 'Car'

    Car carObj1;

    cout << "Enter vehicle make: ";
    cin >> carObj1.make;

    cout << "Enter vehicle model: ";
    cin >> carObj1.model;

    cout << "Enter vehicle model year: ";
    cin >> carObj1.modelYear;

    cout << "Enter vehicle engine size: ";
    cin >> carObj1.engineSize;

    if (carObj1.modelYear < 1986) {
        cout << "This is a vintage car." << "\n";
    }
    else if (carObj1.modelYear > 1986 & carObj1.modelYear < 2006) {
        cout << "This is an older model car." << "\n";
    }
    else if (carObj1.modelYear > 2006 & carObj1.modelYear < 2020) {
        cout << "This is a modern car." << "\n";

    if (carObj1.engineSize <= 660) {
        cout << "This is a kei-car.";
    }
    else if (carObj1.engineSize > 660 & carObj1.engineSize < 1500) {
        cout << "This is a compact car.";
    } 
    else {
        cout << "This is a full-size vehicle.";
    }
