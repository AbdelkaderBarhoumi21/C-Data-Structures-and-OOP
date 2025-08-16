#include <iostream>
#include "string"

using namespace std;

class Animal {

private:
    string myName;

public:
    Animal(string name) : myName(name){

    }
    void GiveName(string name) {
        myName = name;
    }

    string GetName() {
        return myName;
    }

};


int main() {

    Animal dog = Animal("Ocsaly");


    cout << "Hi, I'm a " << dog.GetName() << endl;


    return 0;
}
