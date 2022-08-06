int linearSearch(int *arr, int n, int x)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            return i;
            break;
        }
    }
    return -1;
}