void swapAlternate(int *arr, int size)
{
    // Write your code here
    for (int i = 0, j = i + 1; i < size, j < size; i++, j++)
    {
        int temp = arr[j];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}