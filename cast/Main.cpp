#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
    int id = 0; 
	void speak() { cout << "Grrrr" << endl; }
};

class Cat: public Animal {
public:
	void jump() { cout << "Cat jumping!" << endl; }
};

class Tiger: public Cat {
public:
	void attackAntelope() { cout << "Attacking!" << endl; }
};

int main() {

	Animal a;
	Cat cat;
	Tiger tiger;
	cat.id = 1;
	tiger.id = 2;

	vector<Animal*> list;
	list.push_back(&a);
	list.push_back(&cat);
	list.push_back(&tiger);
	
	for (Animal* a : list) {
	    if (a->id == 2) {
	       Tiger * m_derivedType = (Tiger*) &a;
	       m_derivedType.attackAntelope();
	    }
	}

	return 0;
}
