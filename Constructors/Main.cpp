//
// Hudson Schumaker 
// Main.cpp
//

#include <iostream>
#include "Cat.hpp"
using namespace std;

int main() {
	cout << "Starting program ..." << endl;

	{
		Cat bob;
		bob.speak();
	}

	cout << "Ending program ..." << endl;
	return 0;
}
