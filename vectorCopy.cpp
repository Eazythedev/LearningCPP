//
// vectorCopy.cpp
// Vector Copy
//
// Created by Ezaiah Akyeem / Eazythedev / Erujine on February 8, 2026
//
// A vector that is copied to another vector and printed.


// This doesn't output anything
vector<int> numbers7 = { 1, 7, 3, 5, 9, 3 };

    vector<int> copiedNumbers(6);

    for (auto it = copy(numbers7.begin(), numbers7.end(), copiedNumbers.begin()); it != copiedNumbers.end(); ++it) {
        cout << "Copied Numbers: " << *it << "\n";
    }
