//
// main.cpp
// LearningC++
//
// Created by Ezaiah Akyeem/Erujine/Eazythedev on May 18, 2025 (5-18-25).
//
// Fighting game player character information function


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void playerFightrerCharacter(string name = "Mako", int level = 6, string element = "Fire", float DPS = 4.6) {
    cout << "Name: " << name << "\n" << "Level: " << level << "\n" << "Element: " << element << "\n" << "DPS: " << DPS << "\n" << "\n";
}

int main() {
    playerFightrerCharacter("Junji", 10, "Ice", 7.4);
    playerFightrerCharacter("Rika", 8, "Wind", 5.5);
    playerFightrerCharacter("Ryosuke", 12, "Earth", 8.9);
    playerFightrerCharacter("Mako", 6, "Fire", 4.6);
    playerFightrerCharacter();
}
