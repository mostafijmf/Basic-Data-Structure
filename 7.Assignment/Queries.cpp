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

void insertAtHead(Node *&head, long long v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, long long v)
{
    Node *newNode = new Node(v);
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
    // tmp ekhon last node e
    tmp->next = newNode;
}

void deleteNode(Node *head, int v)
{
    Node *tmp = head;
    for (int i = 1; i <= v - 1; i++)
    {
        if (tmp == NULL) return;
        if (tmp->next == NULL) return;
        tmp = tmp->next;
    }
    if (tmp == NULL) return;
    if (tmp->next == NULL) return;
    Node *deleteNode = tmp->next; // 30
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void deleteHead(Node *&head)
{
    if (head == NULL) return;
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
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
    int query;
    cin >> query;
    while (query--)
    {
        long long x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insertAtHead(head, v);
        }
        else if (x == 1)
        {
            insertAtTail(head, v);
        }
        else if (x == 2)
        {
            if (v == 0) deleteHead(head);
            else deleteNode(head, v);
        }
        printLinkedList(head);
    }
    return 0;
}