#include <iostream>

#include "linkedList.h"

using namespace std;

int main()
{
    // creation of LL Statically
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    n1.next = &n2;
    Node n3(3);
    n2.next = &n3;
    Node n4(4);
    n3.next = &n4;
    Node n5(5);
    n4.next = &n5;

    cout << n1.data << " " << n2.data << " " << n3.data << " " << n4.data << " " << n5.data << " " << endl;

    // creation of LL Dynamically
    Node *n6 = new Node(10);
    Node *n7 = new Node(20);
    n6->next = n7;
    Node *n8 = new Node(30);
    n7->next = n8;
    Node *n9 = new Node(40);
    n8->next = n9;
    Node *n10 = new Node(50);
    n9->next = n10;

    cout << n6->data << " " << n7->data << " " << n8->data << " " << n9->data << " " << n10->data << endl;
}