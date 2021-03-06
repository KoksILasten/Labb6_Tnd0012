#include <iostream>
#include <fstream>
#include <vector>
#include <utility>  //std::swap

#include "movie.h"

// NO CHANGES TO FUNCTION DECLARATION ALLOWED HERE!

// Sort alphabetically vector of movies V
// movies name is used for sorting
void sort_movies(std::vector<Movie>& V);

// Read a text file f of movies and
// Return a vector with the movies read
std::vector<Movie> read_movies(std::ifstream& f);

// Write all movies in vector V to file f
void write_movies(const std::vector<Movie>& V, std::ofstream& f);

// Display all movies in vector V to std::cout
void display_movies(const std::vector<Movie>& V);

// ADD ADDITIONAL FUNCTIONS BELOW IF NEEDED

// DO NOT CHANGE THE main() function
int main() {
	std::ifstream in_file("../code/movies.txt");          // file to read
	std::ofstream out_file("../code/movies_sorted.txt");  // file to write

	// Test if opening the files succeeded
	if (in_file && out_file) {
		// Load a file of movies into db
		std::vector<Movie> db = read_movies(in_file);

		if (db.empty() == false) {  // is database db of movies empty?
			// Sort array db by movies name
			sort_movies(db);

			// Display the sorted movies in array db to the screen
			display_movies(db);

			// Save the sorted movies stored in db to a text file
			write_movies(db, out_file);
		}
		else {
			std::cout << "File is empty!!\n";
		}
	}
	else {
		std::cout << "Error in file opening!!\n";
	}
}

/****************************************/
// Function definitions
/****************************************/

// Sort alphabetically vector of movies V
// movies name is used for sorting
void sort_movies(std::vector<Movie>& V) {
	for (size_t pass = 1; pass <= V.size() - 1; pass++) {
		for (size_t e = 0; e < V.size() - 1; e++) {

			if (larger_than(V[e], V[e + 1])) {
				std::swap(V[e], V[e + 1]);

			}
		}
	}
}

// Read a text file f of movies and
// Return a vector with the movies read
std::vector<Movie> read_movies(std::ifstream& f) {
	std::vector<Movie> V;

	Movie m = get(f);

	while (f) {

		V.push_back(m);
		m = get(f);
	}

	return V;
}

// Write all movies in vector V to file f
void write_movies(const std::vector<Movie>& V, std::ofstream& f) {
	for (Movie e : V) {

		put(e, f);
		f << "\n";
	}
}

// Display all movies in vector V to std::cout
void display_movies(const std::vector<Movie>& V) {
	for (Movie e : V) {

		put(e);
		std::cout << "\n";
	}
}
