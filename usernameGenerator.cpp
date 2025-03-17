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
    int userBirthYear;
    string userName;

    cout << "Enter your first name: ";
    cin >> userFirstName;

    cout << "\nEnter your last name: ";
    cin >> userLastName;

    cout << "\nEnter your birth year: ";
    cin >> userBirthYear;

    userName = userFirstName[0, 1, 2] + userLastName[0,1,2] + userBirthYear;
    cout << "Your username is: " << userName << "\n";
}
