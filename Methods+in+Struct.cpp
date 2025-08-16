<<<<<<< HEAD
#include <iostream>

//OCSALY        --         C++ Classes          -- IDE : CLion


struct myDateAndTime{

    void add_year(){
        year++;
    }
    int year;
};

int main() {
    myDateAndTime md;
    md.year = 2022;
    printf("YEAR : %d\n", md.year);
    md.add_year();
    printf("YEAR : %d\n", md.year);

    return 0;
}
=======
#include <iostream>

//OCSALY        --         C++ Classes          -- IDE : CLion


struct myDateAndTime{

    void add_year(){
        year++;
    }
    int year;
};

int main() {
    myDateAndTime md;
    md.year = 2022;
    printf("YEAR : %d\n", md.year);
    md.add_year();
    printf("YEAR : %d\n", md.year);

    return 0;
}
>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
