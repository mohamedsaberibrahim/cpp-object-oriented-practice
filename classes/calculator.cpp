class calculator
{
    float num1, num2;

public:
    calculator(float n1, float n2)
    {
        this->num1 = n1;
        this->num2 = n2;
    }

    int add()
    {

        return this->num1 + this->num2;
    }

    float subtract()
    {
        return this->num2 - this->num1;
    }

    float multiply()
    {
        return this->num1 * this->num2;
    }

    float divide()
    {
        return this->num2 / this->num1;
    }
};
