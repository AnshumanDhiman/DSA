#include <iostream>

using namespace std;

#include "insertNodeAtPosition.h"

int main()
{
    Node *head = takeInput();
    print(head);
    int i, data;
    cin >> i >> data;
    head = insertNode(head, i, data);
    print(head);
}