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

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void getDifference(Node *head)
{
    Node *tmp = head;
    int max = tmp->val, min = tmp->val;
    while (tmp != NULL)
    {
        if (tmp->val > max)
            max = tmp->val;
        if (tmp->val < min)
            min = tmp->val;
        tmp = tmp->next;
    }
    cout << max - min;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, tail, val);
    }
    getDifference(head);

    return 0;
}
