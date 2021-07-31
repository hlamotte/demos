#include <iostream>

int* getPointer() {
    // create a variable in heap, then delete it
    int* aPointer = new int;
    *aPointer = 99;
    ////delete aPointer;

    // add another, non-related variable
    ////int* bPointer = new int;
    ////*bPointer = 101;

    // return a pointer to the original variable that was deleted
    return aPointer;
}

int main() {
    std::cout << *getPointer() << '\n';
}