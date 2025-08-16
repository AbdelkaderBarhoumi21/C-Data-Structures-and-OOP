<<<<<<< HEAD
#include <cstdio>
// OCSALY

// References in CPP

using namespace std;

struct WorldYear{
    int year;

    int get_year(){
        return year;
    }

    void set_year(int tyear){
        year = tyear;
    }
};

void add_year(WorldYear &xyear) {
    xyear.set_year(xyear.get_year() + 1);
}

int main(){

    WorldYear myEarth;
    myEarth.set_year(2022);
    printf("The year is %d.\n", myEarth.get_year());
    add_year(myEarth);
    printf("The year is %d.\n", myEarth.get_year());


}


=======
#include <cstdio>
// OCSALY

// References in CPP

using namespace std;

struct WorldYear{
    int year;

    int get_year(){
        return year;
    }

    void set_year(int tyear){
        year = tyear;
    }
};

void add_year(WorldYear &xyear) {
    xyear.set_year(xyear.get_year() + 1);
}

int main(){

    WorldYear myEarth;
    myEarth.set_year(2022);
    printf("The year is %d.\n", myEarth.get_year());
    add_year(myEarth);
    printf("The year is %d.\n", myEarth.get_year());


}


>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
