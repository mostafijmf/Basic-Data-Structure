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

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
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

void printMiddleElement(Node *head)
{
    Node *tmp = head;
    bool flag = false;
    while (tmp != NULL)
    {
        Node *tmpNext = tmp->next;
        while (tmpNext != NULL)
        {
            if(tmp->val == tmpNext->val) flag = true;
            tmpNext = tmpNext->next;
        }

        tmp = tmp->next;
    }
    if (flag)
        cout << "\nYES" << endl;
    else
        cout << "\nNO" << endl;
}

int main()
{
    int val;
    Node *head = NULL;
    cout << "Insert element: ";
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head, val);
    }
    printMiddleElement(head);

    return 0;
}
