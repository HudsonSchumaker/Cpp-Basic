//
// Schumaker Lab
// Hudson Schumaker
//

#include <iostream>

template <typename T, typename U>
auto max(T a, U b) {
  return (a > b) ? a : b;
}

template <typename T, typename U>


int main() {

  std::cout << max(2, 3) << '\n';
  std::cout << max(2, 3.3f) << '\n';
  std::cout << max('Z', 'a') << '\n';
  
  return 0;
}
