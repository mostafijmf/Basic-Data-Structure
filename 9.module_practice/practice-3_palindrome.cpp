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

void insertElement(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void printReverse(Node *head, Node *tail)
{
    Node *tmp1 = head;
    Node *tmp2 = tail;
    bool flag = true;
    while (tmp1 != NULL)
    {
        if (tmp1->val != tmp2->val)
            flag = false;
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
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
        insertElement(head, tail, val);
    }
    printReverse(head, tail);
    return 0;
}
