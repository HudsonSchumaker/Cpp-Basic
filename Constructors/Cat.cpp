//
// Hudson Schumaker
// Cat.cpp
//

#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat created." << std::endl;
	happy = true;
}

Cat::~Cat() {
	std::cout << "Cat destroyed." << std::endl;
}

void Cat::speak() {
	if (happy) {
		std::cout << "Meouww!" << std::endl;
	}
	else {
		std::cout << "Ssssss!" << std::endl;
	}
}
