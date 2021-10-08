#include "movie.h"

// Read a movie (name, number of copies, type) from file
// Return the movie read
Movie get(std::ifstream& file) {
    Movie m;

    file >> std::ws;
    std::getline(file, m.name);
    file >> std::ws;
    std::getline(file, m.type, ' ');
    file >> m.year;

    return m;
}

// Write a movie m to file
void put(const Movie& m, std::ofstream& file) {
    file << m.name << "\n";
    file << "Year: " << m.year << "  ";
    file << "Type: " << m.type << "\n";
}

// Write movie m to std::cout
void put(const Movie& m) {
    std::cout << m.name << "\n";
    std::cout << "Year: " << m.year << "  ";
    std::cout << "Type: " << m.type << "\n";
}

// Return true, if m1's name is alphabetically larger than m2's name
// Otherwise, returns false
bool larger_than(const Movie& m1, const Movie& m2) {
/*    if (m1.name > m2.name) {
        return true;
    }
    return false;  // delete this */

    return m1.name > m2.name;
}
