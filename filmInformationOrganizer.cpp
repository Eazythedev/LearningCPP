//
// Main.cpp
// Learningcpp
//
// Created by Ezaiah Akyeem/Eazythedev 
// September 23, 2025
// Film Information Organizer Using Classes

#include <iostream>
#include <string>
#include <functional>
using namespace std;

class Film {
    public:
        string title;
        int year;
        string director;
        string releaseDate;
        string runtime;
        string genre;
        string rating;
};

int main() {
    
    Film film1;
    film1.title = "Guardians of the Galaxy";
    film1.year = 2014;
    film1.director = "James Gunn";
    film1.releaseDate = "August 1, 2014";
    film1.runtime = "2h 2m";
    film1.genre = "Action/Sci-Fi";
    film1.rating = "PG-13";

    Film film2;
    film2.title = "Black Panther";
    film2.year = 2018;
    film2.director = "Ryan Coogler";
    film2.releaseDate = "February 16, 2018";
    film2.runtime = "2h 15m";
    film2.genre = "Action/Sci-Fi";
    film2.rating = "PG-13";

    cout << "Film 1" << "\n\n" << "Title: " << film1.title << "\n" << "Year: " << film1.year << "\n" << "Director: " << film1.director << "\n" << \
        "Release Date: " << film1.releaseDate << "\n" << "Runtime: " << film1.runtime << "\n" << "Genre: " << film1.genre << "\n" << "Rating: " << film1.rating << "\n\n";

    cout << "Film 2" << "\n\n" << "Title: " << film2.title << "\n" << "Year: " << film2.year << "\n" << "Director: " << film2.director << "\n" << \
        "Release Date: " << film2.releaseDate << "\n" << "Runtime: " << film2.runtime << "\n" << "Genre: " << film2.genre << "\n" << "Rating: " << film2.rating << "\n";
    return 0;
}
