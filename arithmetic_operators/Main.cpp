//
// Hudson Schumaker
//

#include <iostream>
#include <string>

int main() {

    float pi = 3.1415;
    float R = 4.0;
    float r = 2.0;
    // Volume of a spherical shell = 4 pi R^3 - 4 pi r^3
    double vol = 4.0*pi*R*R*R/3.0 - 4.0*pi*r*r*r/3.0;
    
    // Addition:
    int a = 2+4/2; // equal to: 2+(4/2) result: 4
    int b = (3+3)/2; // equal to: (3+3)/2 result: 3

    // With Multiplication
    int c = 3+4/2*6; // equal to: 3+((4/2)*6) result: 15
    int d = 3*(3+6)/9; // equal to: (3*(3+6))/9 result: 3
    
    //Division and Modulo
    int g = 3-3%1; // equal to: 3 % 1 = 0 3 - 0 = 3
    int h = 3-(3%1); // equal to: 3 % 1 = 0 3 - 0 = 3
    int i = 3-3/1%3; // equal to: 3 / 1 = 3 3 % 3 = 0 3 - 0 = 3
    int l = 3-(3/1)%3; // equal to: 3 / 1 = 3 3 % 3 = 0 3 - 0 = 3
    int m = 3-(3/(1%3)); // equal to: 1 % 3 = 1 3 / 1 = 3 3 - 3 = 0

    return 0;
}
