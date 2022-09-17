#include <iostream>
#include "shapes.h"

int main(){

	std::cout << "\n";

	std::cout << "box(7,4):\n";
	std::string boxes = box(7, 4);//(width, height)
	std::cout << "\n";
	std::cout << boxes;
	std::cout << "\n------------------\n"; // seperator 



	std::cout << "checkerboard(12,6): \n";
	std::string board = checkerboard(12, 6);//(width, height)
	std::cout << "\n";
	std::cout << board;
	std::cout << "\n------------------\n"; // seperator 



	std::cout << "cross(10): \n";
	std::string crosses = cross(10);//(size)
	std::cout << "\n";
	std::cout << crosses;
	std::cout << "\n------------------\n"; // seperator 



	std::cout << "lower(6): \n";
	std::string lower_triangle = lower(6);//(length)
	std::cout << "\n";
	std::cout << lower_triangle;
	std::cout << "\n------------------\n"; // seperator 



	std::cout << "uppser(8): \n";
	std::string upper_triangle = upper(8);//(length)
	std::cout << "\n";
	std::cout << upper_triangle;
	std::cout << "\n------------------\n"; // seperator 


	std::cout << "trapezoid(12, 5): \n";
	std::string trapezoid1 = trapezoid(12, 5);//(width, height)
	std::cout << "\n";
	std::cout << trapezoid1;
	std::cout << "\n------------------\n"; // seperator 


	std::cout << "trapezoid(11,7) <- Impossible \n";
	std::string trapezoid2 = trapezoid(11, 7);//(width, height)
	std::cout << "\n";
	std::cout << trapezoid2;
	std::cout << "\n------------------\n"; // seperator 

	std::cout << "\n";
}//end main
