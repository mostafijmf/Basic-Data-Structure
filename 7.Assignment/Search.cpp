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

void searchIndex(Node *head, int x)
{
    Node *tmp = head;
    int index = 0;
    bool flag = false;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            flag = true;
            break;
        }
        index++;
        tmp = tmp->next;
    }
    if (flag) cout << index << endl;
    else cout << "-1" << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val, x;
        while (true)
        {
            cin >> val;
            if (val == -1) break;
            insertAtTail(head, tail, val);
        }
        cin >> x;
        searchIndex(head, x);
    }
    return 0;
}
