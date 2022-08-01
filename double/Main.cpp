//
// SchumakerTeam
// Hudson Schumaker 
// 

#include <iostream>

int main() {
  
  double d = 994.50;
  
  cout.precision(2); // two units after . 
  cout << fixed;     // keep when .00
  
  cout << "Number " << d << endl;
  
  return 0; 
}
