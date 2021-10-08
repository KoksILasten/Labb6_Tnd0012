#pragma once

#include <iostream>
#include <vector>
#include <fstream>

// ADD new data type Image to represent a decompressed image
struct Image {
	int Image_dim_w = 0;
	int Image_dim_h = 0;
	std::vector<char> Image_data;
};

Image get_compressed_Image(std::ifstream& file);

void write_Image(Image& img, std::ofstream& file);
