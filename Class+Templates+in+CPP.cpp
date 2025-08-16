
#include "ClassTemplate.h"
#include <iostream>

using namespace std;

class Animal{
protected:
    string myName;

public:
    Animal(string name) : myName(name){}

    virtual string MakeSound() = 0;

    string GetName(){
        return myName;
    }
};

class Dog : public Animal{
public:
    Dog(string name) : Animal(name){}

    void operator=(const Dog &d){
        myName = d.myName;
    };

    string MakeSound() override{
        return "woof-woof";
    }
};

class Cat : public Animal {
public:
    Cat(string name) : Animal(name){}

    void operator=(const Cat &d){
        myName = d.myName;
    }

    string MakeSound() override{
        return "meow-meow";
    }
};

template<typename T>
void GetNameAndMakeSound(T &theAnimal){
    cout << theAnimal.GetName() << " goes ";
    cout << theAnimal.MakeSound << endl;
}
template <typename T>
class AnimalTemplate {
private:
        T myAnimal;
    public:
        AnimalTemplate(T animal) : myAnimal(animal) {}

    void GetNameAndMakeSound(){
        cout << myAnimal.GetName() << " goes ";
        cout << myAnimal.MakeSound() << endl;
        }


};

int main(){
    Dog dog = Dog("Labrador");
    AnimalTemplate<Dog> dogTemplate(dog);
    dogTemplate.GetNameAndMakeSound();

    Cat cat = Cat("Estonian Cat");
    AnimalTemplate<Cat> catTemplate(cat);
    catTemplate.GetNameAndMakeSound();
}


