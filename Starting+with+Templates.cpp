#include <iostream>
#include "string"

using namespace std;

class Animal {

protected:
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

    void operator=(const Dog &D){
        myName = D.myName;
    }
    string MakeSound() override{
        return "wooof-woof !";
    }
};

class Cat: public Animal{
public:
    Cat(string name) : Animal(name){

    }

    void operator=(const Cat &D){
        myName = D.myName;
    }

    string MakeSound() override {
        return "meow-meow!";
    }

};

template<typename T>
void GetNameAndMakeSound(T &theAnimal){
    cout << theAnimal.GetName() << " goes ";
    cout << theAnimal.MakeSound() << endl;
}

int main() {

    Dog dog = Dog("Terrier");
    cout << dog.GetName() << " is barking : ";
    cout << dog.MakeSound() << endl;

    Dog dog2 = dog;
    cout << dog2.GetName() << " is barking : ";
    cout << dog2.MakeSound() << endl;

    Cat cat = Cat("Regular Cat");
    GetNameAndMakeSound(cat);

    return 0;
}
