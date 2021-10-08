#include "image.h"

// void display line() max ex 14
Image get_compressed_Image(std::ifstream& file) {
	Image I;

	int palette_size = 0;
	std::vector<int> palette;

	file >> palette_size;
	for (int e = 0; e < palette_size; e++) {

		int p_temp = 0;
		file >> p_temp;
		palette.push_back(p_temp);
	}

	file >> I.Image_dim_w;
	file >> I.Image_dim_h;

	//decompress
	while (file) {
		int index = 0;
		int num_times = 0;

		file >> index;
		file >> num_times;
		for (int i = 0; i < num_times; i++) {
			I.Image_data.push_back(palette[index]);
		}
	}

	return I;
}

void write_Image(Image& img, std::ofstream& file) {
	size_t size = img.Image_data.size();

	for (size_t i = 0; i < img.Image_data.size(); i++) {

		if (i % img.Image_dim_w == 0) {
			file << std::endl;
		}

		file << img.Image_data[i];

	}

}