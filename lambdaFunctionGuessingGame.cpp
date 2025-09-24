//
// Main.cpp
// Learningcpp
//
// Created by Ezaiah Akyeem/Eazythedev 
// September 22, 2025
// Labmda Function Guessing Game

#include <iostream>
#include <string>
using namespace std;

int main() {
   
    auto correct = []() {
        cout << "Correct!" << "\n";
    };

    int num = 5;
    int guess;

    cout << "Guess a number between 1 and 10: ";
    cin >> guess;

    if (guess == num) {
        correct();
    } else {
        cout << "Incorrect." << "\n";
    }

    if (guess < 1 || guess > 10) {
        cout << "Invalid: Number must be between 1 and 10" << "\n";
    }

    return 0;
}
