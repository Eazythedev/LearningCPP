//
//  main.cpp
//  LearningC++
//
//  Created by Ezaiah Akyeem/Erujine/Eazythedev on March 22, 2025 (3/22/25).
//
// The Seat Catergory Checker

// Seat Category Text Display
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    char seatCategory;
    
    cout << "Enter your seating category (A, B, C, D, or E): ";
    cin >> seatCategory;
    
    switch (seatCategory) {
        case 'A':
            cout << "Front area.\n";
            break;
        case 'B':
            cout << "Front-middle area.\n";
            break;
        case 'C':
            cout << "Middle area.\n";
            break;
        case 'D':
            cout << "Rear-middle area.\n";
            break;
        case 'E':
            cout << "Rear area.\n";
            break;
    }
    
    return 0;
}
