<<<<<<< HEAD

// OCSALY

// Declarations without Type  - AUTO

//Employing References
#include <vector>
#include <string>
#include <tuple>
#include <iostream>

using namespace std;

int main(){
    
    auto a = 42;            //INT
    auto b = 42l;           // LONG
    auto c = 42ll;          // LONG LONG
    auto d = 1.0f;     // FLOAT
    auto e = 1.0;    // DOUBLE
    auto f = 'A';           // CHAR
    auto g = true;          // BOOL


    vector<tuple<string, int >> myCars;
    myCars.push_back(make_tuple("BMW 5er- ", 2001));
    myCars.push_back(make_tuple("Ford Mustang - ", 1989));
    myCars.push_back(make_tuple("VW Golf - ", 2010));
    myCars.push_back(make_tuple("LANDROVER - ", 2015));

//    for (tuple<string, int> myVehicles: myCars) {
//        cout << get<0>(myVehicles) << " " << get<1>(myVehicles) << endl;
//    }

    for (auto myVehicles: myCars) {
        cout << get<0>(myVehicles) << "" << get<1>(myVehicles) << endl;
    }

}


=======

// OCSALY

// Declarations without Type  - AUTO

//Employing References
#include <vector>
#include <string>
#include <tuple>
#include <iostream>

using namespace std;

int main(){
    
    auto a = 42;            //INT
    auto b = 42l;           // LONG
    auto c = 42ll;          // LONG LONG
    auto d = 1.0f;     // FLOAT
    auto e = 1.0;    // DOUBLE
    auto f = 'A';           // CHAR
    auto g = true;          // BOOL


    vector<tuple<string, int >> myCars;
    myCars.push_back(make_tuple("BMW 5er- ", 2001));
    myCars.push_back(make_tuple("Ford Mustang - ", 1989));
    myCars.push_back(make_tuple("VW Golf - ", 2010));
    myCars.push_back(make_tuple("LANDROVER - ", 2015));

//    for (tuple<string, int> myVehicles: myCars) {
//        cout << get<0>(myVehicles) << " " << get<1>(myVehicles) << endl;
//    }

    for (auto myVehicles: myCars) {
        cout << get<0>(myVehicles) << "" << get<1>(myVehicles) << endl;
    }

}


>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
