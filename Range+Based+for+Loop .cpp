<<<<<<< HEAD
// OCSALY
// LOOPS
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> myCars = {"BMW", "FORD", "FIAT", "VW", "AUDI"};

    for (int i = 0; i < myCars.size(); ++i) {
        cout << myCars.at(i) << endl;
    }


    // RANGE-BASED LOOP

    cout << "RANGE_BASED_LOOP" << endl;

    for (string myCarModel: myCars) {
        cout << myCarModel << endl;
    }

    int myCarsYear[] = {2002, 2005, 1989, 2010};
    for (int year: myCarsYear) {
        if (year == 1989) {
            cout << "CAR IS TO OLD : CLASSIC" << endl;
        } else {
            cout << year << endl;

        }
    }

}


=======
// OCSALY
// LOOPS
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> myCars = {"BMW", "FORD", "FIAT", "VW", "AUDI"};

    for (int i = 0; i < myCars.size(); ++i) {
        cout << myCars.at(i) << endl;
    }


    // RANGE-BASED LOOP

    cout << "RANGE_BASED_LOOP" << endl;

    for (string myCarModel: myCars) {
        cout << myCarModel << endl;
    }

    int myCarsYear[] = {2002, 2005, 1989, 2010};
    for (int year: myCarsYear) {
        if (year == 1989) {
            cout << "CAR IS TO OLD : CLASSIC" << endl;
        } else {
            cout << year << endl;

        }
    }

}


>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
