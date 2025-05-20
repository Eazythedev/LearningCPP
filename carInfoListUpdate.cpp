//
// main.cpp
// LearningC++
//
// Created by Ezaiah Akyeem/Erujine/Eazythedev on May 19, 2025 (5-19-25).
//
// Car Info List Update Function

#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;
    int modelYear;
};
    
void carInfoUpdateList(Car &c) {
    c.modelYear++;
}

int main() {
    Car carOne = {"Chevrolet", 1996};
    carInfoUpdateList(carOne);
    
    cout << "The " << carOne.brand << " is now a " << carOne.modelYear << " model year." << "\n";
    return 0;
}
