//
// Hudson Schumaker
// Async

#include <iostream>
#include <future>

long asyncFunction ();

int main() {
    std::future<long> fut = std::async(asyncFunction);
    std::cout << "doing something"<< std::endl;
    std::cout << "doing something else"<< std::endl;

    std::cout << "max = " << fut.get() << std::endl;
    return 0;
}

long asyncFunction() {
    std::cout << "starting asyncFunction ... " << std::endl;
    long max = 0;
    for (long i = 0; i < 1000000000; ++i) {
        max += i%2;
    }
    std::cout << " Finished asyncFunction ..." << std::endl;
    return max;
}
