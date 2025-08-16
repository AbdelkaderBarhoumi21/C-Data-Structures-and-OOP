#include <cstdio>
//REFERNECE TYPES IN C++ // OCSALY
//Dereference Operators

// & - address of operator
// * - dereference operator
using namespace std;

int main() {

//    int myVariable{};
//
//    printf("myVariable : %d\n", myVariable);
//
//    int *myVariable_address = &myVariable;
//
//    printf("&myVariable : %p\n", myVariable_address);
//
//    *myVariable_address = 995;
//    printf("myVariable : %d\n", myVariable);
//
//
//    printf("Int  %d ", *myVariable_address);

    int myAge = 0;
    int *myAge_address = &myAge;
    printf("Value at myAge_address : %d\n", *myAge_address);
    printf("myAge Adress : %p\n", myAge_address);
    *myAge_address = 1099;
    printf("Value at myAge_address : %d\n", *myAge_address);
    printf("myAge Address : %p\n", myAge_address);


    return 0;
}





