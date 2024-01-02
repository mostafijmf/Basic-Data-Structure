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

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void print_reverse(Node* tail){
    Node * tmp = tail;
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

    print_normal(head);
    cout << endl;
    print_reverse(tail);

    return 0;
}
