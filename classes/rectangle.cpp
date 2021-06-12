class Rectangle
{
    float length, height;

public:
    Rectangle()
    {
        this->length = 1;
        this->height = 1;
    }

    float perimeter()
    {
        return (this->length + this->height) * 2;
    }

    float area()
    {
        return this->length * this->height;
    }
};
