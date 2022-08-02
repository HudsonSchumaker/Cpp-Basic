
#include <iostream>
#include <vector>
#include <algorithm>


void foreach(const std::vector<int>& values, void(*func)(int)) {
   for (int value : values) {
       func(value);
   }
}

int main() {

   std::vector values = { 1,5,4,2,3 };
   foreach(values, [](int value) { std::cout << value << '\n';} );
}
