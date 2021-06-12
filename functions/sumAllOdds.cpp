bool isOddNumber(int number)
{
    return number % 2 != 0;
}

int sumAllOdds(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (isOddNumber(arr[i]))
        {
            sum += arr[i];
        }
    }

    return sum;
}
