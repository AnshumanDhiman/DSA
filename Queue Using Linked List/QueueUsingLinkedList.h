template <typename T>
class QueueUsingLinkedList
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    QueueUsingLinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void enqueue(T data)
    {
        size++;
        Node<T> *newNode = new Node<T>(data);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    T dequeue()
    {
        if (isEmpty())
        {
            return -1;
        }
        int ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    T front()
    {
        if (isEmpty())
        {
            return -1;
        }
        return head->data;
    }
};