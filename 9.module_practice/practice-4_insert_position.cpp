#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtPosition(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next->prev = newNode;
    tmp->next = newNode;
}

void insertAtTail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void printNormal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void printReverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
            insertHead(head, tail, val);
        else if (pos == size(head))
        {
            insertAtTail(tail, val);
        }
        else if (pos < size(head))
        {
            insertAtPosition(head, pos, val);
        }
        else
        {
            cout << "Invalid" << endl;
            continue;
        }

        printNormal(head);
        cout << endl;
        printReverse(tail);
        cout << endl;
    }
    return 0;
}
