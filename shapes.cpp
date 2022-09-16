#include <iostream>
#include "shapes.h"

//row = width, col = height

void box(int width, int height) {

	int row = width;
	int col = height;

	for (int c = 0; c < col; c++) {

		for (int r = 0; r < row; r++) {

			std::cout << " * ";

		}//end inner for loop

		std::cout << "\n";

	}//end for loop

}//end box method


void checkerboard(int width, int height) {

	int row = width;
	int col = height;

	
	for (int c = 0; c < col; c++) {
		
		for (int r = 0; r < row; r++) {

			if (c % 2 != 0 && r == 0) {

				r += 1;
				std::cout << " ";

			}//end condition
				
			std::cout << " *";

		}//end for inner for loop

		std::cout << "\n";

	}//end for loop

}//end checkerboard

void cross(int size) {



}//end of cross