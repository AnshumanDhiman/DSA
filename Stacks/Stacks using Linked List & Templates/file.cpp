
template <typename T>
class Node
{
public:
    Node<T> *next;
    T data;

    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class StackUsingLL
{
    Node<T> *head;
    int size;

public:
    StackUsingLL()
    {
        head = NULL;
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

    void push(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    }

    T pop()
    {
        if (isEmpty())
        {
            return 0;
        }
        int ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    T top()
    {
        if (isEmpty())
        {
            return 0;
        }
        return head->data;
    }
};