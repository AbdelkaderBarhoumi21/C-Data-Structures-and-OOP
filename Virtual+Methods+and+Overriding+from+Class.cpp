<<<<<<< HEAD
#include <iostream>
#include "string"

using namespace std;

class Animal {

private:
    string myName;

public:
    Animal(string name) : myName(name){

    }

    virtual string MakeSound() = 0;

    string GetName() {
        return myName;
    }

};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {

    }

    string MakeSound() override{
        return "wooof-woof !";
    }
};

int main() {

    Dog dog = Dog("Hound");

    cout << dog.GetName() << " is barking ! ";
    cout << dog.MakeSound() << endl;

    return 0;
}
=======
#include <iostream>
#include "string"

using namespace std;

class Animal {

private:
    string myName;

public:
    Animal(string name) : myName(name){

    }

    virtual string MakeSound() = 0;

    string GetName() {
        return myName;
    }

};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {

    }

    string MakeSound() override{
        return "wooof-woof !";
    }
};

int main() {

    Dog dog = Dog("Hound");

    cout << dog.GetName() << " is barking ! ";
    cout << dog.MakeSound() << endl;

    return 0;
}
>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
