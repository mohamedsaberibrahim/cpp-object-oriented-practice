class Vehicle
{
    string speed;
    string model;

public:
    Vehicle(string speed, string model)
    {
        this->speed = speed;
        this->model = model;
    }

    string getSpeed()
    {
        return this->speed;
    }

    string getModel()
    {
        return this->model;
    }
};

// Derived Class
class Car : public Vehicle
{ // This line needs to be changed.

    string name; //  Name of a Car

public:
    Car()
    { // Default Constructor
        name = "";
    }

    // This function sets the name of the car
    void setDetails(string name)
    { // Setter Function
        this->name = name;
    }

    // This function calls the Base class functions and appends the result with the input
    string getDetails(string carName)
    {
        string speed = Vehicle::getSpeed();
        string model = Vehicle::getModel();
        string details = carName + ", " + model + ", " + speed;

        return details;
    }
};
