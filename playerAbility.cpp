//
// PlayerAbility.cpp
// PlayerAbility
//
// Created by Ezaiah Akyeem/Erujine/Eazythedev on March 19, 2025 (3/19/25)
//
// The Player Ability Choosing System

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ability;

    cout << "Enter a number to use an ability: \n" << "1 - Shadow blaze\n" << "2 - Air rush\n" << "3 - Ground zone\n" << "4 - Ice dash\n";
    cin >> ability;

    switch (ability) {
    case 1:
        cout << "Shadow blaze activated!";
        break;
    case 2:
        cout << "Air rush activated!";
        break;
    case 3:
        cout << "Ground zone activated!";
        break;
    case 4:
        cout << "Ice dash activated!";
        break;
    default:
        cout << "Enter a number from 1-4: ";
        cin >> ability;
    }
}
