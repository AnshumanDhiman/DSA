#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << "th element of the array : ";
        cin >> arr[i];
    }
    cout << "Entered Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}