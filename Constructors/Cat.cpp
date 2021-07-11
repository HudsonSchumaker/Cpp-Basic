//
// Hudson Schumaker
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
	if(happy) {
		cout << "Meouww!" << endl;
	}
	else {
		cout << "Ssssss!" << endl;
	}
}
