//
// maxElement.cpp
// Maximum Element
//
// Created by Ezaiah Akyeem / Eazythedev / Erujine on February 7, 2026
//
// A vector that prints the largest number in the list.

vector<int> numbers6 = { 6, 7, 8, 9, 1, 2 };

    for (auto it = max_element(numbers6.begin(), numbers6.end()); it != numbers6.end(); ++it) {
        cout << "Largest number in the vector: " << *it << "\n";
    }
