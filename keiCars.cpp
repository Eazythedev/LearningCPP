//
// keiCars.cpp
// Kei Cars
//
// Created by Ezaiah Akyeem / Eazythedev / Erujine on February 5, 2026
//
// A Vector that prints out kei car models in alphabetical order.


vector<string> keiCars = { "N-One", "N-Box", "Dayz", "Pixis Joy", "Wagon R" };

    sort(keiCars.begin(), keiCars.end());

    for (string keiCar : keiCars) {
        cout << keiCar << "\n";
    }
