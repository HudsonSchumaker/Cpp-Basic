//
// Hudson Schumaker
//

#include <iostream>
 
struct printData {
    void print(int i) {
        std::cout << "Printing int: " << i << std::endl;
    }
    void print(double  f) {
        std::cout << "Printing float: " << f << std::endl;
    }
    void print(char* c) {
        std::cout << "Printing character: " << c << std::endl;
    }
};

int main() {
   printData pd;
 
   // Call print to print integer
   pd.print(5);
   
   // Call print to print float
   pd.print(500.263);
   
   // Call print to print character
   pd.print("Hello C++");
 
   return 0;
}