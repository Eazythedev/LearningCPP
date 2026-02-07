//
// minElement.cpp
// Minimum Element
//
// Created by Ezaiah Akyeem / Eazythedev / Erujine on February 6, 2026
//
// A vector that prints the smallest number in the list.

vector<int> numbers5 = { 6, 7, 8, 9, 1, 2 };
    // Find the smallest number
    for (auto it = min_element(numbers5.begin(), numbers5.end()); it != numbers5.end(); ++it) {
        cout << "Smallest number in the vector: " << *it << "\n";
    }
