//
// Hudson Schumaker
//

#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	cout << "Cat created." << endl;
	happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed." << endl;
}

void Cat::speak() {
	if(happy) {
		cout << "Meouww!" << endl;
	}
	else {
		cout << "Ssssss!" << endl;
	}
}
