<<<<<<< HEAD
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



=======
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



>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
