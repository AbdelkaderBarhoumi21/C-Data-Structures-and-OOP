#include <iostream>

//OCSALY        --       Types of Memory        -- IDE : CLion

//4 Types of MEMORY

//1. STATIC OR GLOBAL
//2. STRING POOL
//3. AUTOMATIC OR STACK
//4. FREE STORE


int main() {
    int *pi = nullptr;
    //std::nullptr_t - All Pointer types can be converted to this type
    // code
    int a = 62;
    pi = &a;
    // code
    if (nullptr != pi) std::cout << *pi << std::endl;
}

