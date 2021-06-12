#include <iostream>
#include <cmath>
using namespace std;

class Point
{

    // Private fields
private:
    int x;
    int y;

public:
    // Default Constructor
    Point()
    {
        this->x = 0;
        this->y = 0;
    }

    // Parameterized Constructor
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    double distance()
    {
        return sqrt(pow(this->x, 2) + pow(this->y, 2));
    }

    double distance(int x2, int y2)
    {
        return sqrt(pow(this->x - x2, 2) + pow(this->y - y2, 2));
    }
};
