//
// Hudson Schumaker
// Main.cpp
//

#include <iostream>
#include <string>
#include <iomanip>

auto main() -> int {

    // array initialization
    int arrayOfInts[5];
    int arrayOfInts[5] = {10, 20, 30, 40, 50};
    int arrayOfInts[] = {10, 20, 30, 40, 50};
    int arrayOfInts[5] = {10,20}; // means 10, 20, 0, 0, 0

    char arrayOfChars[5]; // declare the array and allocate the memory, don't initialize
    char arrayOfChars[5] = { 'a', 'b', 'c', 'd', 'e' } ; //declare and initialize
    double arrayOfDoubles[5] = {1.14159, 2.14159, 3.14159, 4.14159, 5.14159};
    std::string arrayOfStrings[5] = { "C++", "is", "super", "duper", "great!"};

    int array[5] = { 10/*Element no.0*/, 20/*Element no.1*/, 30, 40, 50/*Element no.4*/};
    std::cout << array[4]; //outputs 50
    std::cout << array[0]; //outputs 10

    // matrix
    int const n_rows = 3;
    int const n_cols = 7;
    int const m[n_rows][n_cols] = // A raw array matrix.
    {
        { 1, 2, 3, 4, 5, 6, 7 },
        { 8, 9, 10, 11, 12, 13, 14 },
        { 15, 16, 17, 18, 19, 20, 21 }
    };
    
    for(int y = 0; y < n_rows; ++y) {
        for(int x = 0; x < n_cols; ++x) {
            std::cout << m[y][x]; // Note: do NOT use m[y,x]!
        }
        std::cout << '\n';
    }
}





