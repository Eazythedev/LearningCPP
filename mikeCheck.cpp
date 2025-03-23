//
//  main.cpp
//  LearningC++
//
//  Created by Ezaiah Akyeem/Erujine/Eazythedev on March 22, 2025 (3/22/25).
//
// The Mike Check

// Mike Checker (mikeCheck.cpp)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter name: ";
    cin >> name;
    string result = (name == "Michael" || name == "Mike") ? "Jackson?\n" : "Welcome.\n";
    cout << result;
}
