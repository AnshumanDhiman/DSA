#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 100; i++)
    {
        cout << "Capacity : " << v.capacity() << endl;
        cout << "Size : " << v.size() << endl;
        v.push_back(i + 1);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1] = 100;
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;

    v.push_back(60);
    v.push_back(70);

    cout << v[3] << endl;
    cout << v[4] << endl;

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.at(1) << endl;
    cout << v.at(7) << endl;
    // try to avoid [] and use at() function
}
