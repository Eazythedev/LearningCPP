// 
// NumberGuessingGame.cpp
// NumberGuessingGame
// 
// Created by Ezaiah Akyeem/Erujine/Eazythedev on March 20, 2025 (3/20/25)
//
// The Number Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int guess;
    int randomNum = rand() % 101;
    cout << "Guess the number between 1 and 100: ";
    cin >> guess;

    while (guess != 64) {
        continue;
    }

    if (guess > 64) {
        cout << "Too high. Try again.";
    }

    if (guess < 64) {
        cout << "Too low. Try again.";
    }

    if (guess == 64) {
        cout << "Correct";
    }
    return 0;
}
