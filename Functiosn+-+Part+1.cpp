//OCSALY - FUNCTIONS - Inlining

#include <iostream>
auto mult(int lhs, int rhs) -> int{
    return lhs * rhs;
    
}

int main(){

    std::cout << mult(6, 7) << std::endl;

    return 0;
}



