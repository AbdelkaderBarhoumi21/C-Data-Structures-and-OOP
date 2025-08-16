#include <cstdio>
//REFERNECE TYPES IN C++ // OCSALY
//POINTERS

// & - address of operator
using namespace std;

int main() {

    int myVariable{};

    printf("myVariable : %d\n", myVariable);

    int *myVariable_address = &myVariable;

    printf("&myVariable : %p\n", myVariable_address);

    return 0;
}





