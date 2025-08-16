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
