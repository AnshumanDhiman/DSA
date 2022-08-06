#include <iostream>

using namespace std;

void printAge(int age[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << age[i] << endl;
    }
}

int main()
{
    int age[5] = {11, 14, 15, 18, 20};
    printAge(age, 5);
    return 0;
}
