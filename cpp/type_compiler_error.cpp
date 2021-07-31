#include <string>
#include <iostream>

int returnSomething() {
    return 0; //std::string("C++ is better!");
}

int main() {
    std::cout << std::string("Python is better!") << '\n';
    //std::cout << returnSomething();
    return 0; 
}
