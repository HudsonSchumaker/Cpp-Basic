//
// Hudson Schumaker
//

#include <iostream>

template<unsigned int n>
struct factorial {
    enum {
        value = n * factorial<n - 1>::value
    };
};

template<>
struct factorial<0> {
    enum { value = 1 };
};

int main() {
    std::cout << factorial<7>::value << std::endl; // prints "5040"

    return 0;
}