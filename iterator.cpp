//
// iterator.cpp
// Iterator
//
// Created by Ezaiah Akyeem on January 25, 2026 (01-25-2026)
//
// A Vector and an Iterator

// Vector called 'cars' that will store strings
    vector<string> cars = { "Viper", "Corvette", "Camaro", "Mustang" };
    //Create a vector iterator called it (for iterator)
    vector<string>::iterator it;
    // Loop through the vector with the iterator
    for (it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << "\n";
    }
