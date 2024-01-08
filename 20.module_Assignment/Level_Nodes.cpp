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

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}

void levelNodes(Node *root, int x)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    vector<int> v;
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        if(level == x) v.push_back(node->val);

        if(node->left) q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});
    }

    if(!v.empty())
    {
        for(int val: v)
            cout << val << " ";
    }
    else cout << "Invalid";
}

int main()
{
    Node *root = inputLevelOrder();
    int x;
    cin >> x;
    levelNodes(root, x);
    
    return 0;
}
