//
//  main.cpp
//  LearningC++
//
//  Created by Ezaiah Akyeem/Erujine/Eazythedev on 11/1/23. (This code was written in this project file on March 22, 2025 (3/22/25))
//
// The Player Level Text Display

// Player Level Text Display (playerLevel.cpp)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string playerLevel;
    
    cout << "Enter your level (Novice, Swordsman, or Samurai: ";
    cin >> playerLevel;
    
    if (playerLevel == "Novice") {
        cout << "You will reach Swordsman at level 20.\n";
    } else if (playerLevel == "Swordsman") {
        cout << "You will reach Samurai at level 50.\n";
    } else if (playerLevel == "Samurai") {
        cout << "You are a Samurai the highest rank and your level is already over 50.";
    } else {
        cout << "This is not a rank.";
    }
    return 0;
}
