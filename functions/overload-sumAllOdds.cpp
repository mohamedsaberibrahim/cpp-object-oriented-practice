float square(float num)
{
    return num * num;
}

int square(int num)
{
    return num * num;
}

float squareSum(float num1, float num2, float num3)
{
    float sum = square(num1) + square(num2) + square(num3);

    return sum;
}

int squareSum(int num1, int num2, int num3)
{
    int sum = square(num1) + square(num2) + square(num3);

    return sum;
}
