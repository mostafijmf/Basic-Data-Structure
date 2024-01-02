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

void checkElement(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    bool flag = true;
    while (tmp1 != NULL)
    {
        if (tmp1->val != tmp2->val) flag = false;
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if (flag) cout << "YES";
    else cout << "NO";
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertElement(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1) break;
        insertElement(head2, tail2, val);
    }

    if (size(head1) == size(head2)) checkElement(head1, head2);
    else cout << "NO";

    return 0;
}
