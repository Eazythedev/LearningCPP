//
// iterator.cpp
// Iterator
//
// Created by Ezaiah Akyeem on January 25, 2026 (01-25-2026)
//
// A Vector and an Iterator

// Vector called 'cars' that will store strings

#inclue <iostream>
#include <string>
using namespace std;

int main() {
    vector<string> cars = { "Viper", "Corvette", "Camaro", "Mustang" };
    // Create a vector iterator called it (for iterator)
    vector<string>::iterator it;
    // Loop through the vector with the iterator
    for (it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << "\n";
    }

    vector<string> cars2 = { "Viper", "Corvette", "Camaro", "Mustang" };

    for (auto it = cars.begin(); it != cars.end(); ) {
        if (*it == "BMW") {
            it = cars.erase(it);
        }
        else {
            ++it;
        }
    }

    for (const string& car2 : cars2) {
        cout << car2 << "\n";
    }
}
