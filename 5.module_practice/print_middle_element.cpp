#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void printMiddleElement(Node *head)
{
    Node *s = head;
    int size = 0;
    while (s != NULL)
    {
        size++;
        s = s->next;
    }
    int div = size / 2;

    Node *tmp = head;
    for (int i = 0; i <= div; i++)
    {
        if (size % 2 == 0)
        {
            if (i == (div - 1) || i == div) cout << tmp->val << " ";
        }
        else
        {
            if (i == div) cout << tmp->val;
        }
        tmp = tmp->next;
    }
}

int main()
{
    int val;
    Node *head = NULL;
    cout << "Insert element: ";
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head, val);
    }
    printMiddleElement(head);

    return 0;
}
