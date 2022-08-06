#include <iostream>
using namespace std;

#include "linearSearchArray.h"

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        int val;
        cin >> val;
        cout << linearSearch(arr, n, val) << endl;
    }
    return 0;
}