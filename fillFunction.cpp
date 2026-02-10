//
// fillFunction.cpp
// Fill Function
//
// Created by Ezaiah Akyeem / Eazythedev / Erujine
// February 9, 2026
// A fill function

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// fill() function
    vector<int> numbers8 = { 1, 7, 3, 5, 9, 3 };
    vector<int> numbers8(6);

    fill(numbers8.begin(), numbers8.end(), 35);
