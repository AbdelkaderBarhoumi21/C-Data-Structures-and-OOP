<<<<<<< HEAD
#include <cstdio>
//REFERNECE TYPES IN C++ // OCSALY

// Pointers and Arrays in CPP

using namespace std;

struct Car {
    char name[256];
};

void print_name(Car* cars, size_t n_cars) {
    for (size_t i = 0; i < n_cars; i++) {
        printf(" %s Car \n", cars[i].name);
    }
}

int main() {

    Car myGarage[] = {"BMW", "Mercedes", "Ford"};
    print_name(myGarage, sizeof(myGarage) / sizeof (Car));

}





=======
#include <cstdio>
//REFERNECE TYPES IN C++ // OCSALY

// Pointers and Arrays in CPP

using namespace std;

struct Car {
    char name[256];
};

void print_name(Car* cars, size_t n_cars) {
    for (size_t i = 0; i < n_cars; i++) {
        printf(" %s Car \n", cars[i].name);
    }
}

int main() {

    Car myGarage[] = {"BMW", "Mercedes", "Ford"};
    print_name(myGarage, sizeof(myGarage) / sizeof (Car));

}





>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
