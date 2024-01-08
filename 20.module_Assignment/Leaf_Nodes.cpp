#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *inputLevelOrder()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1) root = NULL;
    else root = new Node(val);

    queue<Node *> q;
    if (root) q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
    return root;
}

void leafNodes(Node *root)
{
    queue<Node *> q;
    if (root) q.push(root);
    vector<int> v;
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        if (f->left == NULL && f->right == NULL)
            v.push_back(f->val);

        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }

    if (!v.empty())
    {
        sort(v.begin(), v.end(), greater <>());
        for (int val : v)
            cout << val << " ";
    }
    else cout << 0;
}

int main()
{
    Node *root = inputLevelOrder();
    leafNodes(root);

    return 0;
}
