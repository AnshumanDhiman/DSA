void arrange(int *arr, int n)
{
    int val = 1;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (val % 2 == 0)
        {
            arr[j] = val;
            val++;
            j--;
        }
        else
        {
            arr[i] = val;
            val++;
            i++;
        }
    }
}