#include <iostream>
#include "file.cpp"

using namespace std;

int main()
{
    StackUsingLL s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << s.top() << endl;

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.getSize() << endl;

    cout << s.isEmpty() << endl;
}