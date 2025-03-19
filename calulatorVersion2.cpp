//
//  main.cpp
//  calculatorVersion2
//
//  Created by Ezaiah Akyeem/Erujine/Eazythedev on March 18, 2025 (3/18/25).
//
//  The Calculator (With Validation)

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int num1;
    int num2;
    string op;
    int result;
    
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Choose an operation: \n" << "Addition(+)\n" << "Subtraction(-)\n" << "Multiplication(*)\n" << "Division(/)\n" << "Modulo(%)\n";
    cin >> op;
    cout << "Enter another number: ";
    cin >> num2;
    
    if (op == "+") {
        result = num1 + num2;
        cout << "Result is: " << result << ".\n";
    }
    
    if (op == "-") {
        result = num1 - num2;
        cout << "Result is: " << result << ".\n";
    }
    
    if (op == "*") {
        result = num1 * num2;
        cout << "Result is: " << result << ".\n";
    }
    
    if (op == "/") {
        result = num1 / num2;
        cout << "Result is: " << result << ".\n";
    }
    
    if (op == "%") {
        result = num1 % num2;
        cout << "Result is: " << result << ".\n";
    }
}
