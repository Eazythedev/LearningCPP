//
// main.cpp
// LearningC++
//
// Created by Ezaiah Akyeem/Erujine/Eazythedev on May 23, 2025 (5-23-25).
//
// Tells user their level before and after level-up using global variable (scope)

#include <iostream>
using namespace std;

int x = 40;

void xpLevelUp() {
    cout << "Level before level-up: " << x++ << "\n";
}

int main() {
    xpLevelUp();
    
    cout << "Level after level-up: " << x << "\n";
    return 0;
}
