//
//
// Hudson Schumaker 
//

#include <iostream> 

int main() {
    int var = 20;
    int *ptr;
    ptr = &var;
    
    // Outputs 20 (The value of var)
    std::cout << var << std::endl;
    
    // Outputs 0x234f119 (var's memory location)
    std::cout << ptr << std::endl;
  
    // Outputs 20 The value of the variable stored in the pointer ptr
    std::cout << *ptr << std::endl;

    return 0;
} 

