#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string str;
    Node *prev;
    Node *next;
    Node(string str)
    {
        this->str = str;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertString(Node *&head, Node *&tail, string str)
{
    Node *newNode = new Node(str);
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

Node *findWord(Node *&head, Node *temp, string visit)
{
    Node *tmp = head;
    bool str = false;
    while (tmp != NULL)
    {
        if (tmp->str == visit)
        {
            str = true;
            break;
        }
        tmp = tmp->next;
    }
    if (str)
        cout << tmp->str;
    else
    {
        cout << "Not Available";
        tmp = temp;
    }
    return tmp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        string str;
        cin >> str;
        if (str == "end") break;
        insertString(head, tail, str);
    }

    int q;
    cin >> q;
    getchar();
    Node *temp = head;
    while (q--)
    {
        string str, visit;
        cin >> str;
        if (str == "visit")
        {
            cin >> visit;
            temp = findWord(head,temp, visit);
        }
        else if (str == "next")
        {
            if (temp->next != NULL)
            {
                cout << temp->next->str;
                temp = temp->next;
            }
            else
                cout << "Not Available";
        }
        else if (str == "prev")
        {
            if (temp->prev != NULL)
            {
                cout << temp->prev->str;
                temp = temp->prev;
            }
            else
                cout << "Not Available";
        }
        else
            cout << "Not Available";
        cout << endl;
    }

    return 0;
}
