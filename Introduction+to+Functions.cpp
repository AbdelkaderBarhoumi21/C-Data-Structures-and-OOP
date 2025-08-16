//OCSALY - FUNCTIONS

#include <cstdio>
#include <iostream>
static int mult(int lhs, int rhs){
    return lhs * rhs;
}

int main(){

    std::cout << mult(6, 7) << std::endl;

    return 0;
}

extern int mult(int, int);

