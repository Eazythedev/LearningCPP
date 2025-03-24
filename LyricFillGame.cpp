//
// LyricFillGame.cpp
// LyricFillGame
//
// Created by Ezaiah Akyeem on March 23, 2025 (3/23/25)
//
// The Lyric Fill Game

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string response;

    cout << "Enter the second part of the lyric: ";
    cout << "Don\'t stop, believin'\n";
    cin >> response;

    if (response == "Hang on to that feeling") {
        cout << "That's right!";
    }
    else {
        cout << "Not quite!";
    }
    return 0;
}
