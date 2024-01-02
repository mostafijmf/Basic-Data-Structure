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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
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
    void pop()
    {
        sz--;
        if (head->next == NULL)
        {
            delete head;
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        Node *deleteNode = head;
        head = head->next;
        head->prev = NULL;
        delete deleteNode;
    }
    int top()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st1;
    int n1;
    cin >> n1;
    while (n1--)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    myStack st2;
    int n2;
    cin >> n2;
    while (n2--)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    if (st1.size() == st2.size())
    {
        bool flag = false;
        while (!st1.empty())
        {
            if (st1.top() != st2.top()) flag = true;
            st1.pop();
            st2.pop();
        }
        if (flag) cout << "NO" << endl;
        else cout << "YES";
    }
    else cout << "NO";

    return 0;
}
