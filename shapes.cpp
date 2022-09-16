#include <iostream>
#include "shapes.h"

void box(int width, int height) {
	std::string box[width][height];

	for (int w = 0; w < width; w++) {

		for (int h = 0; h < height; h++) {

			std::cout << " * ";

		}//end inner for loop

		std::cout << "\n";

	}//end for loop

}//end box method
