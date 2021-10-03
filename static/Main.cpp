//
// SchumakerTeam.
// Hudson Schumaker 
//

#include <iostream>

class Number {
    private:
        static const int accessCount = 0;

    public:
        static int zero(){return 0;}
        static int getCount() { return accessCount; }
};


int main() {
    Number::zero();
    std::cout << Number::getCount() << std::endl;
}
