#include <iostream>

//OCSALY        --        Memory and Pointers in CPP         -- IDE : CLion

// & - RETURN THE ADDRESS OF AN OBJECT
// * - DECLARING POINTERS
//sizeof(int *); // will return 4 in 32bit machine, will return 8 in 64 bit machine;

int main() {

    int a = 92;
    std::cout << a << std::endl;

    int *pi { &a };
    *pi = 600;

    std::cout << a << std::endl;




}
