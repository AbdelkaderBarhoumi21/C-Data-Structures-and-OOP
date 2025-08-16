#include <iostream>

//OCSALY        --         Plain Old data Classes           -- IDE : CLion

struct Car{
    char make[256];
    int year;
    int wheels;
    bool isRunning;
};

int main() {

    Car myBMW;
    myBMW.year = 2001;
    myBMW.isRunning = true;
    printf("MY BMW YEAR %d", myBMW.year);

    return 0;
}
