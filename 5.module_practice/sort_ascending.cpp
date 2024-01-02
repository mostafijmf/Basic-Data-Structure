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

void insertAtTail(Node *&head, int v)
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
    tmp->next = newNode;
}

void sortAscendingOrder(Node *head)
{
    Node *tmp = head;
    bool flag = true;
    while (tmp != NULL)
    {
        if (tmp->next != NULL)
        {
            if (tmp->val > tmp->next->val)
                flag = false;
        }
        tmp = tmp->next;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insertAtTail(head, v);
    }
    sortAscendingOrder(head);

    return 0;
}
