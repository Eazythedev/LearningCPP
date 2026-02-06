//
// playCharHashFunc.cpp
// Playable Characters Hash Function
//
// Created by Ezaiah Akyeem / Eazythedev / Erujine on February 5, 2026
//
// A hash function that prints a playable character's power level.

// Declare an unordered_map with string keys and int values
    unordered_map<string, int> playCharList; // Playable characters list

    // Insert key value pairs
    playCharList["Sekiro"] = 6400;
    playCharList["Melina"] = 3200;
    playCharList.insert({ "Ando", 10000 });

    // Access a value using its key
    cout << "Sekiro's power level: " << playCharList["Sekiro"] << "\n";

    // Check if a key exists
    if (playCharList.count("Melina")) {
        cout << "Melina's power level: " << playCharList["Melina"] << endl;
