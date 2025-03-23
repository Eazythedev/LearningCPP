//
//  main.cpp
//  LearningC++
//
//  Created by Ezaiah Akyeem on March 22, 2025 (3/22/25).
//
// Choose Your Difficulty

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum Difficulty {EASY = 1, NORMAL, HEROIC, LEGENDARY};

int main() {
    int choice;
    
    cout << "Choose a difficulty level (1 = EASY, 2 = NORMAL, 3 = HEROIC, 4 = LEGENDARY: ";
    cin >> choice;
    
    Difficulty level = static_cast<Difficulty>(choice);
    
    switch (level) {
        case EASY:
            cout << "Fight your battles with little opposition.\n";
            break;
        case NORMAL:
            cout << "Traverse the battlefield with reasonable resistance.\n";
            break;
        case HEROIC:
            cout << "Your enemies fight with strategy and effort, testing your abilities.\n";
            break;
        case LEGENDARY:
            cout << "Strain and struggle to fight your enemies as they battle with great effort.\n";
            break;
        default:
            cout << "That is not a difficulty choice.\n";
            break;
    }
    return 0;
}
