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

void insert_at_tail(Node *&head, int v)
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

void insert_at_position(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *tmp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
            if (tmp == NULL)
            {
                cout << "\nInvalid\n";
                return;
            }
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    cout << "Enter: ";
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, v);
    }

    cout << "Enter total queries: ";
    int query;
    cin >> query;
    for (int i = 0; i < query; i++)
    {
        cout << "Enter index and value: ";
        int index, value;
        cin >> index >> value;
        insert_at_position(head, index, value);
        print_linked_list(head);
    }
    return 0;
}