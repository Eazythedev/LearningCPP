//
// main.cpp
// LearningC++
//
// Created by Ezaiah Akyeem/Erujine/Eazythedev on March 15, 2025 (3/15/25)
//
// The ATM App
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
    int balance;
    balance = 1000;
    int userChoice;
    int depositAmount;
    int withdrawAmount;
    
    cout << "Welcome to the ATM!" << "\n";
    cout << "Your current balance is " << "$" << balance << "\n";
    
    cout << "Choose an option: " << "\n";
    cout << "1. Desposit Money" << "\n";
    cout << "2. Withdraw Money " << "\n";
    cout << "3. Check Balance " << "\n";
    cout << "4. Exit " << "\n";
    cout << "Enter your choice: ";
    cin >> userChoice;
    
    
    if (userChoice == 1) {
        cout << "Enter the amount to deposit: " << "$";
        cin >> depositAmount;
        balance += depositAmount;
        cout << "\n" "Choose an option: " << "\n";
        cout << "1. Desposit Money" << "\n";
        cout << "2. Withdraw Money " << "\n";
        cout << "3. Check Balance " << "\n";
        cout << "4. Exit " << "\n";
        cout << "Enter your choice: ";
        cin >> userChoice;
    }
    
    if (userChoice == 2) {
        cout << "Enter the amount to withdraw: " << "$";
        cin >> withdrawAmount;
        balance -= withdrawAmount;
        cout << "\n" << "Choose an option: " << "\n";
        cout << "1. Desposit Money" << "\n";
        cout << "2. Withdraw Money " << "\n";
        cout << "3. Check Balance " << "\n";
        cout << "4. Exit " << "\n";
        cout << "Enter your choice: ";
        cin >> userChoice;
    }
    
    if (userChoice == 3) {
        cout << "Current Balance: " << "$" << balance << "\n\n";
        cout << "Choose an option: " << "\n";
        cout << "1. Desposit Money" << "\n";
        cout << "2. Withdraw Money " << "\n";
        cout << "3. Check Balance " << "\n";
        cout << "4. Exit " << "\n";
        cout << "Enter your choice: ";
        cin >> userChoice;
    }
    
    if (userChoice == 4) {
        return 0;
    }
    
    if (userChoice > 4) {
        cout << "Invalid input." << "\n";
        cout << "CHOOSE AN OPTION FROM THESE: " << "\n";
        cout << "1. Desposit Money" << "\n";
        cout << "2. Withdraw Money " << "\n";
        cout << "3. Check Balance " << "\n";
        cout << "4. Exit " << "\n";
        cout << "Enter your choice: ";
        cin >> userChoice;
    }
    
}
