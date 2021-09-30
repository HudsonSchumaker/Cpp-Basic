//
// Hudson Schumaker 
//

#include <iostream>
#include <string>

bool True(std::string id) {
    std::cout << "True" << id << std::endl;
    return true;
}

bool False(std::string id) {
    std::cout << "False" << id << std::endl;    
    return false;
}

int main() {
    bool result;
    // let's evaluate 3 booleans with || and && to illustrate operator precedence
    // precedence does not mean that && will be evaluated first but rather where
    // parentheses would be added
    // example 1
    result = False("A") || False("B") && False("C");
    // eq. False("A") || (False("B") && False("C"))
    //FalseA
    //FalseB
    //"Short-circuit evaluation skip of C"
    //A is false so we have to evaluate the right of ||,
    //B being false we do not have to evaluate C to know that the result is false
    result = True("A") || False("B") && False("C");
    // eq. True("A") || (False("B") && False("C"))
    
    std::cout << result << " :=====================" << std::endl;
    // TrueA
    //"Short-circuit evaluation skip of B"
    //"Short-circuit evaluation skip of C"
    //A is true so we do not have to evaluate
    // the right of || to know that the result is true
    //If || had precedence over && the equivalent evaluation would be:
    // (True("A") || False("B")) && False("C")
    //What would print
    //TrueA
    //"Short-circuit evaluation skip of B"
    //FalseC
    //Because the parentheses are placed differently
    //the parts that get evaluated are differently
}
