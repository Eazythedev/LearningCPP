//
// main.cpp
// LearningC++
//
// Created by Ezaiah Akyeem/Erujine/Eazythedev on May 21, 2025 (5-21-25).
//
// Function that converts miles to kilometers


#include <iostream>
#include <string>
using namespace std;

float toKilometers(float miles) {
    return miles * 1.60934;
}

int main() {
     
    float mValue = 50;
     
    float result = toKilometers(mValue);
     
    cout << "Miles: " << mValue << "\n";
     
    cout << "Miles converted to kilometers: " << result << "\n";
     
    return 0;
}
