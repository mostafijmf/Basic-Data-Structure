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

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void checkSameList(Node *head1, Node *head2)
{
    bool flag = false;
    if (size(head1) == size(head2))
    {
        Node *tmp1 = head1;
        Node *tmp2 = head2;
        while (tmp1 != NULL)
        {
            if (tmp1->val != tmp2->val)
                flag = true;
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    else
    {
        flag = true;
    }

    if (flag) cout << "NO";
    else cout << "YES";
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1) break;
        insertAtTail(head1, tail1, val1);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1) break;
        insertAtTail(head2, tail2, val2);
    }
    checkSameList(head1, head2);

    return 0;
}
