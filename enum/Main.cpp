//
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

int main() {
    Person p = Person();
    Person::Gender gender = p.Gender::Male;
    
    switch (gender) {
        case Person::Gender::Male:
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
