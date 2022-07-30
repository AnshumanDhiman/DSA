void printIthNode(Node *head, int i)
{
    int count = 0;
    while (head != NULL)
    {
        if (count == i)
        {
            cout << head->data;
        }
        head = head->next;
        count++;
    }
}