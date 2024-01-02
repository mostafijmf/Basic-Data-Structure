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
        cout << "\n\nInserted head\n\n";
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
    cout << "\n\nInserted tail\n\n";
}

void insert_at_position(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
        cout << "\n\nInserted at position " << pos << "\n\n";
    }
}

void delete_from_position(Node *&head, int pos)
{
    Node *tmp = head;
    if (pos == 1)
    {
        head = head->next;
        delete tmp;
        cout << "\nHead deleted\n\n";
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
}

void print_linked_list(Node *head)
{
    cout << "Your Linked List: ";
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
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any Position" << endl;
        cout << "Option 4: Delete from position" << endl;
        cout << "Option 0: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            insert_at_position(head, pos, v);
        }
        else if (op == 4)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            delete_from_position(head, pos);
        }
        else if (op == 0)
        {
            break;
        }
    }
    return 0;
}