//this is lab 7 ex1
#include <iostream>

int main() {
    // Initialize a double variable
    double myDouble = 2.4;

    // Create a pointer to a double and set it to the address of the variable
    double* pointerToDouble = &myDouble;

    // Print the value and address of the variable
    std::cout << "Variable value: " << myDouble << std::endl;
    std::cout << "Variable address: " << &myDouble << std::endl;

    // Print the value, address, and dereferenced value of the pointer
    std::cout << "Pointer value: " << pointerToDouble << std::endl;
    std::cout << "Pointer address: " << &pointerToDouble << std::endl;
    std::cout << "Dereferenced pointer value: " << *pointerToDouble << std::endl;

    return 0;
}
