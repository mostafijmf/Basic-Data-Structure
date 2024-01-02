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

void deleteNodePosition(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}

void deleteHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}
void deleteTail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void print_reverse(Node *tail)
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *d = new Node(40);
    Node *tail = d;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = d;
    d->prev = b;
    int pos, val;
    cin >> pos >> val;

    // deleteNodePosition(head, pos);
    // deleteTail(tail);
    deleteHead(head);
    print_normal(head);
    cout << endl;
    print_reverse(tail);

    return 0;
}
