<<<<<<< HEAD
#include <iostream>

//OCSALY        --         Unions in CPP           -- IDE : CLion

union Variant{
    char myString[10];
    int myInteger;
    double myDouble;

};
int main() {
    Variant v;
    v.myInteger = 32;
    printf("MY UNION INTEGER : %d\n", v.myInteger);
    printf("MY UNION INTEGER 2 BEFORE MYDOUBLE : %d\n", v.myInteger);
    v.myDouble = 3.928428;
    printf("MY UNION DOUBLE  : %f\n", v.myDouble);

    printf("MY UNION INTEGER 2 AFTER MY DOUBLE: %d\n", v.myInteger);

    return 0;
}
=======
#include <iostream>

//OCSALY        --         Unions in CPP           -- IDE : CLion

union Variant{
    char myString[10];
    int myInteger;
    double myDouble;

};
int main() {
    Variant v;
    v.myInteger = 32;
    printf("MY UNION INTEGER : %d\n", v.myInteger);
    printf("MY UNION INTEGER 2 BEFORE MYDOUBLE : %d\n", v.myInteger);
    v.myDouble = 3.928428;
    printf("MY UNION DOUBLE  : %f\n", v.myDouble);

    printf("MY UNION INTEGER 2 AFTER MY DOUBLE: %d\n", v.myInteger);

    return 0;
}
>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
