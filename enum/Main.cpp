//
// SchumakerTeam.
// Hudson Schumaker
//

#include<iostream>

class Person final {
    public:
        enum Gender {
            Male,
            Female
        };
};

int main(void) {
    Person p = Person();
    Person::Gender gender = p.Gender::Male;
    
    switch (gender) {
        case Person::Gender::Male: // Class - Enum - Enum Name
            std::cout << "Gender is Male";
            break;
        
        case Person::Gender::Female:
            std::cout << "Gender is Female"; 
            break;
        
        default:
            std::cout << "Value can be Male or Female";
   }
   
   return 0;
}
