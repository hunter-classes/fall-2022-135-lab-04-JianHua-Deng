#include <iostream>
#include "shapes.h"

//row = width, col = height

void box(int width, int height) {

	int row = width;
	int col = height;

	for (int r = 0; r < row; r++) {

		for (int c = 0; c < col; c++) {

			std::cout << " * ";

		}//end inner for loop

		std::cout << "\n";

	}//end for loop

}//end box method


void checkerboard(int width, int height) {

	int row = width;
	int col = height;

	bool oddLine = true;//This variable checks if its at a odd row, if so, add extra space and decrease the amount of star drawn in this line by 1
	
	for (int c = 0; c < col; c++) {
		
		for (int r = 0; r < row; r++) {

			if (c % 2 != 0 && oddLine) {

				r += 1;
				std::cout << " ";
				oddLine = false;

			}//end condition
				
			std::cout << " *";

		}//end for inner for loop

		oddLine = true;
		std::cout << "\n";

	}//end for loop

}//end checkerboard