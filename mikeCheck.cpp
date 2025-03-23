//
//  mikeCheck.cpp
//  MikeCheck
//
//  Created by Ezaiah Akyeem on March 22, 2025.
//
// The Mike Check

// Mike Checker (mikeCheck.cpp)
#include <iostream>
#include <string>

int main() {
    string name;
    cout << "Enter name: ";
    cin >> name;
    string result = (name == "Michael" || name == "Mike") ? "Jackson?\n" : "Welcome.\n";
    cout << result;
}
