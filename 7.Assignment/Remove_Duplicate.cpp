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

void removeDuplicate(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *tmpNext = tmp;
        while (tmpNext->next != NULL)
        {
            if (tmp->val == tmpNext->next->val)
            {
                Node *deleteNode = tmpNext->next;
                tmpNext->next = tmpNext->next->next;
                delete deleteNode;
                continue;
            }
            tmpNext = tmpNext->next;
        }
        tmp = tmp->next;
    }
}

void printLinkedList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, tail, val);
    }
    removeDuplicate(head);
    printLinkedList(head);
    return 0;
}
