//
// main.cpp
// Number Guessing Game
//
// Created by Ezaiah Akyeem/Erujine/Eazythedev on March 21, 2025 (3/21/25) | Updated on 3/21/25
//
// The Number Guessing Game

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int userGuess;
    const int maxTries = 5;
    int attempts = 0;
    
    while (attempts < maxTries) {
        cout << "Enter a number (Attempt " << (attempts + 1) << " out of " << maxTries << " attempts): ";
        cin >> userGuess;
        attempts++;
        
        if (userGuess == 86) {
            cout << "Correct! You guessed that the number was " << userGuess << " in " << attempts << " tries!\n";
            break;
        }
        
        if (userGuess > 86) {
            cout << "\nToo high! Try again.\n";
            continue;
        }
        
        if (userGuess < 86) {
            cout << "\nToo low! Try again.\n";
            continue;
        }
        return 0;
    }
}
