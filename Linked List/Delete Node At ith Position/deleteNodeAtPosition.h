Node *deleteNode(Node *head, int pos)
{
    int count = 0;
    Node *temp = head;
    if (head == NULL || pos < 0)
    {
        return head;
    }

    if (pos == 0)
    {
        head = head->next;
        return head;
    }
    while (temp != NULL && count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL || temp->next == NULL)
    {
        return head;
    }

    if (temp != NULL)
    {
        Node *a = temp->next;

        temp->next = a->next;
        delete a;
    }
    return head;
    // Write your code here.
}