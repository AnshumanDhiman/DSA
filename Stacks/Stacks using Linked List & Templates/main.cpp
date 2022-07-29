#include <iostream>
#include "file.cpp"

using namespace std;

int main()
{
    StackUsingLL<char> s;
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);

    cout << s.top() << endl;

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.getSize() << endl;

    cout << s.isEmpty() << endl;
}