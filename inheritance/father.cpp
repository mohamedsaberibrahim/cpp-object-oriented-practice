#include <iostream>
using namespace std;

class Father
{
    string eye_color;
    string hair_color;

public:
    Father(string eye_color, string hair_color)
    {
        this->eye_color = eye_color;
        this->hair_color = hair_color;
    }

    void Father_traits()
    {
        cout << "Eye color: " << this->eye_color << endl;
        cout << "Hair color: " << this->hair_color << endl;
    }
};

class Son : public Father
{
    string name;

public:
    Son(string name, string eye_color, string hair_color)
        : Father(eye_color, hair_color)
    {
        this->name = name;
    }

    void Son_traits()
    {
        Father_traits();
        cout << this->name << " have beard!" << endl;
    }
};

class Daughter : public Father
{
    string name;

public:
    Daughter(string name, string eye_color, string hair_color)
        : Father(eye_color, hair_color)
    {
        this->name = name;
    }

    void Daughter_traits()
    {
        Father_traits();
        cout << this->name << " have long hairs" << endl;
    }
};

int main()
{
    Daughter obj("Rapunzel", "Green", "Golden");
    obj.Daughter_traits();

    Son Obj("Ralph", "Brown", "Black");
    Obj.Son_traits();
    return 0;
}
