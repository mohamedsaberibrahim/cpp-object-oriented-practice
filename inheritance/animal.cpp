#include <iostream>
using namespace std;

class Animal
{
    string name;
    string sound;

public:
    Animal(string name, string sound)
    {
        this->name = name;
        this->sound = sound;
    }

    void Animal_Details()
    {
        cout << "Animal Name: " << this->name << endl;
        cout << "Animal Sound: " << this->sound << endl;
    }
};

class Dog : public Animal
{
    string family;

public:
    Dog(string name, string sound) : Animal(name, sound)
    {
        this->family = "Carnivores";
    }

    void Dog_detail()
    {
        Animal_Details();
        cout << "Dog's Family: " << this->family << endl;
    }
};

class Sheep : public Animal
{
    string color;

public:
    Sheep(string name, string sound) : Animal(name, sound)
    {
        this->color = "White";
    }

    void Sheep_detail()
    {
        Animal_Details();
        cout << "Sheep Color: " << this->color << endl;
    }
};

int main()
{
    Dog d("Pongo", "Woof Woof");
    d.Dog_detail();
    Sheep s("Billy", "Baaa Baaa");
    s.Sheep_detail();
}
