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

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->prev = tail;
    tail->next = newNode;
    tail = tail->next;
}

void insertAtPosition(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
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

void print(Node *head, Node *tail)
{
    Node *tmp1 = head;
    cout << "L -> ";
    while (tmp1 != NULL)
    {
        cout << tmp1->val << " ";
        tmp1 = tmp1->next;
    }
    cout << endl;
    Node *tmp2 = tail;
    cout << "R -> ";
    while (tmp2 != NULL)
    {
        cout << tmp2->val << " ";
        tmp2 = tmp2->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
            insertHead(head, tail, v);
        else if (size(head) == x)
            insertAtTail(head, tail, v);
        else if (size(head) > x)
            insertAtPosition(head, x, v);
        else
        {
            cout << "Invalid" << endl;
            continue;
        }
        print(head, tail);
    }

    return 0;
}
