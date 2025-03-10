#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
    int num;
    cout << "Enter a number to be divided by 2: ";
    cin >> num;
    cout << "\n";
    
    num %= 2;
    cout << "Remainder: " << num << "\n";
}
