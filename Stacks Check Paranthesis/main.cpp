#include <iostream>
#include <string>
using namespace std;

#include "checkParanthesis.h"

int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}