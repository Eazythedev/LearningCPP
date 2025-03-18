//
// usernameGenerator.cpp
// UsernameGenerator
// 
// Created by Ezaiah Akyeem/Erujine/Eazythedev on March 16, 2025 (3/16/25)
//
// The Username Generator

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userFirstName;
    string userLastName;
    string userBirthYear;
    // string userName;

    cout << "Enter your first name: ";
    cin >> userFirstName;

    cout << "\nEnter your last name: ";
    cin >> userLastName;

    cout << "\nEnter your birth year: ";
    cin >> userBirthYear;

    // userName = userFirstName + userLastName + userBirthYear;
    cout << "Your username is: ";
    cout << userFirstName.at(0);
    cout << userFirstName.at(1);
    cout << userFirstName.at(2);

    cout << userLastName.at(0);
    cout << userLastName.at(1);
    cout << userLastName.at(2);

    cout << userBirthYear.at(2);
    cout << userBirthYear.at(3) << ".";
    // cout << "Your username is: " << userName << "\n";
}
