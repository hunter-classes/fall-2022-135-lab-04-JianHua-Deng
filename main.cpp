#include <iostream>
#include "shapes.h"

int main(){
	std::cout << "Box: \n";
	box(7, 4); //(width, height)

	std::cout << "\n";

	std::cout << "Checkerboard: \n";
	checkerboard(12, 6);//(width, height)
	
}//end main
