//
// Schumaker Lab
// Hudson Schumaker 
//

#include <iostream>
#include <sstream>

using namespace std;

int main() {

	string name = "Paul";
	int age = 32;

	stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	string info = ss.str();

	cout << info << endl;

	return 0;
}
