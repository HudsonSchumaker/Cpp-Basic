#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

  // allocate memory of int size to an int pointer
  int* ptr = (int*) malloc(sizeof(int));

  // assign the value 5 to allocated memory
  *ptr = 5;

  cout << *ptr;

  return 0;
}
