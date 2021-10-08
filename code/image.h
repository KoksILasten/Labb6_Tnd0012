#pragma once

#include <iostream>
#include <vector>
#include <fstream>

// ADD new data type Image to represent a decompressed image
struct Image {
	int Palette_size;
	int Palette;
	int Image_dim;
	int Image_data;
};


// Read a compressed image from file in
// Return a value of type Image representing the decompressed image
// ADD function declaration


// Write a decompressed image to file out
// ADD function declaration