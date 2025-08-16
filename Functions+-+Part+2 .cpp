//OCSALY - FUNCTIONS - Inlining

#include <iostream>
auto mult(int lhs, int rhs) -> int{
    return lhs * rhs;

}

int mult(int lhs, int rhs, int xhs) noexcept{
    
    // check the parameter and handle overflow appropriately
    return lhs * rhs * xhs;

}

int mult(){
    
}

int main(){

    std::cout << mult(6, 7) << std::endl;
    std::cout << mult(9, 10,92) << std::endl;

    return 0;
}

int _myFunction();

int MYFUNCTION();

//int 921Muco(); // WILL NOT COMPILE



