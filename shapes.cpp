#include <iostream>
#include "shapes.h"

//row = width, col = height

std::string box(int width, int height) {

	std::string box;
	int row = width;
	int col = height;

	for (int c = 0; c < col; c++) {

		for (int r = 0; r < row; r++) {

			box +=  "*";

		}//end inner for loop

		box += "\n";

	}//end for loop

	return box;

}//end box method


std::string checkerboard(int width, int height) {

	std::string checkerboard;
	int row = width;
	int col = height;

	
	for (int c = 0; c < col; c++) {
		
		for (int r = 0; r < row; r++) {

			if (c % 2 != 0 && r == 0) {//checks if c is at a oddline and if r is at 0. This is so that we know if we should add a space and decrease a star or not

				r += 1;
				checkerboard += " ";

			}//end condition
				
			checkerboard += " *";

		}//end for inner for loop

		checkerboard += "\n";

	}//end for loop

	return checkerboard;

}//end checkerboard


std::string cross(int size) {

	std::string crosses;

	for (int height = 0; height < size; height++) {

		for (int stars = 0; stars < size; stars++) {

			if (stars == height || stars == size - height - 1) {

				crosses += "*";
			
			} else {

				crosses += " ";

			}//end else

		}//end inner for loop
		
		crosses += "\n";

	}//end for loop

	return crosses;

}//end of cross




std::string lower(int length) {

	std::string lower_triangle;

	for (int height = 1; height <= length; height++) {

		for (int stars = 0; stars < height; stars++) {

			lower_triangle += "*";

		}//end inner for loop

		lower_triangle += "\n";

	}//end for loop

	return lower_triangle;

}//end lower function



std::string upper(int length) {

	std::string upper_triangle;

	for (int height = 0; height < length; height++) {

		for (int space = 0; space < height; space++) {
			
			upper_triangle += " ";

		}//end 1st inner for loop

		for (int stars = 0; stars < length - height; stars++) {

			upper_triangle += "*";

		}//end 2nd inner for loop

		upper_triangle += "\n";

	}//end for loop

	return upper_triangle;

}//end upper function



std::string trapezoid(int width, int height) {
	
	std::string trapezoid;
	int decrements = 0;
	
	//checks if its a possible shape
	if (height * 2 > width) {
		return "Impossible shape";
	}//end condition
	
	for (int h = height; h > 0; h--) {

		for (int spaces = 0; spaces < height - h; spaces++) {

			trapezoid += " ";

		}//end 1st inner for loop

		for (int stars = 0; stars < width - decrements ; stars++) {

			trapezoid += "*";

		}//end 2nd inner for loop

		decrements += 2;
		trapezoid += "\n";


	}//end for loop

	return trapezoid;

}//end trapezoid

std::string checkerBoard3x3(int width, int height) {
	
	std::string board3x3;



	return board3x3;

}//end of checkerBoard 
